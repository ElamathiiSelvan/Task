#include <iostream>
using namespace std;
void reversing_num(int n){
    int temp = n;

    int r;
    cout << "the reversed number is : ";
    while(temp!=0){
        r = temp%10;
        cout << r ;
        temp = temp/10;

    }
  
}

int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    reversing_num(n);
}
