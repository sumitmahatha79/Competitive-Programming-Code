#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long sum = 1;
        bool flag = true;
        for(int i = 1;i<n;i++){
            if(v[i]<=sum){
                sum += v[i];
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag == true && v[0]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}