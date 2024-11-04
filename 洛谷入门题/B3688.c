#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int shift(int *p, int n){

  //处理最后一项移到第一个的情况
  int last = p[n-1];

  //loop whole array,从后往前，处理剩余情况
  for (int i = n-2; i >= 0; i--){
    //printf("i=%d, [i]=%d\n", i, p[i]);
    p[i + 1] = p[i];
  }
  p[0] = last;

  return 0;
}

int main(){
  int n;
  scanf("%d", &n);
  int arr[n];

  //输入数列内容
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  // 当 n = 1 时，不需要进行 shift 操作
  if (n == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }


// 循环执行 shift 操作
  do {
      shift(arr, n);
      for (int j = 0; j < n; j++) {
          printf("%d", arr[j]);
          if (j < n - 1) {
              printf(" ");
          }
        }
      printf("\n");
  } while (arr[n - 1] != n);

  return 0;
}