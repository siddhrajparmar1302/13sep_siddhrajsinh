// WAP to show Monday to Sunday using switch case
#include<stdio.h> 
int main() 
 { 
   int choice; 
   printf("Enter the number");
     printf("\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday\n");
   scanf("%d",&choice); 
   switch(choice) 
   { 
   case 1 : printf("\n Monday"); 
   break; 
   case 2 : printf("\n Tuesday"); 
   break; 
   case 3 : printf("\n Wednesday"); 
   break; 
   case 4 : printf("\n Thursday"); 
   break; 
   case 5 : printf("\n Friday"); 
   break; 
   case 6 : printf("\n Saturday"); 
   break; 
   case 7 : printf("\n Sunday"); 
   break; 
   default : printf("\n enter correct choice"); 
   break;
   } 
   return 0; 
 }