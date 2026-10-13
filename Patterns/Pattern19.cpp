#include<iostream>
using namespace std;
void pattern19(int n){
    //Top Part
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-(i-1); j++){
            cout << "*";
        }

        for(int space=1; space<=2*(i-1); space++){
            cout << " ";
        }
        
        for(int k=1; k<=n-(i-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    //Below Part
    int inspace=(2*n)-2;
      for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout << "*";
        }

        for(int space=1; space<=inspace; space++){
            cout << " ";
        }
        
        for(int k=1; k<=i; k++){
            cout << "*";
        }
        cout << endl;
        inspace-=2;
    }
}

int main(){
  int n;
   cin >> n;
   pattern19(n);
 return 0;
}