#include<stdio.h>

int main(){
    int a[3], max=0, sum=0, k;
    for(int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
        if(a[i] > max) {
            max = a[i];
            k = i;
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        if(i != k) sum+=a[i];
    }
    if(a[k] >= sum) a[k] = sum - 1;
    printf("%d", a[0] + a[1] + a[2]);
}