#include<bits/stdc++.h>
using namespace std ;
void vietHoa(string &s){
    for(int i=0;i<s.length();i++){

      s[i] = toupper(s[i]);
    }
}
void chuanHoa(string &s){
    s[0]= toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    string s; 
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    string token;
    while(ss >> token){
        v.push_back(token);
    }
    for(int i=0;i<v.size()-1;i++){
        chuanHoa(v[i]);
        cout<<v[i];
        if( i == v.size()-2) cout<<", ";
        else cout<<" ";
    }
    vietHoa(v[v.size()-1]);
    cout<<(v[v.size()-1]);


}