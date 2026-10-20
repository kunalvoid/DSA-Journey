#include<iostream>
using namespace std;
class Solution {
public:
    int GCD(int n1,int n2) {

     while(n1>0 && n2>0){

        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
     }

     if(n1==0) return n2;
     else return n1;

    }
};

int main(){
    int n1,n2;
    cout << "Enter any two numbers: " << endl;
    cin >> n1 >> n2;

    Solution s;
    int gcd=s.GCD(n1,n2);
    
    cout << "GCD: " << gcd;

   return 0; 
}


// Euclidean Algoruithm
// gcd(a,b) == gcd(a-b,b)  where a>b;

// But still time complexity is not as we want so
// gcd(a,b) == gcd(a%b,b)  where a>b;
// Till one of them becomes zero and the other is GCD as we require

// Time Complexity : o(logΦ (min(a,b)))   Φ - because division changes over time.