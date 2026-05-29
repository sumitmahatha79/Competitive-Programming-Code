#include<iostream>
using namespace std;
void fun(){
int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0] == s[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
int main(){
    fun();
}