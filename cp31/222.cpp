#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int ab = 0;
    int ba = 0;
    for(int i = 0;i<(n-1);i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            ab++;
        }
        else if(s[i] == 'B' && s[i+1] == 'A'){
            ba++;
        }
    }
    if(ab == 0 || ba == 0){
        cout<<"NO"<<endl;
    }
    else if(ab>1 && ba>1){
        cout<<"YES"<<endl;
    }
    else{
    int mini = min(ab,ba);
    if(mini == ab){
        for(int i = 0;i<(n-1);i++){
            if(s[i] == 'A' && s[i+1] == 'B'){
                s[i] = '*';
                s[i+1] = '*';
            }
        }
        bool ok = false;
        for(int i = 0;i<(n-1);i++){
            if(s[i] == 'B' && s[i+1] == 'A'){
                ok = true;
                break;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(mini == ba){
        for(int i = 0;i<(n-1);i++){
            if(s[i] == 'B' && s[i+1] == 'A'){
                s[i] = '*';
                s[i+1] = '*';
            }
        }
        bool ok = false;
        for(int i = 0;i<(n-1);i++){
            if(s[i] == 'A' && s[i+1] == 'B'){
                ok = true;
                break;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }

    // bool ok = false;
    // for(int i = 0;i<(n-1);i++){
    //     if(s[i]=='A' && s[i+1]=='B'){
    //         ok = true;
    //         s.erase(i,2);
    //         break;
    //     }
    // }
    // if(ok == true){
    //     bool uk = false;
    //     for(int i = 0;i<(s.size()-1);i++){
    //         if(s[i] == 'B' && s[i+1] == 'A'){
    //             uk = true;
    //             break;
    //         }
    //     }
    //     if(uk == true){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
}