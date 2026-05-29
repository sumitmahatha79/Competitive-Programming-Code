#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        long long mini = -1;
        long long maxi = -1;
        if(n<4){
            cout<<-1<<endl;
        }
        else if(n%12==0){
            mini = n/6;
            maxi = n/4;
            cout<<mini<<" "<<maxi<<endl;
        }
        else if(n%6==0){
            maxi = n/4;
            mini = (n/6);
            cout<<mini<<" "<<maxi<<endl;
        }
        else if(n%4==0 || n%4==2 || n%6==2){
            maxi = n/4;
            mini = (n/6)+1;
            cout<<mini<<" "<<maxi<<endl;
        }
        else {
            cout<<-1<<endl;
        }

    }
}