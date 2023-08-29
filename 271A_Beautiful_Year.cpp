#include<bits/stdc++.h>
using namespace std;
bool isdistinct(int num){
    set<int>s;
    while (num)
    {
        s.insert(num%10);num/=10;
    }
    if(s.size()<4)  return false;
    return true;
}
int main(){

    int num;  cin>>num;
    while (true)
    {
        num++;
        if(isdistinct(num)){ cout<<num<<endl; break; }
    }
    
    return 0;
}