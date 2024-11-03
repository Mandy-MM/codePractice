//02-0. 整数四则运算
/*本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。
输入格式：输入在一行中给出2个正整数A和B。
输出格式：在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。
输入样例：3 2
输出样例：
3 + 2 = 5
3 - 2 = 1
3 * 2 = 6
3 / 2 = 1
代码用命令行作为输入而不是scanf：
}
*/
#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log

int main(int argc, char *argv[]){
  if (argc != 3){
    printf("Usage: %s <num1> <num2>\n", argv[0]);
    return 1;
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  printf("%d + %d = %d\n", num1, num2, num1 + num2);
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  printf("%d * %d = %d\n", num1, num2, num1 * num2);
  printf("%d / %d = %d\n", num1, num2, num1 / num2);

  return 0;
}