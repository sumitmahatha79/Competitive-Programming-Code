#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,c;
        cin>>n>>c;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            long long a;
            cin>>a;
            v[i] = a+i+1;
        }
        sort(v.begin(),v.end());
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(v[i]<=c){
                c-=v[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
}