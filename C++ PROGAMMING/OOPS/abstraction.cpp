/*Enables us to display only essential  information while hiding implementation details*/
// pow (x,y)--> x^y

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Concrete class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Concrete class
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    circle.draw();
    rectangle.draw();

    return 0;
}


/*Certainly! Let's simplify the code and explain it in a more straightforward manner:

1. **Concept:**
   - Imagine you have different shapes, like circles and rectangles, that you want to draw.
   - Each shape has its own way of being drawn, but you want to use a simple interface to draw them without worrying about the details of how each shape is drawn.

2. **Classes:**
   - `Shape`: Represents a generic shape. It's like a blueprint for all shapes.
   - `Circle` and `Rectangle`: Concrete shapes that inherit from `Shape` and provide their specific way of being drawn.

3. **Code Explanation:**
   - `Shape` class:
     - It's an abstract class because it has a virtual function `draw()` that must be implemented by any class inheriting from `Shape`.
   - `Circle` and `Rectangle` classes:
     - They inherit from `Shape` and provide their own `draw()` implementations.
   - `main()` function:
     - Creates instances of `Circle` and `Rectangle`.
     - Calls the `draw()` function on each instance to draw the shapes.

4. **Output:**
   - The output of the program is:
     ```
     Drawing Circle
     Drawing Rectangle
     ```

5. **Conclusion:**
   - This code demonstrates abstraction by providing a simple interface (`Shape` class) to draw different shapes (`Circle` and `Rectangle`) without worrying about the specific details of how each shape is drawn.*/