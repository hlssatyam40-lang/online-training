#include <iostream>
using namespace std;

class Box {
private:
    float length;

public:
    // Constructor
    Box() {
        length = 0;
    }
    
    // Using 'this' pointer to resolve naming conflict
    void setLength(float length) {
        this->length = length;  // this->length = parameter length
    }
    
    // Display length
    void display() {
        cout << "Box Length: " << this->length << endl;
    }
    
    // Get length
    float getLength() {
        return length;
    }
};

int main() {
    Box box;
    
    cout << "Box Operations with 'this' pointer:" << endl;
    
    box.setLength(15.5);
    box.display();
    
    Box box2;
    box2.setLength(25.0);
    box2.display();
    
    return 0;
}