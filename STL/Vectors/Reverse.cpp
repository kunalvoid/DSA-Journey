#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> &v,int i){
   
    int n=v.size();
    
    //Base Case
    if(i >= n-1-i){
       return;
    } 
 
    //Swap operation
    swap(v[i],v[n-i-1]);

    rev(v,i+1);
}

int main(){

    vector<int> v={100,200,300,400,500};

    cout << "Before: " ;
    for(auto it : v){
        cout << it << " ";
    }

    rev(v,0);

    cout << endl << "After: ";
    for(auto it : v){
        cout << it << " ";
    }

  return 0;  
}