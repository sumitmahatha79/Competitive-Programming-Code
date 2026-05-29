#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            int f = x;
            int k = 0;
            for(int i = 1;i<=x/2;i++){
                f--;
                k++;
                if(f%k!=0 && k%k!=0){
                    cout<<2<<endl;
                    cout<<f<<" "<<k<<endl;
                    break;
                }
            }
        }
    }
}