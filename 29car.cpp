#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    string color;
    static int carCount;  // Static variable shared by all objects

public:
    // Constructor - increments count
    Car(string m, string c) {
        model = m;
        color = c;
        carCount++;  // Increment when object is created
    }
    
    // Display details
    void display() {
        cout << "Model: " << model << ", Color: " << color << endl;
    }
    
    // Static function to get total cars
    static int getTotalCars() {
        return carCount;
    }
};

// Initialize static variable
int Car::carCount = 0;

int main() {
    cout << "Creating Car objects..." << endl;
    
    Car car1("Tesla Model 3", "Red");
    car1.display();
    
    Car car2("BMW X5", "Black");
    car2.display();
    
    Car car3("Audi A4", "White");
    car3.display();
    
    cout << "\nTotal Cars Created: " << Car::getTotalCars() << endl;
    
    return 0;
}