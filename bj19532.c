#include<stdio.h>

int main(){
    int a, b, c, d, e, f, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    x = (c * e - b * f) / (a * e - b * d);
    y = (c * d - a * f) / (b * d - a * e);

    printf("%d %d", x, y);
}