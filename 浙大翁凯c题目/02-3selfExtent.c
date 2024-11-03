//02-3. 逆序的三位数
/*程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，
输出不应带有前导的0。比如输入700，输出应该是7。
  输入格式：每个测试是一个3位的正整数。
  输出格式：输出按位逆序的数。
  输入样例：123
  输出样例：321*/

/* 自己写的题目，根据上一个题目我想要创建一个函数可以接受任何大小的数字，然后返回这个数字的reverse版本
学会的部分，用log计算位数，怎么自己写一个次方函数，并且c语言中a ^ b并不是次方而是xor计算
取数字的每个位的方法(不用数组),用%10取个位数,/10消除掉取过的个位,于是要取的下一位就会变成个位就可以取了
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

//可以接受任何大小的数字，然后返回这个数字的reverse版本
int reverse(int num){
    //因为一直/num去掉最后一位，然后直到最后等于0，那么这个数字就处理完了
  int reversedNum = 0;
  int temp;
  int length = log10(num) + 1;//用log来算位数
  while (num != 0){
    //提取个位数
    temp = num % 10;
    reversedNum = reversedNum + (temp * power(length-1,10));//
    num /= 10;
    length--;
  }
  return reversedNum;
}

int main(int argc, char *argv[]){
  if (argc != 2){
    printf("Usage: %s <numYouWantReverse>\n", argv[0]);
    return 1;
  }
  printf("%d\n",reverse(atoi(argv[1])));
  return 0;
}
