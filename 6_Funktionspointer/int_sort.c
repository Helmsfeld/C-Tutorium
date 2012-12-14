#include <stdlib.h>
#include <stdio.h>

int cmp(const void *a, const void *b) 
{
	return ( *(int *)a - *(int *)b );
}

int main(void) {
	int arr[] = {33,243,1,36,865,2};
	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), cmp);
	for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		printf("a[%d] = %d\n", i, arr[i]);
	}
}
