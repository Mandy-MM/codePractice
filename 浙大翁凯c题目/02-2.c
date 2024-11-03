//02-2. 然后是几点
/*有时候人们用四位数字表示一个时间，比如1106表示11点零6分。现在，你的程序要根据起始时间和流逝的时间
计算出终止时间。读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，
计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。当小时为个位数时，没有前导的零，
即5点30分表示为530。注意，第二个数字表示的分钟数可能超过60，也可能是负数。
  输入格式：输入在一行中给出2个整数，分别是四位数字表示的起始时间、以及流逝的分钟数，其间以空格分隔。注意：
在起始时间中，当小时为个位数时，没有前导的零，即5点30分表示为530；流逝的分钟数可能超过60，也可能是负数。
  输出格式：输出四位数字表示的终止时间。题目保证起始时间和终止时间在同一天内。
  输入样例： 1120 110
  输出样例：1310
*/

//这个程序错了很多次，主要是要在前面先算出来，然后后面判断算出来的是否有问题，
//有问题就再改，不要想着一次算好

#include <stdio.h>
#include <stdlib.h> //atoi
#include <math.h> // log

int main(int argc, char *argv[]){
  if (argc != 3){
    printf("Usage: %s <time><minutes>", argv[0]);
  }
  //用户输入的两个值
  int inputTime = atoi(argv[1]);
  int inputMinute = atoi(argv[2]);

  //用户输入的时间的小时和分钟
  int Hours = inputTime / 100;
  int Minute = inputTime % 100;

  //需要加的分钟是不是有小时，有小时的话时针需要加，没有小时加分针
  int minuteHours = inputMinute / 60;
  int remainMinute = inputMinute % 60;

  // 新的时间---结果
  int newHours = Hours + minuteHours;
  int newMinutes = Minute + remainMinute;

  //判断是否加的分钟超过60min需要加到时针上
  if (newMinutes > 60){
    newHours += newMinutes / 60;
    newMinutes %= 60;
  }

  //判断是否加的小时超过了24小时，要自动归零
  if (newHours >= 24){
    newHours %= 24;
  }
  printf("%02d%02d\n", newHours, newMinutes);
  

  return 0;
}