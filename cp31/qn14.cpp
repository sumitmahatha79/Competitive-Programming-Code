#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            v[j]=a;
        }
        vector<int>u(100001,0);
        for(int j = 0;j<n;j++){
            int l = v[j];
            u[l]++;
        }
        int cnt = 0;
        vector<int>su;
        for(int j = 0;j<100001;j++){
            if(u[j]!=(0)){
                cnt++;
                su.push_back(u[j]);
            }
        }
        if(cnt>2){
            cout<<"No"<<endl;
        }
        if(cnt==1){
            cout<<"Yes"<<endl;
        }
        if(cnt == 2){
            if(n%2==0){
                if(su[0]==su[1]){
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
            else {
                if(su[0]==(su[1]-1) || su[1]==(su[0]-1)){
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
        }

    }
}