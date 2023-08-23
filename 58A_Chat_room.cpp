#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str; cin>>str;
    string word = "hello";
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == word[j])
        {
            j++;
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
