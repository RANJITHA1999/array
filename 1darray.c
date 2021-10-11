//count no of even &odd
#include <stdio.h>

int main() {
  
  int a[5],i;
    
int even=0,odd=0;
  
  for(i=0;i<5;i++)
  
  {
       
 scanf("%d",&a[i]);
  
  }
  
  for(i=0;i<5;i++)
  
  if(a[i]%2==0)
  
  {
       
 even++;
 
   }
  
  else
  
  {
   
     odd++;
 
   }
  
  printf("%d even",even);
 
   printf("%d odd",odd);
 
   return 0;

}
//two array add and store in other
#include<stdio.h>

int main()
 {
int arr1[5],arr2[5],arr3[5],i;

   
 printf("enter arr1[]\n");
    
for(i=0;i<5;i++)
    
scanf("%d",&arr1[i]);
   
 printf("enter arr2[]\n");
    
for(i=0;i<5;i++)
  
  scanf("%d",&arr2[i]);
 
   for(i=0;i<5;i++)
   
 {
    
    arr3[i]=arr1[i]+arr2[i];
     
   printf("%d\n",arr3[i]);
  
  }
  
  return 0;

}
