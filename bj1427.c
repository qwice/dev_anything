#include<stdio.h>

int main(){
    char p[10] = {0};
    int N;
    scanf("%d", &N);

    for(int i = 0 ; ;i++){
        p[N%10] += 1;
        N /= 10;
        if(N == 0) break;
    }
    for(int i = 0; p[i] != 0 ; i++){
        for(int j = i + 1; p[j] != 0 ; j++){
            if(p[i] < p[j]){
                char k;
                k = p[i];
                p[i] = p[j];
                p[j] = k;
            }
        }
    }
    N = 0;
    for(int i = 9 ; i >= 0 ; i--){
        for(int j = 1 ; j <= p[i] ; j++){
            printf("%d", i);
        }
    }
}