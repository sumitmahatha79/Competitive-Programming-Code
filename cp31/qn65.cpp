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
        char c = '<';
        char d = '>';
        int maxi1 = 0;
        int maxi2 = 0;
        int j = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        while(j<n){
            
            if(s[j]=='<'){
                cnt2 = 0;
                cnt1++;
                maxi1 = max(maxi1,cnt1);
            }
            else {
                cnt1 = 0;
                cnt2++;
                maxi2 = max(maxi2,cnt2);
            }
            j++;
        }
        cout<<max(maxi1,maxi2)+1<<endl;
    
        
    }
}