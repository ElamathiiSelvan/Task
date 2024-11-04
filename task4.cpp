#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int original = number;
    int reversed = 0;

    
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return original == reversed;
}

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    if (isPalindrome(inputNumber)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
