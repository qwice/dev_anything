#include<stdio.h>

int main(){
    int x, y, w, h, xmin, ymin;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(x < w - x) xmin = x;
    else xmin = w-x;
    if(y < h - y) ymin = y;
    else ymin = h - y;
    if(xmin < ymin) printf("%d", xmin);
    else printf("%d", ymin);
}