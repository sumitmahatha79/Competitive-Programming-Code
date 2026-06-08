#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        string ans(n,'+');
        int j = 0;
        int l = n-1;
        int cnt = 0;
        for(int i = 0;i<k;i++){
            if(s[i] == '2'){
                cnt++;
            }
            else if(s[i] == '0'){
                ans[j] = '-';
                j++;
            }
            else{
                ans[l] = '-';
                l--;
            }
        }
        int tnt = 0;
        while(j<=l && cnt>0){
            if(ans[j] == '+' && ans[l] == '+'){
                if(j == l && tnt == 0){
                    ans[j] = '-';
                    j++;
                    l--;
                    cnt--;
                }
                else if((l-j+1)<=cnt && tnt == 0){
                    for(int i = j;i<=l;i++){
                        ans[i] = '-';
                    }
                    break;
                }
                else{
                ans[j] = '?';
                tnt++;
                j++;
                ans[l] = '?';
                tnt++;
                l--;
                cnt--;
                }
            }
        }
        cout<<ans<<endl;

    }
}