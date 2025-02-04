/*
    Author: CWN221
    Date: 4/02/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe search function in Arrays
*/

#include <stdio.h>

int main()
{
	int i;
	int nums[5] = {2, 7, 11, 14, 22};
	int n = 4;
	int s = 2;
	
	//Array before searching elements
	printf("Array before searching elements...\n");
	for (i = 0;i < n; i++)
	{
		printf("Number at [%d] is %d\n",i, nums[i]);
	}
	
	//Array after searching elements
	printf("\nArray after searching elements...\n");
	for (i = 0; i < n; i++)
	{
		if (nums[i] == s)
		{
			printf("Found element %d at index %d\n", s, i);
		}
	}
	
	
	return 0;
}