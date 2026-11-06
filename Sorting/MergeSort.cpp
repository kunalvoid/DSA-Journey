#include<bits/stdc++.h>
using namespace std;

//Merge Phase
void merge(vector<int> &v, int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;

    //till any one part
    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }

    //Remaining
    while(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(v[right]);
        right++;
    }

    //Adding back to original array
    for(int i=low; i<=high; i++){
        v[i]=temp[i-low];         
    }
}

void mergesort(vector<int> &v, int low, int high){
    if(low>=high) return;
    int mid=(high+low)/2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
}

int main(){
    int n;
    cout << "Enter Size: " << endl;;
    cin >> n;
    vector<int>arr(n,0);
    cout << "Enter Elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    mergesort(arr,0,n-1);

    //Print Sorted Array
    for(auto it : arr){
        cout << it << " ";
    }
  return 0;
}

