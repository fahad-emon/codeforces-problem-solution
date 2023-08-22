#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
   
    int t;cin>>t;
    while (t--)
    {
        map<char,int>m;
        string st;  cin>>st;
        int x=0 ,y=0;
        for (int i = 0; i < st.length(); i++)
        {
            m[st[i]]++;
        }
        for (auto it = m.begin();it != m.end(); ++it){
            if(it->second >1 ){
                x++;
            }else{
                y++;
            }
        }
        cout<<x + (y/2) <<endl; 
        
    }
    return 0;
}
