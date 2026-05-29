#include<iostream>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    int c;
    cin>>c;
    c--;
    int x = v[c];

    int fi = c;
    for(int i = 0;i<c;i++){
        if(v[i] != x){
            fi = i;
            break;
        }
    }
    int cnt = 0;
    for(int i = fi;i<(c-1);i++){
        if(v[i] == v[i+1]){
        cnt++;
        }
    }
    int val1 = c-fi-cnt;
    if(val1%2 != 0){
        val1++;
    }

    int li = c;
    for(int i = n-1;i>c;i--){
        if(v[i] != x){
            li = i;
            break;
        }
    }
    int bnt = 0;
    for(int i = c+1;i<(li);i++){
        if(v[i] == v[i+1]){
            bnt++;
        }
    }
    int val2 = li-c-bnt;
    if(val2 % 2 != 0){
        val2++;
    }

    int fians = max(val1,val2);
    cout<<fians<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}