#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle() {
        length = 0;
        width = 0;
    }
    
    // Set data
    void setData(float l, float w) {
        length = l;
        width = w;
    }
    
    // Calculate and return area
    float area() {
        return length * width;
    }
    
    // Display function
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect;
    
    rect.setData(10.5, 20.0);
    cout << "Rectangle Details:" << endl;
    rect.display();
    
    return 0;
}