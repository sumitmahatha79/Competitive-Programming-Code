#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int brr[m];
        for(int i = 0;i<m;i++){
            cin>>brr[i];
        }
        cout<<n+m<<endl;
    }
}