/*
AUTHOR:Victor Kinuthia
REG NO:BSE-05-0210/2024
Group 3 member
*/
#include <iostream>
#include <string>

using namespace std;

// Define the Patient structure
struct Patient {
    string name;
    int age;
    string diagnosis;
};

// Function to display patient details
void displayPatients(const Patient& p) {
    cout << "Patient Details:\n";
    cout << "Name: " << p.name << "\n";
    cout << "Age: " << p.age << "\n";
    cout << "Diagnosis: " << p.diagnosis << "\n";
    cout << "-------------------------\n";
}

int main() {
    // Create two Patient records with user input
    Patient p1, p2;

    cout << "Enter details for Patient 1:\n";
    cout << "Name: ";
    getline(cin, p1.name);
    cout << "Age: ";
    cin >> p1.age;
    cin.ignore();  // Clear input buffer
    cout << "Diagnosis: ";
    getline(cin, p1.diagnosis);

    cout << "\nEnter details for Patient 2:\n";
    cout << "Name: ";
    getline(cin, p2.name);
    cout << "Age: ";
    cin >> p2.age;
    cin.ignore();
    cout << "Diagnosis: ";
    getline(cin, p2.diagnosis);

    cout << "\nDisplaying Patient Records:\n";
    displayPatients(p1);
    displayPatients(p2);

    return 0;
}
