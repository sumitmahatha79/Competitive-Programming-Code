#include<iostream>
using namespace std;
int main(){
    int t;;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,q;
        cin>>n>>q;
        vector<long long>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        vector<long long>a(q);
        for(int i = 0;i<q;i++) cin>>a[i];

        long long che = 31;
        for(int i = 0;i<q;i++){
            if(a[i]>=che) continue;
            long long val = pow(2,a[i]);
            for(int j = 0;j<n;j++){
                if(v[j]%val==0){
                    v[j]+=(val/2);
                }
            }
            che = a[i];
        }

        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}