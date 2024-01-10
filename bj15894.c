#include<stdio.h>

int main(){
    long a; //주어진 범위가 커서 int가 아닌 long 사용
    scanf("%ld", &a);
    printf("%ld", 4 * a);
}