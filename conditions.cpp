#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 21;
    if(age < 13){
        cout << "you`re child";
    }else if(age < 20){
        cout << "you`re teenager";
    }else {
        cout << "you`re adult";
    }

    return 0;
}
