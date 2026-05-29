#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        int val = n*n;

        int cal = val-1;
        int bal = cal - n;
        int nal = cal-1;
        int sum = val;
        if(cal>0)sum+=cal;
        if(bal>0)sum+=bal;
        if(nal>0 && nal != val-n)sum+=nal;

        int cn = val - n;
        int bn = val - 1;
        int bum = val;
        if(cn>0)bum+=cn;
        if(bn>0)bum+=bn;

        int jk = bal - n;
        int hk = bal + 1;
        int lk = bal - 1;
        int ok = bal + n;

        int dum = bal;
        if(jk>0)dum+=jk;
        if(hk>0)dum+=hk;
        if(lk>0)dum+=lk;
        if(ok>0)dum+=ok;

        cout<<max({sum,bum,dum})<<endl;
        

    }
}