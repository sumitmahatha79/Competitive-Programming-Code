#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>x(n);
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            x[j]=a;
        }
        sort(x.begin(),x.end());
        int cnt = 1;
        int mi = x[0];
        for(int k = 1;k<n;k++){
            if(x[k]>mi){
                cnt++;
                mi = x[k];
            }
        }
        cout<<cnt<<endl;


    }
}