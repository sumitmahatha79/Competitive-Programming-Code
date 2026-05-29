#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(2*n);
        for(int i = 0;i<(2*n);i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        map<int,int>p;
        for(int i = 0;i<n;i++){
            p[v[i]]++;
        }
        map<int,int>q;
        for(int i = n;i<(2*n);i++){
            q[v[i]]++;
        }
        int ans = 0;
        for(auto ele : q){
            if(ele.second%2!=0){
                ans++;
            }
        }
        for(auto ele : p){
            if(ele.second%2 != 0){
                ans++;
            }
        }

        cout<<ans<<endl;

    }
}