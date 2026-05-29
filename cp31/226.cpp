#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        map<int,int>m;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                int a;
                cin>>a;
                m[a]++;
            }
        }
        bool ok = true;

        for(auto ele : m){
            int a = ele.second;
            int v = n*(n-1);  // yha pe hum (n-1)*(n-1) kr rhe the 
            if(a>(v)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}