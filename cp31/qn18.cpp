#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        char arr[10][10];
        for(int j = 0;j<10;j++){
            for(int k = 0;k<10;k++){
                cin>>arr[j][k];
            }
        }
        int sum = 0;
        for(int j = 0;j<10;j++){
            for(int k = 0;k<10;k++){

                if(j==0 || j==9){
                    if(arr[j][k]=='X'){
                        sum+=1;
                    }
                }
                if(j==1 || j==8){
                    if(k==0||k==9){
                        if(arr[j][k]=='X')sum+=1;
                    }
                    else if(arr[j][k]=='X'){
                        sum+=2;
                    }
                }
                if(j==2 || j==7){
                    if(k==0||k==9){
                        if(arr[j][k]=='X')sum+=1;
                    }
                    else if(k==1||k==8){
                        if(arr[j][k]=='X')sum+=2;
                    }
                    else if(arr[j][k]=='X'){
                        sum+=3;
                    }
                }
                if(j==3 || j==6){
                    if(k==0||k==9){
                        if(arr[j][k]=='X')sum+=1;
                    }
                    else if(k==1||k==8){
                        if(arr[j][k]=='X')sum+=2;
                    }
                    else if(k==2||k==7){
                        if(arr[j][k]=='X')sum+=3;
                    }
                    else if(arr[j][k]=='X'){
                        sum+=4;
                    }
                }
                if(j==4 || j==5){
                    if(k==0||k==9){
                        if(arr[j][k]=='X')sum+=1;
                    }
                    else if(k==1||k==8){
                        if(arr[j][k]=='X')sum+=2;
                    }
                    else if(k==2||k==7){
                        if(arr[j][k]=='X')sum+=3;
                    }
                    else if(k==3||k==6){
                        if(arr[j][k]=='X')sum+=4;
                    }
                    else if(arr[j][k]=='X'){
                        sum+=5;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}