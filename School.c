#include<stdio.h>
 main()
{
	printf("Enter the marks :");
	int marks=0;
	scanf("%d",&marks);
    
	 if(marks>=85 && marks<=100)
    {
        printf("grade A");
    }
    else if(marks>=70 && marks<=84)
   {
        printf("grade B");
   }
   else if(marks>=55 && marks<=69)
   {
   	    printf("grade C");
   }
   else if(marks>=40 && marks<=54)
   {
   	    printf("grade D");
   }
    else if(marks<40)
   {
       	printf("grade F");
   }
}
