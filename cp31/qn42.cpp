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
            int total_xor = 0;
            for(int i = 0;i<n;i++){
                total_xor ^= v[i];
            }

            if(n%2!=0){
                cout<<total_xor<<endl;
            }
            else {
                if(total_xor == 0){
                    cout<<total_xor<<endl;
                }
                else {
                    cout<<-1<<endl;
                }
            }
        }
 }
