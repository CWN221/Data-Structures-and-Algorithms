/*
    Author: CWN221
    Date: 4/02/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe display function in Arrays
*/

#include <stdio.h>

int main()
{
	int i;
	int nums[5] = {2, 3, 5, 7, 11};
	int n = 4;
	
	for (i = 0;i <= n; i++)
	{
		printf("Num at [%d] is %d\n",i, nums[i]);
	}
	
	return 0;
}