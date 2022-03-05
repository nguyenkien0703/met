#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    int cnt=0;
    while( ss >> word){
        v.push_back(word);
        cnt++;
    }
    for(string x : v ){
        cout<<x<<endl;
    }
    cout<<cnt;
}