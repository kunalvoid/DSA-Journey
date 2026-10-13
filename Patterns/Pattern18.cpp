#include<iostream>
using namespace std;
void pattern18(int n){
for (int i=1; i<=n; i++){

   for(char ch='E'-(i-1); ch<='E'; ch++){
       cout << ch;
   }
   cout << endl;
 }
}

int main(){
  int n;
   cin >> n;
   pattern18(n);
 return 0;
}