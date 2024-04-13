#include <iostream>
using namespace std;

class Fruit {
public:
    string name;
    string color;
};

int main() {
    Fruit apple;
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << " " << apple.color << endl;

    Fruit* mango = new Fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << " " << mango->color << endl;

    delete mango; // Don't forget to free memory allocated by 'new'

    return 0;
}

/*This code is about creating a simple class called `Fruit` to store information about fruits. The `Fruit` class has two properties: `name` and `color`, both of which are strings.

In the `main` function, it creates an object of the `Fruit` class named `apple` and sets its `name` to "Apple" and `color` to "Red". It then prints out the `name` and `color` of the `apple` object.

Next, it dynamically creates another `Fruit` object named `mango` using the `new` keyword. It sets the `name` of `mango` to "Mango" and its `color` to "Yellow". Finally, it prints out the `name` and `color` of the `mango` object.

After using `mango`, the code frees the memory allocated for `mango` using the `delete` keyword to avoid memory leaks.*/