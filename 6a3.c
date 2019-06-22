#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0;
	int y = 0;
	int width = 0;
	int height = 0;
	int count = 1;

	printf("\nEnter width: \n");
	scanf("%d", &width);
	printf("\nEnter height: \n");
	scanf("%d", &height);

	int **arr = (int **) malloc(height * sizeof(int *));

	for (x; x < width; x++) {
		arr[x] = (int *) malloc(width * sizeof(int));
	}

	for (y = 0; y < height; y++) {
		for (x = 0; x < width; x++) {
			arr[x][y] = count;
			count++;
		}
	}

	for (y = 0; y < height; y++) {
		for (x = 0; x < width; x++) {
			printf("%d ", arr[x][y]);
		}
		printf("\n");
	}

	for (x = 0; x < height; x++) {
		free(arr[x]);
	}
	free(arr);

	return 0;

}
