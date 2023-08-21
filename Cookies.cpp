#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;  cin>>n;
    int s=0,e=0,o=0,x;
    for (int i = 0; i < n; i++)
    {
        cin>>x; s+=x;
        x%2 != 0? o++ : e++;
    }
    s%2 !=0 ? cout<<o<<endl : cout<<e<<endl;

    return 0;
}
/* 
10
1 2 2 3 4 4 4 2 2 2
1 2 2 2 2 2 3 4 4 4 
11
2 2 2 2 2 2 2 2 2 2 99
99 + 2*10 = 

*/