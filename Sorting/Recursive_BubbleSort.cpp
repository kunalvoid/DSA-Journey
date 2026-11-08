#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr,int n){
   if(n<=1) return;
   int isswapped=0;
   for(int i=0; i<n-1; i++){
      if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        isswapped=1;
      }
   }
   if(isswapped==0) return;
   bubblesort(arr,n-1);
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

    bubblesort(arr,n);

    for(auto it : arr){
        cout << it << " ";
    }

   return 0; 
}