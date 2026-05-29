#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>r(102,-1);
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            v[j]=a;
            r[a]++;
        }
        int a=0;
        for(int l = 0;l<102;l++){
            if(r[l]==-1){
                a = l;
                break;
            }
        }
        cout<<a<<endl;
    }
}