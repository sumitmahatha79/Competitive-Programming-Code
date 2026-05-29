#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 1;i<=t;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> ans;
        
        int noz = 0;
        int noo = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                noz++;
            }
            else{
                noo++;
            }
        }

        if(noo%2==0){
            for(int i = 0; i < n; i++)
                if(s[i] == '1')
                    ans.push_back(i + 1);
        }
        else if(noz%2==1){
            for(int i = 0; i < n; i++)
                if(s[i] == '0')
                    ans.push_back(i + 1);
        }
        else{
            cout << -1 << endl;
            continue;
        }
        cout << ans.size() << endl;
        for(int x : ans)
            cout << x << " ";
        cout << endl;
    }
}