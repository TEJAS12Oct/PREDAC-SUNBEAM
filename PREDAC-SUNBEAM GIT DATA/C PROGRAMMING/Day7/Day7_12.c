#include<stdio.h> 

// menu-driven programming 
int main()
{
    int num1; 
    int num2; 
    int ans; 
    int choice; 

   do
   {  
            printf("0.Exit\n");
            printf("1.Addtion\n");
            printf("2.Multplication\n");
            printf("3.Substraction\n");
            printf("4.Division\n");

            printf("Enter the num1 and num2"); 
            scanf("%d%d",&num1,&num2); // 2 3 

            printf("Enter the choice"); 
            scanf("%d",&choice);

            switch (choice)
            {
            case 1: 
                ans = num1 + num2;
                printf("%d",ans);   
                break;
            case 2: 
                ans = num1 * num2;
                printf("%d",ans);   
                break;
        
            case 3: 
                ans = num1 - num2;
                printf("%d",ans);   
                break;
        
            case 4: 
                ans = num1 / num2;
                printf("%d",ans);   
                break;
        

            default:
                printf("Invalid choice"); 
                break;
            }
        printf("\n\n1 for continue and 0 for exit"); 
        scanf("%d",&choice);//0   

   }while(choice!=0);  


    printf("Exited ........."); 





}