#include<iostream>
#include<algorithm>
using namespace std;
bool tt(int a,int b){
    return a>b;
}
int main(){
    int a;
    cin>>a;
    int lista[a];
    for(int i=0;i<a;i++){
        cin>>lista[i];
    }
    sort(lista,(lista+a),tt);
    for(int i=0;i<a;i++){
        cout<<lista[i]<<",";
    }
    return 0;
}
