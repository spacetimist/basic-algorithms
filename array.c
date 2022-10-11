#include<stdio.h>
int main()
{
	int size;
	scanf("%d", &size);
	int N[size], M[size];
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &M[i]);
	}
	
	for(int j = 0; j < size; j++)
	{
		scanf("%d", &N[M[j]]);
	}
	
	for(int k = 0; k < size; k++)
	{
		if(k == size-1)
			{
				printf("%d\n", N[k]);
			}else
			{
				printf("%d ", N[k]);
			}
	}
	
   return 0;
}
