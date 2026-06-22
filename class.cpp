#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        int age;

        void introduce() {
            cout << "Hi, I am " << name << " and I am " << age << " years old.\n";
        }
};

class Book {
    public:
        string title;
        string author;
        double price;

        void showInfo() {
            cout << "Book: " << title << " author: " << author << " price: " << price << "\n";
        }
};

int main() {
    Book b1;
    b1.title = "test";
    b1.author = "test";
    b1.price = 19.99;

    b1.showInfo();

    Book b2;
    b2.title = "test2";
    b2.author = "test2";
    b2.price = 20.00;

    b2.showInfo();
    
    return 0;
}
