#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int fi = v[0];
        int li = v[n-1];
        int mini = INT_MAX;
        for(int i = 0;i<n;i++){
            mini = min(mini,v[i]);
        }
        if((fi == 1 || li == 1) && mini == 0){
            cout<<"Alice"<<endl;
        }
        else if(mini == 1){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }

    }
}