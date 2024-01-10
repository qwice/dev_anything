#include<stdio.h>

int main(){
    int N, x, y, xmin=10000, xmax=-10000, ymin=10000, ymax=-10000;
    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d %d", &x, &y);
        if(x < xmin) xmin = x;
        if(x > xmax) xmax = x;
        if(y < ymin) ymin = y;
        if(y > ymax) ymax = y;
    }
    printf("%d", (xmax - xmin) * (ymax - ymin));
}