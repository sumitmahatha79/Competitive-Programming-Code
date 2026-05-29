#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
        map<int,int>m;
        vector<int>va;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            va.push_back(a);
            m[a] = (i+1);
        }
        vector<int>v;
        for(auto ele:m){
            int b = ele.second;
            //v.push_back(b);
            cout<<ele.first<<" "<<b<<endl;
        }
}