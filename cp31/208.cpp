#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        int no = 0;
        int cnt = 0;
        while(n>1){
            int ma = n/2;
            no+=ma;
            cnt+=ma;
            n-=ma;
        }
        while(no>1){
            int na = no/2;
            cnt+=na;
            no-=na;
        }
        cout<<cnt+1<<endl;
    }
}