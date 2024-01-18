#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    int *p;
    scanf("%d", &N);
    p = (int *)malloc(sizeof(int) * N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0 ; i < N ; i++){
        for(int j = i ; j < N ; j++){
            int temp;
            if(p[i] > p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < N ; i++){
        printf("%d\n", p[i]);
    }
}