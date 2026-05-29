#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>u(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]==-1){
                u[i]=0;
            }
            else{
                u[i]=v[i];
            }
        }
        int sum = 0;
        for(int i = 1;i<n;i++){
            sum += u[i]-u[i-1];  // 7 0 8 9  7 2 8 9  7 3 8 9
        }
        if(sum == 0){
            cout<<sum<<endl;
            for(int i = 0;i<n;i++){
                cout<<u[i]<<" ";
            }
            cout<<endl;
        }
        else if(v[0]== -1){
            u[0] = abs(sum);
            cout<<0<<endl;
            for(int i = 0;i<n;i++){
                cout<<u[i]<<" ";
            }
            cout<<endl;
        }
         else if(v[n-1] == -1){
            u[n-1] = abs(sum);
            cout<<0<<endl;
            for(int i = 0;i<n;i++){
                cout<<u[i]<<" ";
            }
            cout<<endl;
        }

        else {
            cout<<abs(sum)<<endl;
            for(int i = 0;i<n;i++){
                cout<<u[i]<<" ";
            }
            cout<<endl;
        }
    }
}