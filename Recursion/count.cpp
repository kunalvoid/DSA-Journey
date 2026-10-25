#include<iostream>
using namespace std;

int count=0;
void counter(){

    if(count==5) return;

    cout << count << " ";
    count++;
    counter();
}

int main(){
    counter();
  return 0;
}