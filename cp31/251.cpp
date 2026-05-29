#include<iostream>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int nfo = 0;
    int nfz = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '1'){
            nfo++;
        }
        else{
            nfz++;
        }
    }
    if(nfo == 0 || nfz == 0){
        cout<<0<<endl;
    }
    else if(nfo == nfz){
        cout<<nfo-1<<endl;
    }
    else{
        cout<<min(nfo,nfz)<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}