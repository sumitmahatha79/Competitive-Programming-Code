//wrongg
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        long long arr[n];
        long long j = INT_MIN;
        long long c=0;
        int k=0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                c+=arr[i];
            }
            else {
                k++;
                if(arr[i]>j){
                    j=arr[i];
                }
            }
        }
        if(k!=0){
            cout<<(c+j)<<endl;
        }
        else cout<<0<<endl;
    }
}