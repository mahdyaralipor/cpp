#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "For: ";
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }

    cout << "\n";

    cout << "while: ";
    int j = 1;
    while (j <= n){
        cout << j << " ";
        j++;
    }
    cout << "\n";

    return 0;
}
