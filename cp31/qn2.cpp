#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,x;
        cin>>n>>x;
        vector<long long>v;
        v.push_back(0);
        for(int j = 0;j<n;j++){
            int in;
            cin>>in;
            v.push_back(in);
        }
        v.push_back(x);
        int a = v.size();
        int ans = 2*(v[a-1]-v[a-2]);
        int maxi = ans;
        for(int j = 0;j<a-2;j++){
            int cnt = v[j+1]-v[j];
            maxi = max(maxi,cnt);
        }
        cout<<maxi<<endl;
}
    return 0;

}