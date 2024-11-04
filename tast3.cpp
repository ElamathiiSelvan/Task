#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void armstrong_num(int n){
    int temp = n;
    string s = to_string(n);
    int l =  s.length();
    int sum = 0;
    
    while(temp != 0){
        int r = temp % 10;
        sum = sum + pow(r, l);
        temp /= 10;
    }
   
       cout << "the armstrong number is : " << sum;
}

int main(){
    int n;
    cout << "enter a number to find its armstrong number : ";
    cin >> n;
    armstrong_num(n);
}
