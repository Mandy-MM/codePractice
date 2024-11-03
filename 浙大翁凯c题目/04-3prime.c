//04-3. 统计素数并求和(20)
/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。
输入格式：输入在一行中给出2个正整数M和N（1<=M<=N<=500）。
输出格式：在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
输入样例：10 31
输出样例：7 143
*/
//用scanf做

int main(){
  int M, N;
  int sum = 0, count = 0;
  scanf("%d %d", &M, &N);

  //遍历M和N直接的每一个数，n
  for(int n = M; n < N + 1; n++){
    bool isPrime = true;

    //如果不是素数一定会有一个因数
    for (int i = sqrt(n); i > 1; i--){
      //printf("number:%d\n", n); //测试在被判断是不是prime的数字是什么
      if (n % i == 0){
        //printf("i:%d\n", i); //测试因数是多少
        isPrime = false;
      }
    }
    if (isPrime){
      //printf("prime:%d\n", n);  //测试哪些数字是prime
      count++;
      sum += n;
    }
  }
  printf("%d %d\n", count, sum);
  return 0;
}
