#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, k;
    int *p;
    scanf("%d %d", &N, &k);
    p = (int *)malloc(sizeof(int) * N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0 ; i < N ; i++){
        for(int j = i ; j < N ; j++){
            int temp;
            if(p[i] < p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("%d", p[k-1]);
}