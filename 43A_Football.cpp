#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int>wordFrequency;
    int l;cin>>l;
    string input,str = " ";
    int str_f = 0 ;
    while (l--)
    {
        cin>>input;
        if(wordFrequency.find(input)==wordFrequency.end()){
            wordFrequency.insert(make_pair(input,1));
        }else{
            wordFrequency[input]++;
        }
        if(wordFrequency[input]>str_f){
            str = input;
            str_f = wordFrequency[input];
        }
    }
    cout<<str<<endl;
    return 0;
}