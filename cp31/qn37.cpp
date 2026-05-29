#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l = 0;
        int j = n-1;
        int cnt = 0;
        while(l<j){
            if(s[l]==s[j]){
                break;
            }
            l++;
            j--;
            cnt++;

        }
        int ans = n-2*cnt;
        cout<<ans<<endl;
    }
}