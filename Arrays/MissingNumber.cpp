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

//Better Solution
int missing(vector<int> a,int n){
    int total_sum=n*(n+1)/2;
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum+=a[i];
    }

    return total_sum-sum;
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

    cout << missing(arr,n+1);

 return 0;
}