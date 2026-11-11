#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    vector<int>a(n,0);
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    //Left Rotate by one 
    int temp=a[0];
    for(int j=1; j<n; j++){
        a[j-1]=a[j];
    }
    a[n-1]=temp;

    //Display output
    for(auto it : a){
        cout << it << " ";
    }
  return 0;  
}