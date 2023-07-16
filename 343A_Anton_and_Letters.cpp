#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    set<char>a;
    getline(cin,str);
    int i = 0;
    while (str[i] != '}')
    {
        if(str[i] != ' ' and str[i] != ',' and str[i] != '{'){
            a.insert(str[i]);
        }
        i++; 
    }
    cout<<a.size()<<endl;
    
    return 0;
}