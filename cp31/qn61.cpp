#include<iostream>
using namespace std;
typedef long long mac;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        mac a,b,n;
        cin>>a>>b>>n;
        mac time = b;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            mac sum = 1;
            int l;
            cin>>l;
            v[j]=l;
            sum+=v[j];
            sum = min(sum,a);
            time+=sum-1;

        }
        cout<<time<<endl;

    }
}