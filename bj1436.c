#include<stdio.h>

int check(char *n){
    for(int i = 1 ; n[i+1] != 0 ; i++){
        if(n[i-1] == '6' && n[i] == '6' &&n[i+1] == '6' ) return 1;
    }
    return 0;
}

char* itoa(char *n, int num){
    char m[10000] = {0,};
    int cnt = 0, i;
    while(num != 0){
        m[cnt] = num % 10 + '0';
        num /= 10;
        cnt++;
    }
    for(i = 0 ; --cnt >= 0 ; i++){
        n[i] = m[cnt];
    }
    n[i] = 0;
    return n;
}

int main(){
    int N, num = 666, cnt = 0;
    char n[10000] = {0,};
    scanf("%d", &N);
    for(int i = 0 ; ; i++, num++){
        if(check(itoa(n, num)))
        {
            cnt++;
        } 
        if(cnt == N)
        {
            printf("%d", num);
            break;
        }
    }
}