#include<stdio.h>
int main(){
  int num;
  up:
  printf("%d",num);
if(num>100)
{printf("Quit");
goto out;}
goto up;
out:
  return 0;
}