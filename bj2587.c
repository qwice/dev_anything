#include<stdio.h>
#include<stdlib.h>

int main(){
    int avg = 0, mid;
    int p[5];
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i ; j < 5 ; j++){
            int temp;
            if(p[i] > p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        avg += p[i];
    }
    printf("%d\n%d", avg / 5, p[2]);
}