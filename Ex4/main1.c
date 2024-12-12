#include<stdio.h>
int main(){
  int n=7;
  for(int j=1;j<=7;j++){
    for(int i=7;i>=1;i--){
      if(i>=7-j){
        printf(" ");
      }else {
        printf("%d ",j)
      }
    }
    printf("\n");
}
  return 0;
}
