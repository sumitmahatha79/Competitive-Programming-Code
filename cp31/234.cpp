#include<iostream>
using namespace std;
int fun(int n){
    int sum = 0;
    while(n>0){
        int val = n%10;
        sum += val;
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        int ans = 0;
        while(n>0){
            int val = fun(n);
            ans += val;
            n--;
        }
        cout<<ans<<endl;

    }
}