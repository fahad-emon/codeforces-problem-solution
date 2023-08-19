#include<bits/stdc++.h>
using namespace std;

void YesORnot(){
    string str; cin>>str;
    string str1 = "YES";
    for (int i = 0; i < 3; i++)
    {
        if (str1[i] != toupper(str[i]) )
        {
            cout<<"NO"<<endl;
            return;
        }
    }        
    cout<<"YES"<<endl;
    return;
}

int main(){

    int t;  cin>>t;
    while (t--)
    {
        YesORnot();
    }
    return 0;
}