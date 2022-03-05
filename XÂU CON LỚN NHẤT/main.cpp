/*\
Xâu con của một xâu ký tự S được tạo ra bằng cách lấy một hoặc nhiều ký tự trong S và giữ nguyên thứ tự ban đầu.

Cho xâu S chỉ bao gồm các chữ cái viết thường. HÃY IN RA XÂU  CON CÓ THỨ TỰ TỪ ĐIỂN LỚN NHẤT 


Input

Chỉ có xâu ký tự S, độ dài không quá 100000. Không có khoảng trống.

Output

Ghi ra xâu con có thứ tự từ điển lớn nhất.

Input

Output

ababba->bbba
abbcbccacbbcbaaba->cccccbba
*/
/*
code c++
#include<iostream>
using namespace std;
int main()
{
    string s; cin>>s;
    for(int i=s.size()-1;i>0;i--)
    {
        if(s[i]>s[i-1]){
        s.erase(i-1,1);
        i++;
        }
    }
    cout<<s;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int pos=0,n=s.length();
	while(pos<n){
		char rs=s[pos];
		int last_pos=pos;
		for(int i=pos;i<n;i++){
			if(s[i] > rs){
				rs=s[i];
			}
		}
		for(int i=pos;i<n;i++){
			if(s[i]==rs){
				cout<<s[i];
				last_pos=i;
			}
		}
		pos=last_pos+1;
	}
	
    return 0;
}