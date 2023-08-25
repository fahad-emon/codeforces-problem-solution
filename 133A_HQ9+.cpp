#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;     cin>>str;
    for (int i = 0; i < str.length(); i++){
        if (str[i]== 'H' or str[i] == 'Q' or str[i]== '9'/* or str[i]== '+'*/){
            cout<<"YES"<<endl;  return 0;
        }  
    }
    cout<<"NO"<<endl;

    return 0;
}
