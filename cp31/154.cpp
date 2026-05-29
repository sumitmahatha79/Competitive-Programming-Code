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
        int idx = -1;
        for(int i = 0;i<n;i++){
            if(v[i] != (n-i)){
                idx = i;
                break;
            }
        }
        int bdx = -1;
        for(int i = 0;i<n;i++){
            if(v[i]== (n-idx)){
                bdx = i;
            }
        }
        reverse(v.begin()+idx,v.begin()+bdx+1);
        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}