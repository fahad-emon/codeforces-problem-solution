#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;cin>>n;
    string str;cin>>str;
    int c_one = 0,c_zero = 0;
    for (int i = 0; i < n; i++)
    {
        if(str[i] == '0'){
            c_zero++;
        }else{
            c_one++;
        }
    }
    cout<<max(c_one,c_zero)-min(c_one,c_zero)<<endl;
    
    return 0;
}