#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p1={1,"Teacher"};
    pair<int,string>p2={2,"Student"};

    cout << "Before Swapping: " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    p1.swap(p2); //swaps pair

    cout << "After Swapping: " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

  return 0;  
}