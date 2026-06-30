#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int empId;

public:
    // Constructor to initialize
    Employee(string n, int id) {
        name = n;
        empId = id;
    }
    
    // Display function
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
    }
};

int main() {
    Employee emp1("Rajesh Kumar", 5001);
    Employee emp2("Priya Sharma", 5002);
    
    cout << "Employee 1:" << endl;
    emp1.display();
    
    cout << "\nEmployee 2:" << endl;
    emp2.display();
    
    return 0;
}