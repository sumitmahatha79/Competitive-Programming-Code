#include<iostream>
using namespace std;
int digitsum(long long sum){
    long long val = 0;
    while(sum>0){
        int num = sum%10;
        val += num;
        sum/=10;
    }
    return val;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long x;
        cin>>x;
        string s = to_string(x);
        long long k = s.size();
        int cnt = 0;
        for(int i = x;i<=(x+(k+1)*9);i++){
            if(i - digitsum(i)==x){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
}