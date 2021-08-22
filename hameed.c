

# include <stdio.h>
void show(int *,int,int);
int main()
{
  int a[3][3]={1,2,3,
	       4,5,6,
	       7,8,9};
  
  show(a[0],3,3);
  return(0);
}
void show(int *p,int row,int col)
{
  int i,j;
  printf("\n\n\n");
  for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
	printf("\t %d",*(p+i*col+j));
     printf("\n");
   }
}
