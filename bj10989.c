#include<stdio.h>

int main(){
    int N , num;
    int p[10001] = {0,};
    scanf("%d", &N);

    for(int i = 0 ; i < N ; i++){
        scanf("%d", &num);
        p[num] += 1;

    }
    for(int i = 1 ; i < 10001 ; i++){
        for(int j = 1; j <= p[i] ; j++){
            printf("%d\n", i);
        }
    }
}