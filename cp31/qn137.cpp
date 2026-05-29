#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l = -1;
    int r = -1;
    char c;
    char pr[n];
    pr[n-1] = s[n-1];
    for(int i = n-2;i>=0;i--){
        if(s[i]<pr[i+1]){
            pr[i] = s[i];
        }
        else{
            pr[i] = pr[i+1];
        }
    }
    for(int i = 0;i<n-1;i++){
        //string p = s.substr(i+1);
       // sort(p.begin(),p.end());
        if(s[i]>pr[i+1]){
            l = i;
            c = pr[i+1];
        }
    }
    for(int i = l+1;i<n;i++){
        if(s[i]==c){
            r = i;
        }
    }
    if(l!=(-1) && r!=(-1)){
        cout<<"Yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    else{
        cout<<"No";
    }
    
}