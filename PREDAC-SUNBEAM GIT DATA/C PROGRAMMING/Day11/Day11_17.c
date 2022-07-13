#include<stdio.h> 
//Input a single digit number and print it in words 
int main()
{

  char* numbers[]={"zero","One","Two","Three","Four"};   
  int num; 

  printf("sizeof(numbers)=%d",sizeof(numbers));//5 * 4 = 20     
  printf("Enter the single digit number"); 
  scanf("%d",&num); // 0  
  printf("%s",numbers[num]);
  // numbers[0] --> zero   
  return 0; 


   
}
