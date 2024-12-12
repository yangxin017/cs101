#include<stdio.h>
int main(){
  for(int i=1,j=1;i<=9;){
    if(j<=8){
      printf("%d*%d =%d",i,j,i*j);
      j++;
    }
  else if(j==9){
      printf("%d*%d =%d",i,j,i*j);
      j=1;
      printf("\n");
      i++;
    }
  }
  return 0;
}
