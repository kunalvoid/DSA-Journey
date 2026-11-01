#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){

    for(int i=n-1; i>=1; i--){
        int issort=0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issort=1;
            }
        }
        if(issort==0){
                break;
            }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    selection_sort(arr,n);

    for(auto x : arr){
        cout << x << " ";
    }

   return 0; 
}