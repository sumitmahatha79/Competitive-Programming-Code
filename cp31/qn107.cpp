#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
    long long n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }
    else{
        int ans = INT_MAX;
        for(int i = 1;(i*i)<=n;i++){
            if(n%i==0){
                int a = i;
                int b = n-a;
                int lcm_val = (a*b)/(__gcd(a,b));
            }
        }
    }
    }
}