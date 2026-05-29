#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        vector<long long>v(n);
        int odd = 0;
        int ev = 0;
        for(int i = 0;i<n;i++){
            long long a;
            cin>>a;
            v[i]=a;
            if(a%2==0){
                ev++;
            }
            else {
                odd++;
            }
        }
        if(odd!=n && ev!=n){
            sort(v.begin(),v.end());
        }
        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}