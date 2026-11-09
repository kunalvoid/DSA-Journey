#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int>arr,int n,int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    vector<int>arr(n,0);
    cout<< "Enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: " << endl;
    cin >> target;

    int pos=linearsearch(arr,n,target);

    if(pos!=-1) cout << "Target found at index: " << pos << endl;
    else cout << "Target not found !" << endl;
 
 return 0;
}