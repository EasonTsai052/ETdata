#include<bits/stdc++.h>
using namespace std;
int a(string str1,int *t,int add){
    int total=0;
    if(add==0){return 0;}
    if(str1[*t]=='2'){
        (*t)++;
        for(int i=0;i<4;i++){
            total+=a(str1,t,add/2);
        }
    }else{
        if(str1[*t]=='1'){
            total+=(add*add);
        }
        (*t)++;
    }
    return total;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    cin>>str1;
    int add;
    cin>>add;
    int i=0;
    cout<<a(str1,&i,add);
    return 0;
}
