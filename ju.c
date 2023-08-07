#include <stdio.h>
#include <string.h>

void generateMat(int n)
{
	int matrix[n][n];
    for (int i = 0; i < n;i++ )
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j] = 0;
		}
	}

	int i = n / 2;
	int j = n - 1;

	for (int num = 1; num <= n * n;) {
		if (i == -1 && j == n) 
		{
			j = n - 2;
			i = 0;
		}
		else {
			
			if (j == n)
				j = 0;

			if (i < 0)
				i = n - 1;
		}
		if (matrix[i][j]) 
		{
			j -= 2;
			i++;
			continue;
		}
		else
			matrix[i][j] = num++;

		j++;
		i--; 
	}

	printf("The Matrix for order=%d:\nSum of "
		"each row or column %d:\n\n",
		n, n * (n * n + 1) / 2);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%3d ", matrix[i][j]);
		printf("\n");
	}
}

int main()
{
	int order;
	printf("Enter your order for order\t");
	scanf("%d", &order);
	if (order%2 !=0)
    generateMat(order);
	return 0;
}