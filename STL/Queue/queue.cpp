#include<bits/stdc++.h>
using namespace std;

int main(){

    //Queue works on FIFO(First In First Out)
    queue<int>q;

    q.push(10);
    q.push(20);
    q.emplace(30);

    cout <<"First: " << q.front() << endl; //prints first entered element
    cout <<"Last: " << q.back() << endl; //prints last entered element

    cout << "After poping: " << endl;
    q.pop(); //Pops first entered element
    cout <<"First: " << q.front() << endl; //prints first entered element

  return 0;
}