#include <stdio.h>

int main()
{
	int t;
	// input the amount of test cases
	scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		long int n;
		int j = 0, a[20];
		scanf("%ld", &n); // input the number you want to convert to binary
		while(n > 0){
			a[j] = n%2;
			n = n/2;
			j++;
		}
		printf("Case #%d: ", i);
		for(int k = j-1; k >= 0; k--)
		{
			printf("%d", a[k]);
		}
		printf("\n");
	}
	
  return 0;
}
