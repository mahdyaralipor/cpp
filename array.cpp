#include <iostream>
#include <string>
using namespace std;

int main() {
    int nums[5] = {1,2,3,4,5};

    cout << "Array elements:\n";
    int j = 0;
    for(int i = 0; i <= 4; i++){
        j = nums[i] + j;
    }
    cout << "\n";

    cout << j << "\n";
    string names[3] = {"Ali", "Reza", "Sara"};
    for (int i = 0; i < 3; i++){
        cout << names[i] << " \n";
    }

    string list[3];
    cin.ignore();
    for(int i = 0; i < 3; i++){
        cout << "Enter Name " << i + 1 << ": ";
        getline(cin, list[i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << list[i] << "\n";
    }


    string text = "Hello C++";
    cout << "Text: " << text << "\n";
    cout << "Length: " << text.length() << "\n";

    return 0;
}
