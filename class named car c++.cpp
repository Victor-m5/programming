#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;

    // Constructor
    Car(string b, string m, float p, int ml) : brand(b), model(m), price(p), mileage(ml) {}

    // Display function
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Drive function
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Creating a Car object
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Displaying car details
    myCar.display();

    // Driving the car
    myCar.drive(150);
    myCar.drive(300);

    return 0;
}

