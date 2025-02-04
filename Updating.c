/*
    Author: CWN221
    Date: 4/02/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe updating function in Arrays
*/

#include <stdio.h>

int main()
{
	int i;
	int nums[] = {5, 10, 15, 20, 25};
	int n = 5;
	int newNo = 22;
	
	//Array before updating elements
	printf("Array before updating elements...\n");
	for (i = 0;i < n; i++)
	{
		printf("Num at [%d] is %d\n",i, nums[i]);
	}
	
	//Updating element at index 4
		nums[n - 1] = newNo;
	//n++;
	
	//Array after updating elements
	printf("\nArray after updating elements...\n");
	for (i = 0;i < n; i++)
	{
		printf("Num at [%d] is %d\n", i, nums[i]);
	}
	
	return 0;
}