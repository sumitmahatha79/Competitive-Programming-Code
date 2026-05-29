#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int noo = 0;
        int noz = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='0'){
                noz++;
            }
            else{
                noo++;
            }
        }
        if(noz == noo){
            cout<<0<<endl;
        }
        else if(noo == 0 || noz == 0){
            cout<<max(noo,noz)<<endl;
        }
        else{
            int lenght = 0;
            for(int i = 0;i<s.size();i++){
                if((s[i]=='0' && noo == 0) || (s[i]=='1' && noz == 0)){
                    break;
                }
                else{
                    if(s[i]=='1'){
                        noz--;
                        lenght++;
                    }
                    else{
                        noo--;
                        lenght++;
                    }
                }
            }
            cout<<s.size()-lenght<<endl;
        }
    }
}