#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,m;
        cin>>n>>m;
        vector<int>v(n*m);
        int cnt = 0;
        int sum = 0;
        for(int i = 0;i<(n*m);i++){
            int a;
            cin>>a;
            if(a<0){
                cnt++;
            }
            sum+=(abs(a));
            v[i] = abs(a);
        }
        sort(v.begin(),v.end());
        if(cnt%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-2*v[0]<<endl;
        }
    }
}