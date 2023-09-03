#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;      cin>>n;
    int g = 0;
    string st, p = " ";
    while (n--)
    {
       cin>>st;
       if(st != p){ g++; p = st; } 
    }
    cout<<g<<endl;
    return 0;
}