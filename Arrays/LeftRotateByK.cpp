#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Brute Force
//Time Complexity : O(k+1)  i.e O(n+1)
//Space Complexity : O(k)   i.e O(n)
// void krotate(vector<int> &arr,int k,int n){
//     k=k%n;

//     vector<int>temp;
//     for(int i=0; i<k; i++){
//         temp.push_back(arr[i]);
//     }

//     for(int j=k; j<n; j++){
//         arr[j-k]=arr[j];
//     }

//     for(int i=n-k; i<n; i++){
//         arr[i]=temp[i-(n-k)];
//     }  
// }


//Optimal Solution
//Time Complexity : O(2n)
//Space Complexity : O(1)
void krotate(vector<int> &arr,int k,int n){
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}


int main(){
     int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int k;
    cout << "Enter K: " << endl;
    cin >> k;

    vector<int>a(n,0);
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    krotate(a,k,n);

    for(auto it : a){
        cout << it << " ";
    }
  return 0;  
}