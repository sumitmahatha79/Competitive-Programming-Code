#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int n = s.size();
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }
        else{
            if(s[0]=='a'){
                s[n-1]='a';
                cout<<s<<endl;
            }
            else{
                s[n-1]='b';
                cout<<s<<endl;
            }
        }
    }
}