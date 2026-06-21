#include <iostream>
using namespace std;

int main() {
    cout << "For loop:\n";
    for (int i = 1; i <= 5; i++){
        cout << i << " ";
    }

    cout << "\n";

    cout << "While loop:\n";
    int j = 1;
    while (j <= 5){
        cout << j << " ";
        j++;
    }
    cout << "\n";

    return 0;
}
