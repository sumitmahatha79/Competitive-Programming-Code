#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int cnt = 0;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i] != '0'){
                break;
            }
            else{
                cnt++;
            }
        }

        int ant = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] != '0'){
                ant++;
            }
        }
        ant--;
        long long ans = ant+cnt;
        cout<<ans<<endl;

    }
}