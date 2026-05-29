#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            v[i] = i+1;
        }
        int k = 0;
        int j = n-1;
        vector<int>ans;
        while(k<=j){
            ans.push_back(v[j]);
            j--;
            if(k>j) break;
            ans.push_back(v[k]);
            k++;
        }
        reverse(ans.begin(),ans.end());
        for(auto ele : ans){
            cout<<ele<<" ";
        }
        cout<<endl; //1 2 3 4 5.  3 2 4 1 5 // 3 4 2 5 1 6   6 1 5 2 4 3
    }
}