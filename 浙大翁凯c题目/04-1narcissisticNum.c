//04-1. 水仙花数(20)
/*
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：
153 = 1^3 + 5^3 +3^3。本题要求编写程序,计算所有N位水仙花数。
输入格式：输入在一行中给出一个正整数N（3<=N<=7）。
输出格式：按递增顺序输出所有N位水仙花数，每个数字占一行。
输入样例：3
输出样例：
        153
        370
        371
        407
*/

/*
 //自己写一个次方函数
int power(int powerNum, int num){
  int result = 1;
  for (int i = 0; i < powerNum; i++){
    result *= num;
  }
  return result;
}

}
*/

#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log

//自己写一个次方函数
int power(int powerNum, int num){
  int result = 1;
  for (int i = 0; i < powerNum; i++){
    result *= num;
  }
  return result;
}
int main(int argc, char *argv[]){
  int n = atoi(argv[1]);

  //检查CMD输入错误
  if (argc != 2 || n < 3 || n > 7){
    printf("Usage: %s <digit number N(3<=N<=7)>\n", argv[0]);
    return 1;
  }
  
  int min = 1;
  int bit; //取个位
  
  //创建n位最小数，比如3位数最小数100
  for (int i = n; i > 1; i--){
    min *= 10;
  }
  //测试min值
  //printf("n=%d, min=%d\n", n,min);

  //遍历所有n位数，从最小数开始，比如3位数，从100开始，每次+1
  for (int a = min; a < min*10; a++){
    int tempNum = a; //我想取a的每个位，%10取个位，然后temp/10，继续取个位，不能用a应该会改变循环
    int sum = 0;
    //printf("a=%d, min=%d\n", a,min); //测试
    for (int b = n; b>0; b--){
      bit = tempNum % 10;
      sum += power(n,bit);
      tempNum /= 10;
      //printf("bit=%d, sum=%d, temp=%d\n", bit, sum, tempNum); //测试
    }
    if (sum == a){
      printf("%d\n",a);
    }
  }
  return 0;
}