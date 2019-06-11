#include <stdio.h> 
#include <string.h>

void SimpleAdding(int num) { 
  
  // code goes here  
  int i, sum = 0;
  for(i = 1 ; i <= num ; i++)
  {
      sum += i;
  }
  printf("%d", sum);  
            
}

int main(void) { 
  
  // keep this function call here
  SimpleAdding(gets(stdin));
  return 0;
    
}
