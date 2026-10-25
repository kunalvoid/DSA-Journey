#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.length()!=goal.length()){
            return false;
        }
    
       string s2=s+s;
       
       if(s2.find(goal)!=string::npos){
        return true;
       }
       else{
        return false;
       }        
    }
};

int main(){

    string s,goal;
    cin >> s >> goal;

    Solution ans;
    cout <<  ans.rotateString(s,goal);

   return 0; 
}