#include<iostream>
using namespace std;
void pattern12(int n){
    int space=2*(n-1);
    for(int i=1; i<=n; i++){
        
      //number
      for(int j=1; j<=i; j++){
        cout << j;
      }

      //space
      for(int i=1; i<=space; i++){
        cout << " ";
      }

      //number
      for(int k=i; k>=1; k--){
        cout << k;
      }
      cout << endl;
      space-=2;
    }
}

int main(){
  int n;
   cin >> n;
   pattern12(n);
 return 0;
}