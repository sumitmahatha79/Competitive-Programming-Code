#include<iostream>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long n,m;
    cin>>n>>m;

    long long apr = a*m;
    long long bpr = b*(m+1);

    long long cnt = 0;
    if(apr<bpr){
        long long val = n/(m+1);
        cnt +=(val*a*m);

        long long re = n%(m+1);
        cnt+=(re*(min(a,b)));

    }
    else{
        cnt += (b*n);
    }

    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}