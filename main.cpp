#include <iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n>=2){
        int risultato,primo=1,secondo=0;
        for(int i=1;i<=n;i++){
            risultato=primo+secondo;
            primo=secondo;
            secondo=risultato;
            cout<<risultato<<endl;
        }
    }else{
        cout<<"errore"<<endl;
    }
}

