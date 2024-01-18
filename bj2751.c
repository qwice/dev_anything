# include <stdio.h>

void merge(int p[], int k[], int left, int mid, int right){
  int i, j, t, l;
  i = left;
  j = mid+1;
  t = left;

  /* 분할 정렬된 list의 합병 */
  while(i<=mid && j<=right){
    if(p[i]<=p[j])
      k[t++] = p[i++];
    else
      k[t++] = p[j++];
  }

  // 남아 있는 값들을 일괄 복사
  if(i>mid){
    for(l=j; l<=right; l++)
      k[t++] = p[l];
  }
  // 남아 있는 값들을 일괄 복사
  else{
    for(l=i; l<=mid; l++)
      k[t++] = p[l];
  }

  // 배열 sorted[](임시 배열)의 리스트를 배열 p[]로 재복사
  for(l=left; l<=right; l++){
    p[l] = k[l];
  }
}

// 합병 정렬
void merge_sort(int p[], int k[], int left, int right){
  int mid;

  if(left<right){
    mid = (left+right)/2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
    merge_sort(p, k, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
    merge_sort(p, k, mid+1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
    merge(p, k, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
  }
}

int main(){
    int i;
    int N;
    int *p, *k;
    scanf("%d", &N);
    p = (int *)malloc(sizeof(int) * N);
    k = (int *)malloc(sizeof(int) * N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &p[i]);
    };

  // 합병 정렬 수행(left: 배열의 시작 = 0, right: 배열의 끝 = 7)
     merge_sort(p , k, 0, N-1);

  // 정렬 결과 출력
    for(i=0; i<N; i++){
      printf("%d\n", p[i]);
    }
}