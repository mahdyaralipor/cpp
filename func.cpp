#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

double greet(string name){
    cout << "Hello " << name << "\n";
    return 0.0;
}

int multiply(int a, int b){
    return a * b;
}

bool is_even(int n){
    if(n%2 == 0){
        return true;
    }
    return false;
}

int main() {
    int x = 3, y = 4;
    cout << "Sum: " << add(x, y) << "\n";

    cout << "Multiply: " << multiply(x, y) << "\n";

    cout << "Is Even: " << is_even(1) << "\n";
    greet("mahdyar");

    return 0;
}

