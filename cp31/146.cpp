#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int n = s.size();
        bool f = true;
        for(int i = n-1;i>0;i--){
            if(s[i] == 'Y' && s[i-1] == 'N' || s[i] == 'N' && s[i-1] == 'Y'){
                s.pop_back();
                s.pop_back();
                s.push_back('Y');
            }
            else if(s[i] == 'Y' && s[i-1] == 'Y'){
                f = false;
            }
            else if(s[i] == 'N' && s[i-1] == 'N'){
                s.pop_back();
            }
        }
        if(f == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}