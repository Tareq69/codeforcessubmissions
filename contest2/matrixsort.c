#include <stdio.h>

void main()
{
  int nrow,ncol;
  printf("Enter rowsize: \n");
  scanf("%d", &nrow);
  printf("Enter column size: \n");
  scanf("%d", &ncol);
  int arr1[nrow][ncol],i,j;
  int arr2[nrow][ncol];




    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<nrow;i++)
  {
      for(j=0;j<ncol;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
        arr2[i][j] = arr1[i][j];
      }
    }

 printf("\nThe matrix is : \n");
  for(i=0;i<nrow-1;i++)
  {
      printf("\n");
      for(j=0;j<ncol;j++)
           printf("%d\t",arr2[i][j]);
  }
 printf("\n\n");
}
