#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;
int main(){
    stack<int> lista;
    string str1;
    cin>>str1;
    int tf1=1;
    for(int i=0;i<(str1.size());i++){
        char a=str1[i];
        if(a==40){
            lista.push(1);
            continue;
        }
        if(a==41){
            if(lista.size()==0||lista.top()!=1){
                tf1=0;
                break;
            }
            lista.pop();
        }



        if(a==91){
            lista.push(2);
            continue;
        }
        if(a==93){
            if(lista.size()==0||lista.top()!=2){
                tf1=0;
                break;
            }
            lista.pop();
        }



        if(a==123){
            lista.push(3);
            continue;
        }

        if(a==125){
            if(lista.size()==0||lista.top()!=3){
                tf1=0;
                break;
            }
            lista.pop();
        }



        if(a==60){
            lista.push(4);
            continue;
        }
        if(a==62){
            if(lista.size()==0||lista.top()!=4){
                tf1=0;
                break;
            }
            lista.pop();
        }
    }
    if(tf1==1){cout<<"OK";}else{cout<<"ERROR";}
    return 0;
}
