#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 56, num2 = 98;
    int gcd = findGCD(num1, num2);

    cout << "Input: " << num1 << ", " << num2 << endl;
    cout << "Output: " << gcd << endl;

    return 0;
}