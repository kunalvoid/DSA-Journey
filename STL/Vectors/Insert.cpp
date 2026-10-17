#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int>v(n);

    cout << endl << "Enter Elements: ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int pos;
    cout << endl << " Enter Position to insert: ";
    cin >> pos;

    int val;
    cout << endl << "Enter value to be inserted: ";
    cin >> val;
    
    v.insert(v.begin()+pos,val);

    cout << endl;
    for(auto it : v){
        cout << it << " ";
    }

  return 0;  
}