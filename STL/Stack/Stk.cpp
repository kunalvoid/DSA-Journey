#include<bits/stdc++.h>
using namespace std;

int main(){

    //Stack works on LIFO (Last In First Out)
    stack<int> s;

    s.push(10);
    s.push(5);
    s.push(2); // inserts elements in stack

    cout << s.top() << endl; //prints last entered element

    s.pop(); // Pops last entered element
    cout << s.top() << endl; //prints last entered element

  return 0;
}