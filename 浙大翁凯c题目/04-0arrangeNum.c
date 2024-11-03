//04-0. 求符合给定条件的整数集(15)
/*
给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
输入格式：输入在一行中给出A。
输出格式：输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
输入样例：2
输出样例：
234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
！！我真🐮，完全靠自己写出来了！！！🎊
*/
#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log
 
int main(){
  int num;
  scanf("%d",&num);
  // i = 2,3,4,5
  for (int i = num; i < num + 4; i++){
    //j = 2,3,4,5
    for(int j = num;j < num + 4;j++){
      //如果j=i，那么跳过这次循环，直接到下一个
      if (j == i){
        continue;
      }
      else{
        for (int a = num;a < num + 4;a++){
          //如果a的值和i和j就是前面出现的位重合，那么就跳过回合
          if (a == i || a == j){
            continue;
          }
          else{
            printf("%d%d%d ", i, j, a);
          }
        }
      }
      
    }
    printf("\n");
  }
  return 0;
}