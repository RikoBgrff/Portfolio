$(() => {

    let game = $("#game")
    let width = $(window).width()
    let height = $(window).height()
    let jigsawUrls = ['car.jpg', 'cartoon.jpg', 'car3.jpg'];
    let seconds = [400, 1500, 1800];
    let currentJigsawUrlIndex = 0;


    game
        .css({
            width: '800px',
            height: '600px',
            background: '#FFF',
            position: 'relative'
        })


    let timeInterval;
    create(jigsawUrls[currentJigsawUrlIndex]);


    function create(imgUrl) {
        game
            .css({ display: 'none' });

        $('body').append('<div id="moment"></div>');

        $('#moment')
            .css({
                width: '800px',
                height: '600px',
                background: `url("${imgUrl}")`,
            });

        $('h2').html(`${seconds[currentJigsawUrlIndex]} seconds left`);
        setTimeout(function () {
            $('#moment').remove();
            game
                .css({
                    display: 'block',
                });

            timeInterval = setInterval(decreaseTimer, 1000);
        }, 3000);
        for (let i = 0; i < 6; i++) {
            for (let j = 0; j < 8; j++) {
                let id = "p" + i + j
                game.append(`<div id="${id}"></div>`)
                $("#" + id)
                    .css({
                        position: 'absolute',
                        width: '100px',
                        height: '100px',
                        background: `url('${imgUrl}') repeat ${-100 * j}px ${-100 * i}px`,
                        transform: `rotate(${rand(-20, 20)}deg)`,
                        boxShadow: '0 0 5px #000',
                        left: rand(850, width - 150) + 'px',
                        top: rand(0, height - 200) + 'px',
                    })
                    .draggable({
                        cursor: "move",
                        cursorAt: { top: 50, left: 50 },
                        zIndex: 10,
                        snap: true,
                        drag: function () {
                            $(this).css({
                                transform: `rotate(0deg)`
                            })
                        },
                        stop: function () {
                            $(this)
                                .css({
                                    left: Math.round($(this).position().left / 100) * 100,
                                    top: Math.round($(this).position().top / 100) * 100,
                                })

                            if (seconds[currentJigsawUrlIndex] == 0) return;

                            if (isWin() == false) return;


                            game
                                .find('div')
                                .css({
                                    boxShadow: 'none'
                                });


                            setTimeout(() => {
                                clearInterval(timeInterval);

                                if (currentJigsawUrlIndex + 1 < jigsawUrls.length) {
                                    let isWant = confirm('You win the game. Congratulations !!! \nDo you want to go next puzzle ?');

                                    if (isWant) {
                                        game.html(' ');
                                        create(jigsawUrls[++currentJigsawUrlIndex]);
                                    }
                                }
                                else {
                                    alert('You solved all puzzles. You are Master.');
                                }

                            }, 100);




                        }
                    })
            }
        }
    }



    function decreaseTimer() {
        $('h2').html(`${--seconds[currentJigsawUrlIndex]} seconds left`)

        if (seconds[currentJigsawUrlIndex] == 0) {
            clearInterval(timeInterval);
            alert(`Game ends. You have finished ${currentJigsawUrlIndex} out of 3`);
        }
    }

    function rand(min, max) {
        return Math.floor(Math.random() * (max - min + 1)) + min;
    }


    function isWin() {
        let divIndex = 0;

        for (let i = 0; i < game.children().length / 8; i++) {//6 row
            for (let j = 0; j < game.children().length / 6; j++) {//8 column

                let currentDiv = game.children().eq(divIndex);

                let left = Math.trunc(currentDiv.position().left);
                let top = Math.trunc(currentDiv.position().top);

                let topConditions = (top == i * 100 || top == i * 100 - 1);

                if ((left == j * 100 && topConditions) == false) return false;

                ++divIndex;
            }
        }

        return true;

    }



})