#include<stdio.h> 
int main()
{
    // char str1[20] = "Sunbeam";
    // char str2[20] = "Sunbeam";
    // // str1 --> name of array ---> base address 
    // // str2 --> name of array --> base address 
    // // strcmp( ); --> #include<string.h> 

    // if(str1==str2) // comparing the address -> not same 
    //    printf("Same"); 
    // else
    //    printf("Not same");   

    // char *str1 = "Sunbeam";
    // char *str2 = "Sunbeam";
    // // pointer to a string 
    // // str1 --> name of array ---> base address 
    // // str2 --> name of array --> base address 
    // // strcmp( ); --> #include<string.h> 

    // if(str1==str2) // comparing the address -> not same 
    //    printf("Same"); 
    // else
    //    printf("Not same");   

    // printf("\n %u",str1);
    // printf("\n %u",str2);

    //   char *str = "Sunbeam"; // RO-data section 
    //  //char str[] = "Sunbeam"; //Allowed - OK   
    //  int i = 0; 
    //   str[i]='A';  // Runtime-error 
    //  printf("%s",str); // Sunbeam 

     char str2[20]="Sunbeam"; 
     //printf("%s",str2);// Sunbeam  

      printf(str2); // Sunbeam
      printf("\n"); 
      printf(str2+1);// unbeam
      printf("\n"); 
      printf(str2+2); // nbeam 
      printf("\n"); 
      printf(str2+3); // beam      

    return 0;
}
