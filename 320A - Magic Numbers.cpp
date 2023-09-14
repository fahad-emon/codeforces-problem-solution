#include<bits/stdc++.h>
using namespace std;

int main(){

    string str; cin>>str;
    for (int  i = 0; i < str.length(); i++)
    {
        if(str[i] == '1'){
            if(str[i+1] == '4' && str[i+2] == '4'){
                i+=2;
            }else if(str[i+1] == '4'){
                i++;
            }
        }else{
            cout<<"NO"<<endl;   return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}