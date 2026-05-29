#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        int cnt = 0;
        if(n%2==0){
            cnt++;
            if(n/4 != 0){
                int a = n/4;
                cnt+=a;
            }

        }
        cout<<cnt<<endl;
    }
}
