#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;    

printf("enter the number of rows:");    
scanf("%d",&r1);    
printf("enter the number of columns:");    
scanf("%d",&c1);    
printf("enter the first matrix elements:\n");    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}
printf("enter the number of rows:");    
scanf("%d",&r2);    
printf("enter the number of columns:");    
scanf("%d",&c2);     
printf("enter the second matrix elements:\n");  
 
for(i=0;i<r2;i++)    
{    
for(j=0;j<c2;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
if(c1!=r2){
printf("\nMatrix multiplication not compatible");
}
else{
printf("\nMatrix multiplication compatible\n");     
printf("\nProduct:\n");    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c2;k++)    
{    
mul[i][j]=mul[i][j]+a[i][k]*b[k][j];    
}    
}    
}    
 
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}
}    
return 0;  
}  
