/*
    Author: CWN221
    Date: 4/02/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe insertion function in Arrays
*/

#include <stdio.h>

int main()
{
	int i, j;
	int nums[5] = {};
	int n = 4;
	
	//Array before inserting elements
	printf("Array before inserting elements...\n");
	for (i = 0;i <= n; i++)
	{
		printf("Num at [%d] is %d\n",i, nums[i]);
	}
	
	//Array after inserting elements
	printf("\nArray after inserting elements...\n");
	nums[0] = 2;
	for (j = 0;j <= n; j++)
	{
		nums[j] = j + 2;
		printf("Num at [%d] is %d\n", j, nums[j]);
	}
	
	return 0;
}