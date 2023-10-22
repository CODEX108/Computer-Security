#include <stdio.h>

int main(){
     int num1,num2,div;
      printf("\tEnter Two Numbers\n");
      printf("---------------------------\n");
      printf("Enter First Number  : ");
      scanf("%d", &num1);
      printf("\nEnter Second Number : ");
      scanf("%d",&num2);
      
      if(num2==0){
          printf("interrupt occured\a");
      }
      
      else{
      div=num1/num2;
      printf("\nDivision of %d & %d is = %d",num1,num2,div);
      }
      return 0;
    
   

    }


