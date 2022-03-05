/*
cho số tự nhien m và số s k âm . in ra th bé nhất và lớn nhát có m chữ số và ổng chữ số bằng k
2 15 
output 69 96 
*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int  m , s; cin>> m>>s;
    if(s > 9*m || (s==0 && m >1)){
        cout<<"-1 -1\n";return 0;
    }
    int lon[m] = {0}, be[m] = {0};
    int tmp=s;//vì sau qua các bước thì cái tổng s của mình thay đổi nên mình khai bảo v làm vc cho ez
    for(int i=0;i<m;i++){
        if(s>=9){
            lon[i] =9; s-=9;
        }else if( s != 0){//nghĩa là 0<s<8
            lon[i] = s; s=0;
        }else break;//s=0 thì duengf mẹ mày đi 
    }
     --tmp;//dể dành q dơn vị cho hàng đầu tiên
     for(int i=m-1;i>0;i--){
         if(tmp >= 9){
             be[i] = 9; tmp -=9;
         }else if( tmp != 0){
             be[i] = tmp; tmp =0;
         }else break;
     }
     be[0] = tmp + 1;
     for(int i=0;i<m;i++)cout<<be[i];
     cout<<endl;
     
     for(int i=0;i<m;i++) cout<<lon[i];


}