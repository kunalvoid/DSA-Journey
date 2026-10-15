#include<iostream>
using namespace std;
void pattern20(int n){
    
    int gap=2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }

        for(int space=1; space<=gap; space++){
            cout << " ";
        }
        
       for(int k=1; k<=stars; k++){
            cout << "*";
        }
        cout << endl;
        if(i<n) gap-=2;
        else gap+=2;
    }

}

int main(){
  int n;
   cin >> n;
   pattern20(n);
 return 0;
}