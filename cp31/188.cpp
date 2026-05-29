#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int p = n;
       
        int cnt = INT_MIN;
        while(n>0){

            int c = 1;
            for(int i = 0;i<(p-1);i++){// bcab
                if(s[i]!=s[i+1]){
                    c++;
                }
            }
            cnt = max(cnt,c);
            rotate(s.begin(), s.end() - 1, s.end());
            n--;
        }
        cout<<cnt<<endl;

    }
}