#include<bits/stdc++.h>
using namespace std;

//Brute force
//TC : O(N)
//SC : O(1)
// int missing(vector<int> a,int n){
//     for(int i=0; i<=n+1; i++){
//         int flag=0;
//         for(int j=0; j<n; j++){
//            if(a[j]==a[i]){
//               flag=1;
//            }
//         }
//         if(flag==0){
//             return i;
//         }
//     }
// }

//Optimal Solution: Method 1
//TC : O(n)
//SC : O(1)
// int missing(vector<int> a,int n){
//     int total_sum=n*(n+1)/2;
//     int sum=0;
//     for(int i=0; i<n-1; i++){
//         sum+=a[i];
//     }

//     return total_sum-sum;
// }

//Optimal Solution: Method 2
//TC : O(n)
//SC : O(1)
int missing(vector<int> a,int n){
    int xor1=0;
    int xor2=0;

    for(int i=0; i<n; i++){
       xor1=xor1^i;
       xor2=xor2^a[i];
    }
    xor1=xor1^n;
    return xor1^xor2;
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

    cout << missing(arr,n);

 return 0;
}