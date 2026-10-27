#include<bits/stdc++.h>
using namespace std;

bool isalphanum(char ch){

    if(tolower(ch)>='0' && tolower(ch)<='9' || 
        tolower(ch)>='a' && tolower(ch)<='z'){
            return true;
        }
    return false;    
}

bool ispalin(string s){

    int start=0;
    int end=s.length()-1;

    while(start<end){
        if(!isalphanum(s[start])){
            start++;
            continue;
        }

        if(!isalphanum(s[end])){
            end--;
            continue;
        }

        if((tolower(s[start])!=(tolower(s[end])))){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string s;
    cout << "Enter String: " << endl;
    cin >> s;
    
    cout << ispalin(s);

   return 0; 
}