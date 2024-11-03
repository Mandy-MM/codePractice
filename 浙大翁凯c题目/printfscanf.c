// printf [flag][width][.prec][length]specifyer
//scanf [flag]type

#include <stdio.h>

int main(){
  int n = 123;

//flag
  //加-号左对齐和默认右对齐，以及负数会显示符号但是正数不会
  printf("%-8d\n", 123);
  printf("%8d\n", -123);

  //显示正负号
  printf("%+d\n", 123);
  printf("%+d\n", -123);

  //用零填充，数字——》不是！！多少个零，而是总的位数
  printf("%03d\n", 42);

//.prec 会四舍五入
  printf("%.2f\n", 1.245);

//length
  //hh一个字节 输出57，内部其实是因为16进制，12345转16进制，然后取16进制的后两位（一个字节的长度）
  printf("%hhd\n", 12345);

//specifyer
  printf("%dabc%n\n",123,&n);
  printf("%d\n", n);

//scanf *
  //跳过
  int a,b;
  scanf("%*d%d", &a);
  printf("%d",a);

  return 0;
}

