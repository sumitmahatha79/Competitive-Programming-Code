#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        int a1 = a;
        int b1 = b;
        int c = 1;
        int c1 = 1;
        int cnt1 = 0;
        int cnt = 0;
        int l = 0;
        while(a>=0 && b>=0){
            if(a>=c && l%2==0){
                a-=c;
                cnt1++;
                c*=2;
                l++;
            }
            else if(b>=c && l%2 != 0){
                b-=c;
                cnt1++;
                c*=2;
                l++;
            }
            else{
                break;
            }
        }
        int k = 0;
        while(a1>=0 && b1>=0){
            if(b1>=c1 && k%2==0){
                b1-=c1;
                cnt++;
                c1*=2;
                k++;
            }
            else if(a1>=c1 && k%2!=0){
                a1-=c1;
                cnt++;
                c1*=2;
                k++;
            }
            else{
                break;
            }

        }
        cout<<max(cnt,cnt1)<<endl;
    }
}