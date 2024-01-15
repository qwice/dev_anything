#include<stdio.h>
#include<stdlib.h>

int ab(int a, int b){
    if(a>=b) return a-b;
    else return b-a;
}

int main(){
    int a, b, sum, result, temp;
    int *p;
    scanf("%d %d" , &a, &b);
    temp = b;
    p = (int *)malloc(sizeof(int) * a);
    for(int i = 0 ; i < a; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0 ; i < a; i++){
        for(int j = i + 1; j < a; j++){
            for(int k = j + 1; k < a; k++){
                sum = p[i] + p[j] + p[k];
                if(ab(sum, b) < temp && sum <= b) {
                    temp = ab(sum, b);
                    result = sum;
                }
            }
        }
    }
    printf("%d", result);
    free(p);
}