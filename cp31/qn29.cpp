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
            int a;
            cin>>a;
            v[i]=a;
        }
        bool f = false;
        for(int i = 1;i<n;i++){
            if(v[i]<v[i-1])
            f = true;

        }
        if(f==true){
            cout<<0<<endl;
        }
        else{
            int h = INT_MAX;
            for(int i = 1;i<n;i++){
                int u = v[i]-v[i-1];
                h = min(h,u);
            }
            if(h == 1 || h==0){
            cout<<1<<endl;
            }
            else{
                int r = h/2;
                cout<<r+1<<endl;
            }
        }
    }// 0 - 1
     // 1 - 1
     // 2 - 2
     // 3 - 2
     // 4 - 3     
     // 5 - 3
     // 6 - 4
     // 7 - 4   
     // 8 - 5
     // 9 - 5     
}