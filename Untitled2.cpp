#include <stdio.h>
#include <stdlib.h>

int main() {
 int num;
  printf("Enter a number: ");	
  scanf("%d", &num);
  for(int i = 1; i <= 10; i++){
      num*=i;
      }
      
      printf("%d", num);
  return 0;
}