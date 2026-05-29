#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        vector<int>c;
        for(int i = 0;i<n;i++){
            if(i==0){
                if(v[i]==0){
                    c.push_back(0);
                }
                else{
                    c.push_back(1);
                }
            }
            else if(v[i]!=0 && v[i-1]==0){
                c.push_back(1);
            }
        }
        int cnt = 0;
        for(int i = 0;i<c.size();i++){
            if(c[i]==1){
                cnt++;
            }
        }
        if(cnt == 1){
            cout<<1<<endl;
        }
        else if(cnt>1){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}