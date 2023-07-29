#include<bits/stdc++.h>
using namespace std;
string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main(){
    char c; cin>>c;
    string st;  cin>>st;
    if(c == 'R'){
       for (int i = 0; i < st.length(); i++)
       {
            for (int j = 0; j < kb.length(); j++)
            {
                if(st[i]==kb[j]){
                    cout<<kb[j-1];break;
                }
            }    
       }cout<<endl;
       
    }else{
       for (int i = 0; i < st.length(); i++)
       {
            for (int j = 0; j < kb.length(); j++)
            {
                if(st[i]==kb[j]){
                    cout<<kb[j+1];break;
                }
            }   
       }cout<<endl;
    }
    
    

    return 0;
}