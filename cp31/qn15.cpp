#include<iostream>
using namespace std;
bool check(string x,string s){
    if(x.size()<s.size()){
        return false;
    }
    for(int i = 0;i<(x.size()-s.size()+1);i++){
        if(x.substr(i,s.size())==s){
            return true;
            break;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        int m;
        cin>>n;
        cin>>m;
        string x;
        string s;
        cin>>x;
        cin>>s;

        string x0 = x;
        string x1 = x0+x0;
        string x2 = x1+x1;
        string x3 = x2+x2;
        string x4 = x3+x3;
        string x5 = x4+x4;

        int ans = -1;

        bool c0 = false;

        c0 = check(x0,s);
        if(c0==true){
            ans = 0;
        }
        if(c0==false){
            c0=check(x1,s);
            if(c0==true){
                ans = 1;
            }
        }
        if(c0==false){
            c0=check(x2,s);
            if(c0==true){
                ans = 2;
            }
        }
        if(c0==false){
            c0=check(x3,s);
            if(c0==true){
                ans = 3;
            }
        }
        if(c0==false){
            c0=check(x4,s);
            if(c0==true){
                ans = 4;
            }
        }
        if(c0==false){
            c0=check(x5,s);
            if(c0==true){
                ans = 5;
            }
        }

        cout<<ans<<endl;
    }
}