#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,x;
        cin>>n>>x;
        vector<long long>v1(n);
        vector<long long>v2(n);
        vector<long long>v3(n);
        for(int i = 0;i<n;i++)cin>>v1[i];
        for(int i = 0;i<n;i++)cin>>v2[i];
        for(int i = 0;i<n;i++)cin>>v3[i];


        long long val = 0;
        for(int i = 0;i<n;i++){
            int ch = -1;
            if((v1[i]|x) == x){
                val = (val|v1[i]);
                ch = 1;
            }
            if(ch == -1){
                break;
            }
        }
        for(int i = 0;i<n;i++){
            int ch = -1;
            if((v2[i]|x) == x){
                val = (val|v2[i]);
                ch = 1;
            }
            if(ch == -1){
                break;
            }
        }
        for(int i = 0;i<n;i++){
            int ch = -1;
            if((v3[i]|x) == x){
                val = (val|v3[i]);
                ch = 1;
            }
            if(ch == -1){
                break;
            }
        }

        if(val == x){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    //     reverse(v1.begin(),v1.end());
    //     reverse(v2.begin(),v2.end());
    //     reverse(v3.begin(),v3.end());
    //     if(x == 0){
    //         cout<<"Yes"<<endl;
    //     }
    //     else{
    //     vector<long long>ans;
    //     for(int i = n-1;i>=0;i--){
    //         int ch = -1;
    //         if(v1.size()!=0){
    //             if((v1[i]| x) == x){
    //                 ans.push_back(v1[i]);
    //                 v1.pop_back();
    //                 ch = 1;
    //             }
    //         }
    //         if(v2.size()!=0){
    //             if((v2[i]| x) == x){
    //                 ans.push_back(v2[i]);
    //                 v2.pop_back();
    //                 ch = 1;
    //             }
    //         }
    //         if(v3.size()!=0){
    //             if((v3[i]|x) == x){
    //                 ans.push_back(v3[i]);
    //                 v3.pop_back();
    //                 ch = 1;
    //             }
    //         }
    //         if(ch == -1){
    //             break;
    //         }
    //     }
    //     long long val = 0;
    //     bool f = false;
    //     for(int i = 0;i<ans.size();i++){
    //         val = (val|ans[i]);
    //         if(val == x){
    //             f = true;
    //             break;
    //         }
    //     }
    //     if(f == true){
    //         cout<<"Yes"<<endl;
    //     }
    //     else{
    //         cout<<"No"<<endl;
    //     }
    // }
        
    }
}