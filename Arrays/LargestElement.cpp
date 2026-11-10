#include<iostream>
#include<vector>
using namespace std;

int largest(vector<int>arr,int n){
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    return largest;
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

    cout << "Largest: " << largest(arr,n);

  return 0;  
}