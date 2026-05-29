#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long  n,c;
        cin>>n>>c;
        vector<long long>s(n);
        for(int i = 0;i<n;i++){
            cin>>s[i];
        }
        long double C = c;
        long double twoAB = 0;
        for(int i = 0;i<n;i++){
            C -= s[i]*s[i];
            twoAB += 4*s[i];
        }
        long long ro1 = (-twoAB + sqrtl(twoAB*twoAB + (16*n*C)))/(8*n);
        
        cout<<ro1<<endl;
    }
}