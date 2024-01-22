// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int N;
//     int **p;

//     scanf("%d", &N);
//     p = (int **)malloc(sizeof(int*) * N);
//     for(int i = 0 ; i < N ; i++){
//         p[i] = (int *)malloc(sizeof(int) * 2);
//         scanf("%d %d", &p[i][0], &p[i][1]);
//     }

//     for(int i = 0 ; i < N ; i++){
//         for(int j = i + 1; j < N ; j++){
//             if(p[i][0] > p[j][0]){
//                 int *temp;
//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] = temp;
//             }
//             else if(p[i][0] == p[j][0] && p[i][1] > p[j][1]){
//                 int *temp;
//                 temp = p[i];
//                 p[i] = p[j];
//                 p[j] = temp;
//             }
//         }
//     }
    
//     for(int i = 0 ; i < N ; i++){
//         printf("%d %d\n", p[i][0], p[i][1]);
//     }
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} Point;

int compare(const void *a, const void *b){
  Point A = *(Point *)a;
  Point B = *(Point *)b;
  if(A.x > B.x){
    return 1;
  }
  else if(A.x == B.x){
    if(A.y > B.y){
      return 1;
    }
    else{
      return -1;
    }
  }
  return -1;
}

int main(){
  int test;
  scanf("%d",&test);
  Point *arr;
  arr = (Point *)malloc(sizeof(Point) * test);
  for(int i = 0; i < test; i++){
    scanf("%d %d",&arr[i].x,&arr[i].y);
  }
  qsort(arr,test,sizeof(Point),compare);
  for(int i = 0; i < test; i++){
    printf("%d %d\n",arr[i].x,arr[i].y); 
  }
  free(arr);
  return 0;
}