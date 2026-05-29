#include<iostream>
using namespace std;

int prime(int n){
    for(int i = n;;i++){
        bool flag = true;
        for(int j = 2;j*j<=i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            return i;
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int d;
        cin>>d;
        int p1 = prime(d+1);
        int p2 = prime(d+p1);
        cout<<p1*p2<<endl;
    }
}