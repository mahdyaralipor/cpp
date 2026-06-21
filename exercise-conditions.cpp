#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num < 0){
        cout << "number is negative\n";
        return 0;
    }
    if(num > 0){
        cout << "number is positive\n";
        return 0;
    }

    cout << "number zero\n";
    return 0;
}
