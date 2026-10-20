#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    int sum=0;
    int copy=n;
    int count=0;

     while(n!=0){
        int digit=n%10;
        count++;
        n/=10;
    }
    
     n=copy;
    while(n!=0){
        int power=1;

        int digit=n%10;
        
        for(int i=0; i<count; i++){
            power=power*digit;
        }

        sum=sum+power;
        n/=10;
    }

    if(sum==copy) cout << "Armstrong";
    else cout << "Not Armstrong";

    return 0;
}