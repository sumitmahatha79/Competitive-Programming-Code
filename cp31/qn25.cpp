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
        sort(v.begin(),v.end());
        vector<int>b;
        vector<int>c;
        b.push_back(v[0]);
        for(int i = 1;i<n;i++){

            if(v[i]>v[0]){
                c.push_back(v[i]);
            }
            else{
                b.push_back(v[i]);
            
            }
        }
        int bb=b.size();
        int cc=c.size();
        if(bb==0||cc==0){
            cout<<-1<<endl;
        }
        else{
        cout<<bb<<" "<<cc<<endl;
        for(int i = 0;i<bb;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i = 0;i<cc;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    }
}