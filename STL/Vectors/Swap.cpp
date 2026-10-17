#include<bits/stdc++.h>
using namespace std;

void display(vector<int>v){

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v1={12,13,14,15,16};
    vector<int> v2={22,23,24,25,26};

    cout << "Before Swapping: " << endl;
    display(v1);
    display(v2);

    cout << "After Swapping: " << endl;
    v1.swap(v2);
    display(v1);
    display(v2);

 return 0;
}