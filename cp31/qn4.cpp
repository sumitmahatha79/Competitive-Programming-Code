#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        string s3;
        cin>>s3;
        string s;
        s.push_back(s1[0]);
        s.push_back(s2[0]);
        s.push_back(s3[0]);
        cout<<s<<endl;
    }
}