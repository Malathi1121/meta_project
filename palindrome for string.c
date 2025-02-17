#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    char b[20];
    gets(a);
    strcpy(b,a);
    strrev(a);
    puts(a);
    puts(b);
    if(strcmp(a,b)==0){
        puts("palindrome");
    }
    else{
        puts("not a palindrome");
    }
return 0;
}
