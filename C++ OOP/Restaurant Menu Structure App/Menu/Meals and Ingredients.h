#include <iostream>
#include <Windows.h>
using namespace std;
class Ingredient {
protected:
    Ingredient() :name(""), fats(0), protein(0), carbohydrates(0), kcal(0) {}
public:
    string name;
    double fats;
    double protein;
    double carbohydrates;
    int kcal;
    Ingredient(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) {
        setName(name);
        setFats(fats);
        setProtein(protein);
        setCarbohydrates(carbohydrates);
        setKcal(kcal);
    }
    void setName(const string name) {
        if (!name.empty()) {
            this->name = name;
        }
    }
    void setFats(const double fats) {
        if (fats <= 0) { throw "Fats must be more than 0\n"; }
        this->fats = fats;
    }
    void setProtein(const double protein) {
        if (protein <= 0) { throw "Protein must be more than 0\n"; }
        this->protein = protein;
    }
    void setCarbohydrates(const double carbohydrates) {
        if (carbohydrates <= 0) { throw "Carbohydrates must be more than 0\n"; }
        this->carbohydrates = carbohydrates;
    }
    void setKcal(const int kcal) {
        if (kcal <= 0) { throw "Kcal must be more than 0\n"; }
        this->kcal = kcal;
    }
    string getName() {
        return name;
    }
    double getFats() {
        return fats;
    }
    double getProtein() {
        return protein;
    }
    double getCarbohydrates() {
        return carbohydrates;
    }
    double getKcal() {
        return kcal;
    }
    void show() {
        cout << "=======================================\n";
        cout << "Ingredient:" << endl;
        cout << "Name:" << getName() << endl;
        cout << "Fats:" << getFats() << endl;
        cout << "Protein:" << getProtein() << endl;
        cout << "Carbohydrates:" << getCarbohydrates() << endl;
        cout << "Kcal:" << getKcal() << endl;
        cout << "=======================================\n";
    }
    virtual  ~Ingredient() = 0;


};
class Mushrooms :public Ingredient {
public:
    Mushrooms(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Meat :public Ingredient {
public:
    Meat(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Spices :public Ingredient {
public:
    Spices(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Cheese :public Ingredient {
public:
    Cheese(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Tomatoes :public Ingredient {
public:
    Tomatoes(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Pepperoni :public Ingredient {
public:
    Pepperoni(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Sausage :public Ingredient {
public:
    Sausage(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Olive :public Ingredient {
public:
    Olive(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Cucumber :public Ingredient {
public:
    Cucumber(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Onion :public Ingredient{
    public:
        Onion(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
    };
class Sauce:public Ingredient{
public:
    Sauce(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
}; 
class Bread :public Ingredient {
public:
    Bread(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Greens :public Ingredient {
public:
    Greens(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}
};
class Corn:public Ingredient {
public:
    Corn(const string name, const double fats, const double protein, const double carbohydrates, const int kcal) :Ingredient(name, fats, protein, carbohydrates, kcal) {}

};
struct RecieptItem {

    Ingredient* ingredient;//inqridient 
    int amount;
    RecieptItem() :amount(0) {}
    RecieptItem(const string name, const int amount) {
        ingredient->setName(name);
        setAmount(amount);
    }
    void setAmount(const int amount) {
        if (amount <= 0) { throw "Amount shoud be more than 0\n"; }
        this->amount = amount;
    }
    int getAmount() {
        return amount;
    }
    void show() {
        ingredient->show();
        cout << "Amount:" << getAmount() << endl;

    }
    ~RecieptItem()
    {
        delete ingredient;
    }
};
class Dish {
protected:
    RecieptItem** ingredients;
    int count = 0;
    string name;
public:
    Dish() :name("") {}
    Dish(const string name) {}
    void setName(const string name) {
        if (!name.empty()) {
            this->name = name;
        }
    }
    string getName() {
        return name;
    }
    virtual void taste() {
        cout << "Unable to identify taste of meal" << endl;
    }
    virtual void printRecipe()const {
        cout << "Name of dish:" << name << endl;
        for (size_t i = 0; i < count; i++)
        {
            ingredients[i]->show();
        }
    }
    void printRecipeForMenu1()const {
        for (size_t i = 0; i < count; i++)
        {
            ingredients[i]->show();
        }
    }
    void addIngredient(Ingredient* ingredient, int amount) {
        RecieptItem* newitem = new RecieptItem;
        newitem->ingredient = ingredient;
        newitem->setAmount(amount);
        auto items = new RecieptItem * [count + 1]{};
        for (size_t i = 0; i < count; i++)
        {
            items[i] = ingredients[i];
        }
        items[count] = newitem;
        ++count;
        delete[]ingredients;
        ingredients = items;
        items = nullptr;

    }
    virtual ~Dish() = 0;
};

class Pizza :public Dish {
public:
    Pizza() {}
    Pizza(const string name) {
        setName(name);
    }
    void taste() {
        cout << "e cosi delizioso\n";
    }
    void printRecipe() {
        Dish::printRecipe();
    }
};
class Burger :public Dish {
public:
    Burger() {}

    Burger(const string name) {
        setName(name);
    }
    void taste() {
        cout << "It is really good\n";
    }
    void printRecipe() {
        Dish::printRecipe();
    }

};
class Salad:public Dish {
public:
    Salad () {}

    Salad(const string name) {
        setName(name);
    }
    void taste() {
        cout << "It is really good\n";
    }
    void printRecipe() {
        Dish::printRecipe();
    }

};
class CookingMachine {
public: 
    Dish meal;
    virtual void cook() {
        "I dont know how to cook this meal\n";
    }
};
class Oven :public CookingMachine {
public:
    Oven(){}
    void cook(Dish meal) {
      
        for (size_t i = 20; i >0 ; i--){
        cout << "Your " << meal.getName() << " will be ready in " << i << " minutes\n";
        Sleep(1000);
        system("cls");
        }
        cout << "Your " << meal.getName() << " is ready\n";
    }
};
class Toster :public CookingMachine {
public:
    Toster(){}
    void cook(Dish meal) {

        for (size_t i = 20; i > 0; i--) {
            cout << "Your " << meal.getName() << " will be ready in " << i << " minutes\n";
            Sleep(1000);
            system("cls");
        }
        cout << "Your " << meal.getName() << " is ready\n";
    }
};
class ByHand :public CookingMachine {
public:
    ByHand() {}
    void cook(Dish meal) {

        for (size_t i = 30; i > 0; i--) {
            cout << "Your " << meal.getName() << " will be ready in " << i << " minutes\n";
            Sleep(1000);
            system("cls");
        }
        cout << "Your " << meal.getName() << " is ready\n";
    }

};
