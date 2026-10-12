#include<iostream>
using namespace std;
void pattern15(int n){
    for(int i=1; i<=n; i++){
        char ch='A'+i-1;
        for(int j=1; j<=i; j++){
           cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
  int n;
   cin >> n;
   pattern15(n);
 return 0;
}