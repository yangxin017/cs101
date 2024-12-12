#include<stdio.h>
int main(){
  double pi=4.0;
  int a=1;
  int k=0;
  int x=0;
  for(int i=3;i<100000,i+=2){
    if(a==1){
      pi-=4/i;
      a--;
    }else if(a==0){
      pi+=4/i;
      a++
    }
    k=pi*100000;
    x=i;
    if(pi==314159){
      break
  }
  }
  printf("%d %.5f",x,pi);
  return 0;
}
