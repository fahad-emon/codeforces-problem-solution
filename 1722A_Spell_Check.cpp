#include<bits/stdc++.h>

using namespace std;

int main(){
    string st = "Timur";
    sort(st.begin(),st.end());
    int t; cin>>t;
    while (t--)
    {
        int n;          cin>>n;
        string str;     cin>>str;
        sort(str.begin(),str.end());
        if(n>5 or n<5){
            cout<<"NO"<<endl;
            continue;
        }
        if(str != st){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }       
    }
    

    return 0;
}