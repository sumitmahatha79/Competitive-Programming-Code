#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<string>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
       string s = "";
       for(int i = 0;i<n;i++){
        string front = s + v[i];
        string back = v[i] + s;
        if(front<back){
            s = front;
        }
        else{
            s = back;
        }
       }
        cout<<s<<endl;

    }
}