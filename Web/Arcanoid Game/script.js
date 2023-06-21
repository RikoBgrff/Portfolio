const body = document.getElementsByTagName('body')[0];
const score = document.getElementsByTagName('h2')[0];
const brickTracker = document.getElementsByTagName('h2')[1];

let winCount = loseCount = 0;


let game = {
    id: 'game',
    width: 800,
    height: 600,
    color: '#fff',
    elem: {},
    create() {
        this.elem = document.createElement("div")
        this.elem.setAttribute("id", this.id)
        document.getElementsByTagName("body")[0].appendChild(this.elem)
        this.elem.style.width = this.width + "px"
        this.elem.style.height = this.height + "px"
        this.elem.style.background = this.color
    },
    collision() {
        let brokenBrickCount = 0;
        
        for(let i = 0; i < brick.arr.length; i++ ) {
            let obj = brick.arr[i]
            if( obj.status == true &&
                ball.x + ball.d > obj.x && 
                ball.x < obj.x + obj.width &&
                ball.y + ball.d > obj.y &&
                ball.y < obj.y + obj.height) {
                obj.status = false
                obj.elem.style.background = "#00000000"
                ball.dy *= -1
            }
            
            if (obj.status == false) ++brokenBrickCount;
        }

        brickTracker.innerText = `Broken: ${brokenBrickCount}, Left: ${15 - brokenBrickCount}`;

        if (brokenBrickCount == 15) {
            clearInterval(start);
            alert('You win.')
            score.innerHTML = `Win: ${++winCount}, Lose: ${loseCount}`;
            createAll();
        }

    },
    end() {
        clearInterval(start)
        alert("You lose.")
    }
}
let ball = {
    id: 'ball',
    d: 30,
    color: 'radial-gradient(circle at 30% 30% , #fff, #ff0000, #810000)',
    elem: {},
    x: 0,
    y: 0,
    dx: 5,
    dy: -5,
    create() {
        this.y = bar.y - this.d
        this.elem = document.createElement("div")
        this.elem.setAttribute("id", this.id)
        game.elem.appendChild(this.elem)
        this.elem.style.width = this.d + "px"
        this.elem.style.height = this.d + "px"
        this.elem.style.background = this.color
    },
    move() {        
        if (this.x < 0 || this.x >= game.width - this.d) this.dx *= -1 
        if ((this.y > bar.y - this.d && this.x >= bar.x - this.d / 2 && this.x <= bar.x + bar.width - this.d / 2) ||  this.y < 0 ) {
            this.dy *= (this.y >= 0) ? -1.1 : -1;
        }
        if (this.y >= game.height - this.d) {
            game.end()
            score.innerHTML = `Win: ${winCount}, Lose: ${++loseCount}`;
            brickTracker.innerText = `Broken: 0, Left: 0`;
            createAll();

        }
        game.collision()

        this.x += this.dx
        this.y += this.dy
        this.elem.style.left = this.x + "px"
        this.elem.style.top = this.y + "px"
    }
}
let bar = {
    id: 'bar',
    width: 150,
    height: 10,
    color: '#0000AA',
    elem: {},
    x: 0,
    y: 0,
    dx: 10,
    create() {
        this.y = game.height - this.height - 10
        this.elem = document.createElement("div")
        this.elem.setAttribute("id", this.id)
        game.elem.appendChild(this.elem)
        this.elem.style.width = this.width + "px"
        this.elem.style.height = this.height + "px"
        this.elem.style.top = this.y + "px"
        this.elem.style.background = this.color
    },
    move(e) {
        console.log(e)
        if(e.keyCode == 37 && bar.x > 0) this.x -= 10
        if(e.keyCode == 39 && bar.x < 650) this.x += 10
        this.elem.style.left = this.x + "px"
    }
}
let brick = {
    sira: 3,
    sutun: 5,
    gap: 10,
    arr: [],
    create() {
        for(let i = 0; i < this.sira; i++ ) {
            for(let j = 0; j < this.sutun; j++ ) {
                let obj = new function() {
                    this.width = ( game.width - (brick.sutun + 1) * brick.gap ) / brick.sutun 
                    this.height = this.width / 5
                    this.x = j * this.width + (j + 1) * brick.gap
                    this.y = i * this.height + (i + 1) * brick.gap
                    this.color =  'orange'
                    this.elem = document.createElement("div")
                    this.status = true
                }
                this.arr.push(obj)

                game.elem.appendChild(obj.elem)
                obj.elem.style.width = obj.width + "px"
                obj.elem.style.height = obj.height + "px"
                obj.elem.style.background = obj.color
                obj.elem.style.left = obj.x + "px"
                obj.elem.style.top = obj.y + "px"
            }
        }
    }
}

let start;
document.onkeydown = bar.move.bind(bar);
createAll();

function createAll () {
    const parent = document.getElementById('game');

    if (parent !== null) {
        while (parent.firstChild) {
            parent.removeChild(parent.firstChild);
        }        

        body.removeChild(parent);
    }

    bar.x = ball.x = brick.arr.length = 0;
    ball.dy = -5;


    game.create()
    bar.create()
    ball.create()
    brick.create()    

    start = setInterval(ball.move.bind(ball), 40)    
}