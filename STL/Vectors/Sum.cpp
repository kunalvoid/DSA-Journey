#include<bits/stdc++.h>
using namespace std;

//Sum function
int sum(vector<int> v){
  
    int sum=0;
    for(auto it: v){
        sum+=it;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
 
    int result=sum(v);
    cout << "Sum : " << result;

  return 0;  
}