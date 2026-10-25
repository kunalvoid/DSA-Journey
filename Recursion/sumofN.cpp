#include<iostream>
using namespace std;

int sum(int n){

    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main(){
    int n;
    cout << "Enter N: " << endl;
    cin >> n;

    cout << "Sum : " << sum(n);

   return 0; 
}