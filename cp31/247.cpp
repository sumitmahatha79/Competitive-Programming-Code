#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi = INT_MIN;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            cnt++;
        }
        else{
            maxi = max(cnt,maxi);
            cnt = 0;
        }
    }
    int cnb = 0;
    int cnf = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='0'){
            cnf++;
        }
        else{
            break;
        }
    }
    for(int i = n-1;i>=0;i--){
        if(s[i] == '0'){
            cnb++;
        }
        else{
            break;
        }
    }
    int val = cnf+cnb;
    maxi = max(cnt,maxi);
    maxi = max(maxi,val);
    cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}