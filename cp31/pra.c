#include<stdio.h>
union test
{
    int i;
    char ch;
};
int main(){
    union test s;
    s.i = 12;
    printf("%d",s.i);
    s.ch = 'a';
    printf("%c",s.ch);
    
}
