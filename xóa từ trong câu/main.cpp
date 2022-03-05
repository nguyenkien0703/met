#include<bits/stdc++.h>
using namespace  std ;
int main(){
    string s;
    getline(cin, s);
    string word;cin>>word;
    string token;
    stringstream ss(s);
    vector<string> v;
    while(ss >> token){
        if(token != word){
            v.push_back(token);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if( i != v.size()-1){
            cout<<" ";
        }
    }
}