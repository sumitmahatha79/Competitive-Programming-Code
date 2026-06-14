#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int noo = 0;
        int noz = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                noo++;
            }
            else{
                noz++;
            }
        }
        int ans = noz;
        ans += noz*noo;
        ans += (noo*(noo-1));
        cout<<ans<<endl;
    }
}