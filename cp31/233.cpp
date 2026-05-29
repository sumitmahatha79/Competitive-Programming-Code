#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){

        long long n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());

        long long sum = 0;
        int k = 0;
        while(m>0 && k<n){
            long long val = v[k]*m;
            sum += val;
            k++;
            m--;
        }

        cout<<sum<<endl;


    }
}