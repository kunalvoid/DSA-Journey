#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
   int pivot=arr[low];
   int i=low;
   int j=high;
   while(i<j){
     while(arr[i]<=pivot && i<=high-1){ 
        i++;                                 
     }
     while(arr[j]>=pivot && j>=low+1){
        j--;
     }
     if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
     }
   }
   swap(arr[low],arr[j]);

   return j;
}

void quicksort(vector<int> &arr,int low,int high){
    if(low < high){
        int pindex=partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}

int main(){
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;

    vector<int>arr(n,0);
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    quicksort(arr,0,n-1);

    for(auto it : arr){
        cout << it << " ";
    }

  return 0;
}