//02-3. 逆序的三位数
/*程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，
输出不应带有前导的0。比如输入700，输出应该是7。
  输入格式：每个测试是一个3位的正整数。
  输出格式：输出按位逆序的数。
  输入样例：123
  输出样例：321
*/

#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log

//把输入的三个位数，x=123/100 = 1，y = 123 % 100 = 23 / 10 = 2, 123 % 100 = 23 % 10 = 3
int main(int argc, char *argv[]){
  if (argc != 2){
    printf("Usage: %s <num>",argv[0] );
  }
  int num = atoi(argv[1]);

  int hundreds = num / 100;
  int tens = (num % 100) / 10;
  int ones = (num % 100) % 10;

  printf("%d%d%d\n",ones, tens, hundreds);
  return 0;
}






