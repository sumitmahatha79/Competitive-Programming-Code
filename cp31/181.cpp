#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        long long sum = 0;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            long long a;
            cin>>a;
            v[i] = abs(a);
            sum += v[i];
            if(a<0){
                cnt++;
            }
        }
        if(cnt%2==0){
            cout<<sum<<endl;
        }
        else{
            sort(v.begin(),v.end());
            long long sub = v[0]*2;
            cout<<sum-sub<<endl;
        }
    }
}