#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {

     vector<int>v;

     for(int i=1; i*i<=n; i++){

        if(n%i==0){
            v.push_back(i);

            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
     }
     return v;

    //  for(int i=1; i<=n; i++){
        
    //     if(n%i==0){
    //        v.push_back(i); 
    //     }
    //  }
     return v;
    }
};

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    Solution s;
   for(auto it : s.divisors(n)){
    cout << it << " ";
   } 
}