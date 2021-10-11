//2d array &find sum of all elements
#include<stdio.h>

int main()
 {

int arr1[2][2],i,j,sum=0;

printf("enter arr1[]\n");
 
   for(i=0;i<2;i++)
    
{
   
 for(j=0;j<2;j++)
  
  {
    
scanf("%d",&arr1[i][j]);
   
 }
   
 }
   
 printf("matrix:\n");
  
  for(i=0;i<2;i++)
   
 {
   
 for(j=0;j<2;j++)
  
  {
      
  printf("%d\n",arr1[i][j]);
       
 sum=arr1[i][j]+sum;
   
 }
  
  }
  
  printf("%d\n",sum); 
  
   return 0;

}
   

// transpose of matrix
#include<stdio.h>

int main() {

int arr1[2][3],i,j;

printf("enter arr1[]\n");
   
 for(i=0;i<2;i++)
   
 {
    for(j=0;j<3;j++)
   
 {
   
 scanf("%d",&arr1[i][j]);
 
   }
    }
  
  printf("matrix is:\n");
   
 for(i=0;i<2;i++)
   
 {
    for(j=0;j<3;j++)
  
  {
    printf("%d\t",arr1[i][j]);
   
 }
     
printf("\n");
 
   }
  
  printf("transpose is:\n");
   
 for(i=0;i<3;i++)
   
 {
     for(j=0;j<2;j++)
  
  {
     
   printf("%d\t",arr1[j][i]);
        
    
 }
     
 printf("\n");
   
 }
   
     return 0;

}

//addition of individual rows and col
#include<stdio.h>

int main() {

int arr1[2][2],i,j,sumofrow,sumofcol;

printf("enter arr1[]\n");
   
 for(i=0;i<2;i++)

    {
    for(j=0;j<2;j++)
    {
   
 scanf("%d",&arr1[i][j]);
   
 }
   
 }
   
 printf("matrix is:\n");
   
 for(i=0;i<2;i++)
  
  {
   
 for(j=0;j<2;j++)
  
  {
    printf("%d\t",arr1[i][j]);
 
   }
    printf("\n");

    }
printf("sum ofmatrix is:\n");

    for(i=0;i<2;i++)
    
{sumofrow=0,sumofcol=0;
//initialized here bcz we should get each row,column sum individually so   
  for(j=0;j<2;j++)
 
   {
   
 sumofrow=sumofrow+arr1[i][j];
  
  sumofcol=sumofcol+arr1[j][i];
        
  
  }
  
  printf("sumofrow:%d\t sumofcol:%d\n",sumofrow,sumofcol);
  
  }
  
  
   return 0;

}
//addition of two matrix
#include<stdio.h>
int main()
 {
int arr1[2][2],arr2[2][2],arr3[2][2],i,j;
printf("enter arr1[]\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{ 
scanf("%d",&arr1[i][j]);
}
}  
 printf("enter arr2[]\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{   
  scanf("%d",&arr2[i][j]);
 }
}
printf("first matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{ 
printf("%d\t",arr1[i][j]);
 }
 printf("\n");
}
  printf("second matrix:\n");
    
for(i=0;i<2;i++)
  
{
for(j=0;j<2;j++)
  
{ 
printf("%d\t",arr2[i][j]);
 }
 printf("\n");
}
printf("sum of matrix:\n");
  for(i=0;i<2;i++)
    {
  for(j=0;j<2;j++)
 {  
    arr3[i][j]=arr1[i][j]+arr2[i][j];
     
   printf("%d\t",arr3[i][j]);
  }
  printf("\n");
  }
  return 0;
//multiplication of 2 matrix
#include<stdio.h>
int main()
 {
int arr1[2][2],arr2[2][2],arr3[2][2],i,j,sum,k;
printf("enter arr1[]\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{ 
scanf("%d",&arr1[i][j]);
}
}  
 printf("enter arr2[]\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{   
  scanf("%d",&arr2[i][j]);
 }
}
printf("first matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{ 
printf("%d\t",arr1[i][j]);
 }
 printf("\n");
}
  printf("second matrix:\n");
    
for(i=0;i<2;i++)
  
{
for(j=0;j<2;j++)
  
{ 
printf("%d\t",arr2[i][j]);
 }
 printf("\n");
}
/*if(n!=2)
{

printf(" cannot multiplication of matrix:\n");
}
else
{*/
  for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
 {  
 sum=0;
 for(k=0;k<2;k++)
 {
    sum=sum+arr1[i][k]*arr2[k][j];
    }
    arr3[i][j]=sum;
    }
 }
 // }
 printf("multiplication of matrix:\n");
    
for(i=0;i<2;i++)
  
{
for(j=0;j<2;j++)
  { 
printf("%d\t",arr3[i][j]);
 }
 printf("\n");
}
 return 0;
} 
