#include "Meals and Ingredients.h"
void start() {
    cout << "\t\t\t\t\t"; cout << char(218); for (int i = 0; i < 30; i++)cout << char(196); cout << char(191) << endl;
    cout << "\t\t\t\t\t"; cout << char(179) << "    Welcome To Riko Cuzine    " << char(179) << endl;
    cout << "\t\t\t\t\t"; cout << char(192); for (int i = 0; i < 30; i++)cout << char(196); cout << char(217) << endl;
    cout << "\n";
    cout << "\t\t\t\t\t"; cout << char(218); for (int i = 0; i < 30; i++)cout << char(196); cout << char(191) << endl;
    cout << "\t\t\t\t\t"; cout << char(179) << "          Main Menu           " << char(179) << endl;
    cout << "\t\t\t\t\t"; cout << char(192); for (int i = 0; i < 30; i++)cout << char(196); cout << char(217) << endl;
    cout << "\n";
    cout << "\t\t\t\t\t"; cout << char(218); for (int i = 0; i < 30; i++)cout << char(196); cout << char(191) << endl;
    cout << "\t\t\t\t\t"; cout << char(179) << "         Meal Menu - 1        " << char(179) << endl;
    cout << "\t\t\t\t\t"; cout << char(192); for (int i = 0; i < 30; i++)cout << char(196); cout << char(217) << endl;
    cout << "\n";
    cout << "\t\t\t\t\t"; cout << char(218); for (int i = 0; i < 30; i++)cout << char(196); cout << char(191) << endl;
    cout << "\t\t\t\t\t"; cout << char(179) << "       Create Meal - 2        " << char(179) << endl;
    cout << "\t\t\t\t\t"; cout << char(192); for (int i = 0; i < 30; i++)cout << char(196); cout << char(217) << endl;
    cout << "\n";
    cout << "\t\t\t\t\t"; cout << char(218); for (int i = 0; i < 30; i++)cout << char(196); cout << char(191) << endl;
    cout << "\t\t\t\t\t"; cout << char(179) << "            Exit - 3          " << char(179) << endl;
    cout << "\t\t\t\t\t"; cout << char(192); for (int i = 0; i < 30; i++)cout << char(196); cout << char(217) << endl;
    cout << "\n";
    cout << "\t\t\t\t\t" << "          Your Choice:";
    int opt;
    cin >> opt;
    if (opt == 1) {
        int mealChoice;
        system("cls");
        cout << "\n\n\t\t\t\t\t" << "     List of Available Meals:\n";
        cout << "1.Pizza\n";
        cout << "2.Burger\n";
        cout << "3.Salad\n";
        cout << "Your Choice:"; cin >> mealChoice;
        Oven oven;
        Toster toster;
        ByHand byHand;
        if (mealChoice == 1) {
            system("cls");
            cout << "Available kinds of Pizza:\n";
            cout << "1.American Hot\n";
            cout << "2.Chicken Ranch\n";
            cout << "3.Spicy Garden Special\n";
            cout << "4.Chicken BBQ\n";
            cout << "5.Mexican\n";
            cout << "Enter the number of Pizza for see description of Meal\n";
            int descriptionOfPizza;
            cout << "Your Choice:"; cin >> descriptionOfPizza;
            if (descriptionOfPizza == 1) {
                system("cls");
                Pizza americanHot("American Hot");
                Tomatoes* tomato = new Tomatoes("Tomato", 6, 3, 18, 210);
                americanHot.addIngredient(tomato, 5);
                Cheese* mozarella = new Cheese("Mozarella", 17, 28, 20, 292);
                americanHot.addIngredient(mozarella, 7);
                Spices* pepperoni = new Spices("Pepperoni", 5, 7, 8, 105);
                americanHot.addIngredient(pepperoni, 4);
                Spices* peppers = new Spices("Jalapeno", 4, 8, 11, 75);
                americanHot.addIngredient(peppers, 5);
                cout << "Name:" << americanHot.getName() << endl;
                americanHot.printRecipeForMenu1();
                system("start AmericanHot.png");
                cout << "Do you want to us prepare your Pizza Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    oven.cook(americanHot);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete tomato;
                delete mozarella;
                delete pepperoni;
                delete peppers;
            }
            if (descriptionOfPizza == 2) {
                system("cls");
                Pizza chickenRanch("Chicken Ranch");
                Meat* grilledChicken = new Meat("Grilled Chicken", 30, 40, 50, 600);
                chickenRanch.addIngredient(grilledChicken, 6);
                Tomatoes* tomato = new Tomatoes("Tomato", 6, 3, 18, 210);
                chickenRanch.addIngredient(tomato, 5);
                Sauce* ranch = new Sauce("Ranch", 5, 11, 12, 89);
                chickenRanch.addIngredient(ranch, 5);
                Cheese* mozarella = new Cheese("Mozarella", 17, 28, 20, 292);
                chickenRanch.addIngredient(mozarella, 7);
                cout << "Name:" << chickenRanch.getName() << endl;
                chickenRanch.printRecipeForMenu1();
                system("start ChickenRanch.png");
                cout << "Do you want to us prepare your Pizza Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    oven.cook(chickenRanch);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete grilledChicken;
                delete tomato;
                delete ranch;
                delete mozarella;
            }
            if (descriptionOfPizza == 3) {
                system("cls");
                Pizza spicyGarden("Spicy Garden Special");
                Tomatoes* tomato = new Tomatoes("Tomato", 6, 3, 18, 210);
                spicyGarden.addIngredient(tomato, 5);
                Mushrooms* mushroom = new Mushrooms("Mushroom", 4, 7, 19, 106);
                spicyGarden.addIngredient(mushroom, 7);
                Cheese* mozarella = new Cheese("Mozarella", 17, 28, 20, 292);
                spicyGarden.addIngredient(mozarella, 7);
                Spices* pepperoni = new Spices("Pepperoni", 5, 7, 8, 105);
                spicyGarden.addIngredient(pepperoni, 4);
                Spices* peppers = new Spices("Jalapeno", 4, 8, 11, 75);
                spicyGarden.addIngredient(peppers, 5);
                Spices* greenPeppers = new Spices("Green Peppers", 4, 8, 11, 75);
                spicyGarden.addIngredient(peppers, 5);
                Olive* blackOlive = new Olive("Black Olive", 7, 9, 22, 80);
                spicyGarden.addIngredient(blackOlive, 11);
                cout << "Name:" << spicyGarden.getName() << endl;
                spicyGarden.printRecipeForMenu1();
                system("start SpicyGarden.png");
                cout << "Do you want to us prepare your Pizza Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    oven.cook(spicyGarden);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete mushroom;
                delete tomato;
                delete mozarella;
                delete pepperoni;
                delete peppers;
                delete greenPeppers;
                delete blackOlive;

            }
            if (descriptionOfPizza == 4) {
                system("cls");
                Pizza chickenBBQ("Chicken BBQ");
                Mushrooms* mushroom = new Mushrooms("Mushroom", 4, 7, 19, 106);
                chickenBBQ.addIngredient(mushroom, 7);
                Cheese* mozarella = new Cheese("Mozarella", 17, 28, 20, 292);
                chickenBBQ.addIngredient(mozarella, 7);
                Meat* grilledChicken = new Meat("Grilled Chicken", 30, 40, 50, 600);
                chickenBBQ.addIngredient(grilledChicken, 6);
                Sauce* bbqSauce = new Sauce("BBQ Sauce", 4, 8, 11, 75);
                chickenBBQ.addIngredient(bbqSauce, 2);
                cout << "Name:" << chickenBBQ.getName() << endl;
                chickenBBQ.printRecipeForMenu1();
                system("start ChickenBBQ.png");
                cout << "Do you want to us prepare your Pizza Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    oven.cook(chickenBBQ);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete mushroom;
                delete mozarella;
                delete grilledChicken;
                delete bbqSauce;
            }
            if (descriptionOfPizza == 5) {
                Pizza mexican("Mexican");
                Meat* grilledChicken = new Meat("Grilled Chicken", 30, 40, 50, 600);
                mexican.addIngredient(grilledChicken, 6);
                Tomatoes* tomato = new Tomatoes("Tomato", 6, 3, 18, 210);
                mexican.addIngredient(tomato, 5);
                Mushrooms* mushroom = new Mushrooms("Mushroom", 4, 7, 19, 106);
                mexican.addIngredient(mushroom, 7);
                Cheese* mozarella = new Cheese("Mozarella", 17, 28, 20, 292);
                mexican.addIngredient(mozarella, 7);
                Spices* peppers = new Spices("Jalapeno", 4, 8, 11, 75);
                mexican.addIngredient(peppers, 5);
                Spices* greenPeppers = new Spices("Green Peppers", 4, 8, 11, 75);
                mexican.addIngredient(peppers, 5);
                cout << "Name:" << mexican.getName() << endl;
                mexican.printRecipeForMenu1();
                system("start Mexican.png");
                cout << "Do you want to us prepare your Pizza Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    oven.cook(mexican);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete tomato;
                delete grilledChicken;
                delete mushroom;
                delete mozarella;
                delete peppers;
                delete greenPeppers;
            }
        }
        if (mealChoice == 2) {
            system("cls");
            cout << "Available kinds of Burger:\n";
            cout << "1.Hamburger\n";
            cout << "2.Big Mac\n";
            cout << "3.Royal Cheese Burger\n";
            cout << "Enter the number of Burger for see description of Meal\n";
            int descriptionOfBurger;
            cout << "Your Choice:"; cin >> descriptionOfBurger;
            if (descriptionOfBurger == 1) {
                system("cls");
                Burger hamburger("Hamburger");
                Bread* bread = new Bread("Caramelled Bread", 10, 11, 25, 300);
                hamburger.addIngredient(bread, 2);
                Meat* steak = new Meat("Steak", 20, 40, 50, 700);
                hamburger.addIngredient(steak, 1);
                Sauce* mustard = new Sauce("Mustard", 5, 7, 8, 105);
                hamburger.addIngredient(mustard, 1);
                Onion* onion = new Onion("Onion", 6, 8, 18, 65);
                hamburger.addIngredient(onion, 3);
                Cucumber* cucumber = new Cucumber("Cucumber", 17, 17, 21, 108);
                hamburger.addIngredient(cucumber, 4);
                cout << "Name:" << hamburger.getName() << endl;
                hamburger.printRecipeForMenu1();
                system("start Hamburger.png");
                cout << "Do you want to us prepare your Burger Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    toster.cook(hamburger);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete bread;
                delete steak;
                delete mustard;
                delete onion;
                delete cucumber;

            }
            if (descriptionOfBurger == 2) {
                system("cls");
                Burger bigMac("Big Mac");
                Bread* bread = new Bread("Sesamed Bread", 10, 11, 25, 300);
                bigMac.addIngredient(bread, 2);
                Meat* steak = new Meat("Steak", 20, 40, 50, 700);
                bigMac.addIngredient(steak, 2);
                Sauce* bigMacSpecial = new Sauce("Big Mac Special", 5, 7, 8, 105);
                bigMac.addIngredient(bigMacSpecial, 1);
                Onion* onion = new Onion("Onion", 6, 8, 18, 65);
                bigMac.addIngredient(onion, 3);
                Cucumber* cucumber = new Cucumber("Cucumber", 17, 17, 21, 108);
                bigMac.addIngredient(cucumber, 4);
                Cheese* cheddar = new Cheese("Cheddar", 17, 17, 21, 108);
                bigMac.addIngredient(cheddar, 2);
                cout << "Name:" << bigMac.getName() << endl;
                bigMac.printRecipeForMenu1();
                system("start BigMac.png");
                cout << "Do you want to us prepare your Burger Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    toster.cook(bigMac);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete bread;
                delete steak;
                delete bigMacSpecial;
                delete onion;
                delete cucumber;
                delete cheddar;

            }
            if (descriptionOfBurger == 3) {
                system("cls");
                Burger cheeseBurger("Royal CheeseBurger");
                Bread* bread = new Bread("Caramelled and Sesamed Bread", 10, 11, 25, 500);
                cheeseBurger.addIngredient(bread, 2);
                Meat* steak = new Meat("Steak", 20, 40, 50, 700);
                cheeseBurger.addIngredient(steak, 2);
                Onion* onion = new Onion("Onion", 6, 8, 18, 65);
                cheeseBurger.addIngredient(onion, 3);
                Cucumber* cucumber = new Cucumber("Cucumber", 17, 17, 21, 108);
                cheeseBurger.addIngredient(cucumber, 4);
                Cheese* cheddar = new Cheese("Cheddar", 17, 17, 21, 108);
                cheeseBurger.addIngredient(cheddar, 4);
                Sauce* mustard = new Sauce("Mustard", 5, 7, 8, 105);
                cheeseBurger.addIngredient(mustard, 1);
                Sauce* ketchup = new Sauce("Ketchup", 5, 7, 8, 105);
                cheeseBurger.addIngredient(ketchup, 1);
                cout << "Name:" << cheeseBurger.getName() << endl;
                cheeseBurger.printRecipeForMenu1();
                system("start CheeseBurger.png");
                cout << "Do you want to us prepare your Burger Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    toster.cook(cheeseBurger);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}
                delete cookMeal;
                delete bread;
                delete steak;
                delete onion;
                delete cucumber;
                delete cheddar;
                delete mustard;
                delete ketchup;
            }
        }
        if (mealChoice == 3) {
            system("cls");
            cout << "Available kinds of Salad\n";
            cout << "1.Caesar\n";
            cout << "2.Greek\n";
            cout << "3.Tuna\n";
            cout << "Enter the number of Salad for see description of Meal\n";
            int descriptionOfSalad;
            cout << "Your Choice:"; cin >> descriptionOfSalad;
            if (descriptionOfSalad == 1) {
                system("cls");
                Salad caesar("Caesar Salad");
                Bread* crutons = new Bread("Crutons", 11, 14, 28, 450);
                caesar.addIngredient(crutons, 3);
                Tomatoes* tomato = new Tomatoes("Tomato", 10, 11, 25, 209);
                caesar.addIngredient(tomato, 4);
                Meat* grilledChicken = new Meat("Grilled Chicken", 20, 40, 50, 700);
                caesar.addIngredient(grilledChicken, 1);
                Greens* lettuce = new Greens("Lettuce", 5, 7, 8, 105);
                caesar.addIngredient(lettuce, 1);
                Onion* onion = new Onion("Onion", 6, 8, 18, 65);
                caesar.addIngredient(onion, 3);
                Cheese* parmesan = new Cheese("Parmesan", 9, 27, 23, 208);
                caesar.addIngredient(parmesan, 4);
                cout << "Name:" << caesar.getName() << endl;
                caesar.printRecipeForMenu1();
                system("start Caesar.png");
                cout << "Do you want to us prepare your Salad Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    byHand.cook(caesar);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete crutons;
                delete tomato;
                delete grilledChicken;
                delete lettuce;
                delete onion;
                delete parmesan;

            }
            if (descriptionOfSalad == 2) {
                system("cls");
                Salad greek("Greek Salad");
                Cucumber* cucumber = new Cucumber("Cucumber", 11, 14, 28, 450);
                greek.addIngredient(cucumber, 4);
                Tomatoes* tomato = new Tomatoes("Tomato", 10, 11, 25, 209);
                greek.addIngredient(tomato, 4);
                Olive* blackOlive = new Olive("blackOlive", 20, 40, 50, 700);
                greek.addIngredient(blackOlive, 4);
                Greens* lettuce = new Greens("Lettuce", 5, 7, 8, 105);
                greek.addIngredient(lettuce, 2);
                Cheese* feta = new Cheese("Feta", 9, 27, 23, 208);
                greek.addIngredient(feta, 4);
                cout << "Name:" << greek.getName() << endl;
                greek.printRecipeForMenu1();
                system("start Greek.png");
                cout << "Do you want to us prepare your Salad Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    byHand.cook(greek);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete cucumber;
                delete tomato;
                delete blackOlive;
                delete lettuce;
                delete feta;

            }
            if (descriptionOfSalad == 3) {
                system("cls");
                Salad tuna("Tuna Salad");
                Meat* tunaMeal = new Meat("Tuna", 27, 21, 46, 700);
                tuna.addIngredient(tunaMeal, 2);
                Cucumber* cucumber = new Cucumber("Cucumber", 11, 14, 28, 450);
                tuna.addIngredient(cucumber, 4);
                Olive* blackOlive = new Olive("blackOlive", 20, 40, 50, 700);
                tuna.addIngredient(blackOlive, 4);
                Greens* lettuce = new Greens("Lettuce", 5, 7, 8, 105);
                tuna.addIngredient(lettuce, 2);
                Corn* corn = new Corn("Corn", 11, 14, 18, 94);
                tuna.addIngredient(corn, 25);
                cout << "Name:" << tuna.getName() << endl;
                tuna.printRecipeForMenu1();
                system("start Tuna.png");
                cout << "Do you want to us prepare your Salad Yes\\No\n";
                string* cookMeal = new string("");
                cin >> *cookMeal;
                if (*cookMeal == "Yes" || *cookMeal == "yes") {
                    cout << "Please Wait..\n";
                    Sleep(2000);
                    byHand.cook(tuna);
                }
                if (*cookMeal == "No" || *cookMeal == "no") {}

                delete cookMeal;
                delete tunaMeal;
                delete lettuce;
                delete blackOlive;
                delete corn;
                delete cucumber;
            }
        }

    }
    if (opt == 2) {
        system("cls");
        cout << "Select default meal to create new one\n";
        cout << "1.Pizza\n";
        cout << "2.Burger\n";
        cout << "3.Salad\n";
        int createMeal;
        cout << "Your Choice:"; cin >> createMeal;
        cout << "Available Ingredients:\n";
        cout << "1.Mushroom\n";
        cout << "2.Meat\n";
        cout << "3.Spices\n";
        cout << "4.Cheese\n";
        cout << "5.Tomato\n";
        cout << "6.Pepperoni\n";
        cout << "7.Sausage\n";
        cout << "8.Olive\n";
        cout << "9.Cucumber\n";
        cout << "10.Onion\n";
        cout << "11.Sauce\n";
        cout << "12.Greens\n";
        cout << "13.Corn\n";
        Pizza userPizza("Pizza");
        Burger userBurger("Burger");
        Salad userSalad("Salad");
        Oven oven;
        Toster toster;
        ByHand byHand;
        Mushrooms* mushroom = new Mushrooms("Mushroom", 14, 24, 34, 87);
        Meat* meat = new Meat("Meat", 19, 40, 56, 556);
        Spices* spices = new Spices("Meat", 25, 40, 35, 126);
        Cheese* cheese = new Cheese("Cheese", 35, 30, 55, 200);
        Tomatoes* tomato = new Tomatoes("Tomato", 35, 30, 55, 200);
        Pepperoni* pepperoni = new Pepperoni("Pepperoni", 25, 20, 45, 192);
        Sausage* sausage = new Sausage("Sausage", 44, 22, 42, 456);
        Olive* olive = new Olive("Olive", 44, 22, 42, 456);
        Cucumber* cucumber = new Cucumber("Cucumber", 44, 22, 42, 456);
        Onion* onion = new Onion("Onion", 31, 45, 62, 336);
        Sauce* sauce = new Sauce("Sauce", 21, 35, 32, 222);
        Greens* greens = new Greens("Greens", 21, 35, 32, 222);
        Corn* corn = new Corn("Corn", 21, 35, 32, 222);

        if (createMeal == 1) {
            int countForWhile = 0;
            while (countForWhile != 1) {
                int selectIngr;
                cout << "Enter the number of ingredient to add:\n";
                cout << "Your Choice:"; cin >> selectIngr;
                if (selectIngr == 1) {
                    int amount;
                    cout << "Your Select is:" << mushroom->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(mushroom, amount);
                    cout << mushroom->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 2) {
                    int amount;
                    cout << "Your Select is:" << meat->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(meat, amount);
                    cout << meat->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 3) {
                    int amount;
                    Spices* spices = new Spices("Spices", 25, 40, 35, 126);
                    cout << "Your Select is:" << spices->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(spices, amount);
                    cout << spices->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 4) {
                    int amount;
                    cout << "Your Select is:" << cheese->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(cheese, amount);
                    cout << cheese->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 5) {
                    int amount;
                    cout << "Your Select is:" << tomato->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(tomato, amount);
                    cout << tomato->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 6) {
                    int amount;
                    Pepperoni* pepperoni = new Pepperoni("Pepperoni", 25, 20, 45, 192);
                    cout << "Your Select is:" << pepperoni->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(pepperoni, amount);
                    cout << pepperoni->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 7) {
                    int amount;
                    cout << "Your Select is:" << sausage->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(sausage, amount);
                    cout << sausage->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 8) {
                    int amount;
                    cout << "Your Select is:" << olive->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(olive, amount);
                    cout << olive->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 9) {
                    int amount;
                    cout << "Your Select is:" << cucumber->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(cucumber, amount);
                    cout << cucumber->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 10) {
                    int amount;
                    cout << "Your Select is:" << onion->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(onion, amount);
                    cout << onion->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 11) {
                    int amount;
                    cout << "Your Select is:" << sauce->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(sauce, amount);
                    cout << sauce->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 12) {
                    int amount;
                    cout << "Your Select is:" << greens->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(greens, amount);
                    cout << greens->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                if (selectIngr == 13) {
                    int amount;
                    cout << "Your Select is:" << corn->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userPizza.addIngredient(corn, amount);
                    cout << corn->getName() << " Sucsessfully Added To Your Pizza\n";
                }
                cout << "Do you want to add ingredient again? Yes\\No:";
                string* addOrNo = new string("");; cin >> *addOrNo;
                system("cls");
                if (*addOrNo == "Yes" || *addOrNo == "yes")countForWhile = 0;
                if (*addOrNo == "No" || *addOrNo == "no") {
                    system("cls");
                    cout << "Do you want see receipt of your Pizza Yes\\No\n";
                    string* seeReceipt = new string("");
                    cin >> *seeReceipt;
                    if (*seeReceipt == "Yes" || *seeReceipt == "yes") {
                        userPizza.printRecipe();
                    }
                    if (*seeReceipt == "No" || *seeReceipt == "no") {}
                    cout << "Do you want to us prepare your Pizza Yes\\No\n";
                    string* cookMeal = new string("");
                    cin >> *cookMeal;
                    if (*cookMeal == "Yes" || *cookMeal == "yes") {
                        cout << "Please Wait..\n";
                        Sleep(2000);
                        oven.cook(userPizza);
                    }
                    if (*cookMeal == "No" || *cookMeal == "no") {}

                    delete seeReceipt;
                    delete cookMeal;
                    break;
                }
                delete addOrNo;

            }

        }
        if (createMeal == 2) {
            int countForWhile = 0;
            while (countForWhile != 1) {
                int selectIngr;
                cout << "Enter the number of ingredient to add:\n";
                cout << "Your Choice:"; cin >> selectIngr;
                if (selectIngr == 1) {
                    int amount;
                    cout << "Your Select is:" << mushroom->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(mushroom, amount);
                    cout << mushroom->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 2) {
                    int amount;
                    cout << "Your Select is:" << meat->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(meat, amount);
                    cout << meat->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 3) {
                    int amount;
                    Spices* spices = new Spices("Spices", 25, 40, 35, 126);
                    cout << "Your Select is:" << spices->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(spices, amount);
                    cout << spices->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 4) {
                    int amount;
                    cout << "Your Select is:" << cheese->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(cheese, amount);
                    cout << cheese->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 5) {
                    int amount;
                    cout << "Your Select is:" << tomato->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(tomato, amount);
                    cout << tomato->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 6) {
                    int amount;
                    Pepperoni* pepperoni = new Pepperoni("Pepperoni", 25, 20, 45, 192);
                    cout << "Your Select is:" << pepperoni->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(pepperoni, amount);
                    cout << pepperoni->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 7) {
                    int amount;
                    cout << "Your Select is:" << sausage->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(sausage, amount);
                    cout << sausage->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 8) {
                    int amount;
                    cout << "Your Select is:" << olive->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(olive, amount);
                    cout << olive->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 9) {
                    int amount;
                    cout << "Your Select is:" << cucumber->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(cucumber, amount);
                    cout << cucumber->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 10) {
                    int amount;
                    cout << "Your Select is:" << onion->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(onion, amount);
                    cout << onion->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 11) {
                    int amount;
                    cout << "Your Select is:" << sauce->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(sauce, amount);
                    cout << sauce->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 12) {
                    int amount;
                    cout << "Your Select is:" << greens->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(greens, amount);
                    cout << greens->getName() << " Sucsessfully Added To Your Burger\n";
                }
                if (selectIngr == 13) {
                    int amount;
                    cout << "Your Select is:" << corn->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userBurger.addIngredient(corn, amount);
                    cout << corn->getName() << " Sucsessfully Added To Your Burger\n";
                }
                cout << "Do you want to add ingredient again? Yes\\No:";
                string* addOrNo = new string("");; cin >> *addOrNo;
                system("cls");
                if (*addOrNo == "Yes" || *addOrNo == "yes")countForWhile = 0;
                if (*addOrNo == "No" || *addOrNo == "no") {
                    system("cls");
                    cout << "Do you want see receipt of your Burger Yes\\No\n";
                    string* seeReceipt = new string("");
                    cin >> *seeReceipt;
                    if (*seeReceipt == "Yes" || *seeReceipt == "yes") {
                        userBurger.printRecipe();
                    }
                    if (*seeReceipt == "No" || *seeReceipt == "no") {}
                    cout << "Do you want to us prepare your Burger Yes\\No\n";
                    string* cookMeal = new string("");
                    cin >> *cookMeal;
                    if (*cookMeal == "Yes" || *cookMeal == "yes") {
                        cout << "Please Wait..\n";
                        Sleep(2000);
                        toster.cook(userBurger);
                    }
                    if (*cookMeal == "No" || *cookMeal == "no") {}

                    delete seeReceipt;
                    delete cookMeal;
                    break;
                }
                delete addOrNo;
            }
        }
        if (createMeal == 3) {
            int countForWhile = 0;
            while (countForWhile != 1) {
                int selectIngr;
                cout << "Enter the number of ingredient to add:\n";
                cout << "Your Choice:"; cin >> selectIngr;
                if (selectIngr == 1) {
                    int amount;
                    cout << "Your Select is:" << mushroom->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(mushroom, amount);
                    cout << mushroom->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 2) {
                    int amount;
                    cout << "Your Select is:" << meat->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(meat, amount);
                    cout << meat->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 3) {
                    int amount;
                    Spices* spices = new Spices("Spices", 25, 40, 35, 126);
                    cout << "Your Select is:" << spices->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(spices, amount);
                    cout << spices->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 4) {
                    int amount;
                    cout << "Your Select is:" << cheese->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(cheese, amount);
                    cout << cheese->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 5) {
                    int amount;
                    cout << "Your Select is:" << tomato->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(tomato, amount);
                    cout << tomato->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 6) {
                    int amount;
                    Pepperoni* pepperoni = new Pepperoni("Pepperoni", 25, 20, 45, 192);
                    cout << "Your Select is:" << pepperoni->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(pepperoni, amount);
                    cout << pepperoni->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 7) {
                    int amount;
                    cout << "Your Select is:" << sausage->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(sausage, amount);
                    cout << sausage->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 8) {
                    int amount;
                    cout << "Your Select is:" << olive->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(olive, amount);
                    cout << olive->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 9) {
                    int amount;
                    cout << "Your Select is:" << cucumber->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(cucumber, amount);
                    cout << cucumber->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 10) {
                    int amount;
                    cout << "Your Select is:" << onion->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(onion, amount);
                    cout << onion->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 11) {
                    int amount;
                    cout << "Your Select is:" << sauce->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(sauce, amount);
                    cout << sauce->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 12) {
                    int amount;
                    cout << "Your Select is:" << greens->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(greens, amount);
                    cout << greens->getName() << " Sucsessfully Added To Your Salad\n";
                }
                if (selectIngr == 13) {
                    int amount;
                    cout << "Your Select is:" << corn->getName() << endl;
                    cout << "Please enter the amount:";  cin >> amount;
                    if (amount > 10)amount = 9;
                    userSalad.addIngredient(corn, amount);
                    cout << corn->getName() << " Sucsessfully Added To Your Salad\n";
                }
                cout << "Do you want to add ingredient again? Yes\\No:";
                string* addOrNo = new string("");; cin >> *addOrNo;
                system("cls");
                if (*addOrNo == "Yes" || *addOrNo == "yes")countForWhile = 0;
                if (*addOrNo == "No" || *addOrNo == "no") {
                    system("cls");
                    cout << "Do you want see receipt of your Burger Yes\\No\n";
                    string* seeReceipt = new string("");
                    cin >> *seeReceipt;
                    if (*seeReceipt == "Yes" || *seeReceipt == "yes") {
                        userSalad.printRecipe();
                    }
                    if (*seeReceipt == "No" || *seeReceipt == "no") {}
                    cout << "Do you want to us prepare your Burger Yes\\No\n";
                    string* cookMeal = new string("");
                    cin >> *cookMeal;
                    if (*cookMeal == "Yes" || *cookMeal == "yes") {
                        cout << "Please Wait..\n";
                        Sleep(2000);
                        byHand.cook(userSalad);
                    }
                    if (*cookMeal == "No" || *cookMeal == "no") {}

                    delete seeReceipt;
                    delete cookMeal;
                    break;
                }
                delete addOrNo;
            }
        }
        delete mushroom;
        delete meat;
        delete spices;
        delete cheese;
        delete tomato;
        delete pepperoni;
        delete sausage;
        delete olive;
        delete cucumber;
        delete onion;
        delete sauce;
        delete greens;
        delete corn;
    }
    if (opt < 0 || opt > 2) {
        cout << "Program Closed\n";
    }
}
