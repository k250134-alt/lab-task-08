#include<stdio.h>
int main()
{
	int mat[3][3]={{12,45,32},{2,13,45},{56,72,41}};
	int max,i,j;
	max=mat[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[i][j]>max)
			{
				max=mat[i][j];
			}
			
		}
	}
	
	printf("The maximum number is %d",max);
	
}

