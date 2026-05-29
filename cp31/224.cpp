#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            if(a != 0){
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end());
        long long sum = 0;
        for(int i = 0;i<v.size();i++){
            sum += v[i];
        }
        long long x = v.size();

        long long ans = min((sum-n+1),x);

        cout<<ans<<endl;
    }
}