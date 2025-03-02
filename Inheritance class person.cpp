/*
Author:Victor Kinuthia
Reg No:BSE-05-0210/2024
*/
#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived class: LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books) {
        name = n;
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Another derived class: PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember pm("Victor", 987654, 5, 150.00);

    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}

