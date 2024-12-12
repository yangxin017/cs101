#include<stdio.h>
int main(){
  int i=12345;
  int a=0;
  int b=0;
  if(i>=1000){
    a=i%10000/1000
  }
  b=i%10;
  i-=a*1000;
  i-=b;
  i+=b*1000;
  i+=a;
  printf("i=%d",i);
  return 0;
}
