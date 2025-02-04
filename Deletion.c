/*
    Author: CWN221
    Date: 4/02/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe deletion function in Arrays
*/

#include <stdio.h>

int main()
{
	int i;
	int nums[5] = {5, 10, 15, 20, 25};
	int n = 4;
	
	//Array before deleting elements
	printf("Array before deleting elements...\n");
	for (i = 0;i <= n; i++)
	{
		printf("Num at [%d] is %d\n",i, nums[i]);
	}
	
	//Deleting element at index 2
	for (i = 2; i <= n; i++)
	{
		nums[i] = nums[i + 1];
	}
	n--;
	
	//Array after deleting elements
	printf("\nArray after deleting elements...\n");
	for (i = 0;i <= n; i++)
	{
		printf("Num at [%d] is %d\n", i, nums[i]);
	}
	
	return 0;
}