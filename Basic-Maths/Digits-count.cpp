#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digits=0;
    do{
        int last_digit=n%10;
        n/=10;
        digits++;
    }while(n>0);

    cout << endl << "Number of digits: " << digits;

  return 0;
}