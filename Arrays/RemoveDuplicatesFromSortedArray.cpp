#include<iostream>
#include<set>
#include<vector>
using namespace std;

//Brute Force 
//Time Complexity : O(NlogN + N)
//Space Complexity : O(N)
// int duplicate(vector<int> &a,int n){
//     set<int>st;
//     for(int i=0; i<n; i++){
//         st.insert(a[i]);
//     }

//     int index=0;
//     for(auto it : st){
//         a[index]=it;
//         index++;
//     }
//     return index;
// }

//Optimal Solution
//Time Complexity : O(n)
//Space Complexity : O(1)

int duplicate(vector<int> &a,int n){
    int i=0; 
    for(int j=1; j<n; j++){
        if(a[j]!=a[i]){
           a[i+1]=a[j];
           i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    vector<int>arr(n,0);
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "No of unique elements: " << duplicate(arr,n) << endl;

    for(auto it : arr){
        cout << it << " ";
    }
  return 0;  
}