#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, i ,j, min = 32, sum, sum1, sum2;
    char **p;
    char target1[8][9] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"};
    
    char target2[8][9] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"};
                         
    scanf("%d %d", &a, &b);
    p = (char **)malloc(sizeof(char*) * (a + 1));
    for(i = 0 ; i < a ; i++){
        p[i] = (char *)malloc(sizeof(char) * (b + 1));
    }
    p[i] = 0;
    for(i = 0 ; i < a; i++){
        for(j = 0 ; j < b ; j++){
            scanf(" %c", &p[i][j]);
        }
        p[i][j] = 0;
    }

    for(i = 0 ; i < a - 7 ; i++){
        for(j = 0 ; j < b - 7; j++){
            sum1=0;
            sum2=0;
            for(int k = 0 ; k < 8; k++){
                for(int t = 0 ; t < 8; t++){
                    if(target1[k][t] != p[i+k][j+t]) sum1++;
                }
            }
            
            for(int k = 0 ; k < 8; k++){
                for(int t = 0 ; t < 8; t++){
                    if(target2[k][t] != p[i+k][j+t]) sum2++;
                }
            }
            sum = sum1 < sum2 ? sum1 : sum2;
            if(sum < min) min = sum;
        }
    }
    printf("%d", min);
}