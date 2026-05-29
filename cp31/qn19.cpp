#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            arr[i]=(-1*arr[i]);
        }
        int a = arr[i];
        ans = min(a,ans);
    }
    cout<<ans;
}