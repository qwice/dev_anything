#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a*d+b <= c*d && c>=a) printf("1");
    else printf("0");
    return 0;
}