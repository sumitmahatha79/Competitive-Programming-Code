#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;

        set<int>s;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            s.insert(a);
        }
        int b = s.size();


        int mini = INT_MAX;
        for(auto ele : s){
            if(b<ele){
                mini = ele;
                break;
            }
        }

        bool f = false;
        for(auto ele : s){
            if(b == ele){
                f = true;
            }
        }
        if(f == true){
            cout<<b<<endl;
        }
        else{
            cout<<mini<<endl;
        }
    }
}