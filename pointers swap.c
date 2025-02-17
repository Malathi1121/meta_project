#include<stdio.h>
int main(){
    int a=2,b=3;
    int *n=&a;
    int *m=&b;
    printf("Before swapping:%d %d\n",*n,*m);
    n=&b;
    m=&a;
    printf("After swapping:%d %d\n",*n,*m);
        printf("After swapping:%d %d\n",*n,*m);
return 0;
}
