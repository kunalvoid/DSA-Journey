#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

//Brute force
//Time Complexity: O(nlogn+n)
// int slargest(vector<int>arr,int n){
//     sort(arr.begin(),arr.end());
//     int largest=arr[n-1];
//     for(int i=n-2; i>=0; i--){
//        if(arr[i]!=largest){
//           return arr[i];
//        }
//     }
// }

//Better Approach
//Time Complexity : O(2n)
// int slargest(vector<int>arr,int n){
//     int largest=arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]>largest) largest=arr[i];
//     }
//     int slargest=-1;
//     for(int j=0; j<n; j++){
//         if(arr[j]>slargest && arr[j]!=largest){
//             slargest=arr[j];
//         }
//     }
//     return slargest;
// }

//Optimal Solution
//Time Complexity : O(n)
int slargest(vector<int>arr,int n){
    int largest=arr[0];
    int slargest=INT_MIN;
    
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
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

    cout << "Second Largest: " << slargest(arr,n);

  return 0;  
}