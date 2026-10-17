#include<bits/stdc++.h>
using namespace std;

void maxmin(vector<int> &v,int n){

    int min=v[0];
    int max=v[0];

    for(int i=0; i<n; i++){
        //Minimum
        if(min > v[i]) min=v[i];
        //Maximum
        if(max < v[i]) max=v[i];
    }

    cout << "Maximum Element: " << max << endl;
    cout << "Minimum Element: " << min << endl;
}

int main(){

    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    maxmin(v,n); 

    // Using STL
    // int maxi=*max_element(v.begin(),v.end());
    // int minn=*min_element(v.begin(),v.end());
    // cout << "Max: " << maxi << " " << "Min: " << minn << endl;

 return 0;
}