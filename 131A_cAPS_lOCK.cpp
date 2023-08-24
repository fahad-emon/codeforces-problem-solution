#include<bits/stdc++.h>
using namespace std;

int main(){

    string str ;    cin>>str;
    bool f = true;
    for (int i = 1; i <str.length(); i++)
    {
        if(islower(str[i])){
            f = false;break;
        }
    }
    if(f == false){
        cout<<str<<endl;
    }else if (isupper(str[0])){
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout<<str<<endl;
    }else{
        str[0] = toupper(str[0]);
        for (int i = 1; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout<<str<<endl;
    }

    return 0;
}
/*

cAPS
Caps
Lock
Lock
cAPSlOCK
cAPSlOCK
maybe->z to Z and HTTTP TO Http

*/