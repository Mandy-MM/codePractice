//03-1. 三天打鱼两天晒网(15)
/*
中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，
问这个人在以后的第N天中是“打鱼”还是“晒网”？
输入格式：输入在一行中给出1个不超过1000的正整数N。
输出格式：
在一行中输出此人在第N天中是“Fishing”（即“打鱼”）还是“Drying”（即“晒网”），并且输出“in day N”。
输入样例1：103
输出样例1：Fishing in day 103
输入样例2：34
输出样例2：Drying in day 34
*/

#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log

int main(int argc, char *argv[]){
  int day = atoi(argv[1]);

  if (argc != 2 || day > 1000){
    printf("Usage: %s <day>\n", argv[0]);
    return 1;
  }

  //把天数分段，分成5，因为一个周期是5，然后看余数
  int daySplit = atoi(argv[1]) % 5;
  if (daySplit == 4 || daySplit == 0){
    printf("Drying in day %d\n", day);
  }
  else{
    printf("Fishing in day %d\n", day);
  }
  return 0;
}


