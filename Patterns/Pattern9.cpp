#include<iostream>
using namespace std;
void pattern7(int n){
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        
        for(int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<i; j++){
            cout << " ";
        }
        
        for(int k=1; k<=2*n-(2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
}


int main(){
  int n;
   cin >> n;
   pattern7(n);
   pattern8(n);
 return 0;
}