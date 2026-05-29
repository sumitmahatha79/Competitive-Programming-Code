#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        if(k==(n-1)){
            cout<<"YES"<<endl;
        }
        else {
        unordered_map<char,int>m;
        for(int i = 0;i<n;i++){
            m[s[i]]++;
        }
        int cnt = 0;
        for(auto ele : m){
            char c = ele.first;
            if(m[c]%2!=0){
                cnt++;
            }
        }
        if(cnt>(k+1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
}