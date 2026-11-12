#include<bits/stdc++.h>
using namespace std;

//Brute Force
//Time Complexity : O(2n)
//Space Complexity : O(n)
// void movezero(vector<int> &a,int n){
//     vector<int>temp;
//     for(int i=0; i<n; i++){
//         if(a[i]!=0){
//         temp.push_back(a[i]);
//         }
//     }

//     int nz=temp.size();
//     for(int i=0; i<nz; i++){
//         a[i]=temp[i];
//     }

//     for(int j=nz; j<n; j++){
//         a[j]=0;
//     }
// }

//Optimal Solution
//Time Complexity : O(n)
//Space Complexity : O(1)
void movezero(vector<int> &a,int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1; i<n; i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
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

    movezero(arr,n);

    for(auto it : arr){
        cout << it << " ";
    }
  return 0;  
}