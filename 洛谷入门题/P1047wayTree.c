#include <stdio.h>
#include <stdbool.h>
//count部分错很多次，因为数组way【0】的地方也有一颗树，所以实际上是有l+1颗树

int main(){
  int l;  //长度为l的马路
  int m; //区域个数
  int u,v; //开始/终止坐标
   

  scanf("%d %d", &l, &m); //别表示马路的长度l和区域的数目m

  //initalize way to true;
  int count = 0;  // count tree number
  bool way[l + 1];
  for (int a = 0; a < l + 1; a++){
    way[a] = true;
  }
  
  while(m > 0){  //有m个区域的树有要砍
    scanf("%d %d", &u, &v); //接下来m行，每行两个整数u,v表示一个区域的起始点和终止点的坐标。

    //把way[u] to way[v]的值设为0，表示这些树都没了
    for (int i = u; i < v + 1; i++){
      way[i] = false;
      //printf("i = %d,way[i] = %d\n", i,way[i]);
    }

    m--;
  }

  //count tree 
    for (int j = 0; j < l + 1;j++){
      if (way[j]){
        count;
      }
    }
  printf("剩余多少树：%d\n",count);
  return 0;

}
