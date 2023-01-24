#include<stdio.h>
void read_array(int n);
void display_array();
void select_sort();
int arr[20];
int n;

int main()
{

printf("\n Enter no of elements \n");
scanf("%d",&n);
read_array(n);
display_array();
select_sort();
}
void read_array(int n)
{
int i;

printf("\n Enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}

void display_array()
{
int i;

printf("\n Elements of the array are:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

void select_sort()
{
 int i,j,k,t,a;


for(i=0;i<n;i++)
 {
  j=i;
  for(k=i+1;k<n;k++)
  {
   if(arr[k]<arr[j])
   j=k;

 }
 t=arr[i];
 arr[i]=arr[j];
 arr[j]=t;
 printf("\n After  iteration array is \n");
 for(a=0;a<n;a++)
  {
    printf("%d",arr[a]);
  }
}
printf("\n sorted array is:\n");
for(i=0;i<n;i++)
{
 printf("%d",arr[i]);
}
}

