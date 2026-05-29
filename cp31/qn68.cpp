#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            v[j]=a;
        }
        int k = abs(v[0]-1);
        for(int l = 1;l<n;l++){
            //k = gcd(k,abs(v[l]-(l+1)));
        }
        cout<<k<<endl;
    }
    return 0;
}