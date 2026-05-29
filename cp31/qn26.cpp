#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(c%2!=0){
            int d = (c/2)+1;
            int e = c-d;
            if(a+d>b+e){
                cout<<"First"<<endl;
            }
            else cout<<"Second"<<endl;
        }
        else{
            if(a+(c/2)>b+(c/2)){
                cout<<"First"<<endl;
            }
            else cout<<"Second"<<endl;
        }
    }
}