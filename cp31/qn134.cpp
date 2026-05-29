#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum = 0;
        int opr = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                sum++;
            }
            else{
                sum--;
            }
            if(sum<0){
                opr++;
                sum = 0;
            }
        }
        cout<<opr<<endl;
    }
}