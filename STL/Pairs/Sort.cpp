#include<bits/stdc++.h>
using namespace std;

//Swapping Conditions
//Sort it according to second element
//if second element is same then sort it according to first but in descending order
bool psort(pair<int,int>p1,pair<int,int>p2){ 

    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.second == p2.second) {
        if(p1.first > p2.first) return true;
    }
    return false;
}

int main(){

    pair<int,int>arr[]={{1,2},{2,1},{4,1}};

    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n-1,psort);

    for(auto it : arr){
        cout << it.first << " " << it.second << endl;
    }

  return 0;  
}