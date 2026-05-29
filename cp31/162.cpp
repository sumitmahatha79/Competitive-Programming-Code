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
        char ch = s[n-1];
        int cnt = 0;
        for(int i = 0;i<n-1;i++){
            if(s[i]!=ch){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}