#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log, sqrt
#include <stdbool.h>

//05-0. 求序列前N项和(15)
/*
本题要求编写程序,计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。注意该序列从第2项起，
每一项的分子是前一项分子与分母的和，分母是前一项的分子。
输入格式：输入在一行中给出一个正整数N。
输出格式：在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。
输入样例：20
输出样例：32.66
*/
int main(){
  int n = 20;
//注意⚠️ 分子分母都要定义成double,因为最后的sum是double,算子必须也得是double,不然就算sum定义成double结果也会是int
  double domainator = 1;
  double numerator = 2;
  double sumDomain;
  double sumResult = 0;

  while(n != 0){
    sumDomain = 0;
    sumResult += numerator / domainator;   //先加上前一项，后面算下一项是什么
    sumDomain = domainator + numerator;    //前一项分子与分母的和
    domainator = numerator;     //分母是前一项的分子
    numerator = sumDomain;  //分子是前一项分子与分母的和
    n--;
    printf("sumResult = %.2f, sumDomain = %.0f, domainator = %.0f, numerator = %.0f, n = %d\n", sumResult,sumDomain,domainator,numerator,n);
  }
  printf("%.2f\n", sumResult);

}
