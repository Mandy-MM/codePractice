//03-2. 用天平找小球(10)
/*
三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。
输入格式：输入在一行中给出3个正整数，顺序对应球A、B、C的重量。
输出格式：在一行中输出唯一的那个不一样的球。
输入样例：1 1 2
输出样例：C
代码实现：
*/

#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log

int main(int argc, char *argv[]){
  int weigA = atoi(argv[1]);
  int weigB = atoi(argv[2]);
  int weigC = atoi(argv[3]);

  if (argc != 4 || weigA < 0 || weigB < 0 || weigC < 0){
    printf("Usage: %s <weig1> <weig2> <weig3>\n", argv[0]);
    return 1;
  }

  if (weigA == weigB){
    printf("C\n");
  }
  else if (weigA == weigC){
    printf("B\n");
  }
  else{
    printf("A\n");
  }

  return 0;
}




