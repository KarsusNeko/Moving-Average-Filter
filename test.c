#include "maf.h"
#include <stdio.h>

int main(void)
{
	int i;
	int tmp;
	maf fltr;
	int fltr_arr[16] = {0};
	
	fltr = maf_create(fltr_arr, 16);
	for(i = 0; i < 32; i++)
	{
		scanf("%d", &tmp);
		maf_update(&fltr, tmp);
		printf("total: %d, avg: %.2f, curs: %d, current: %d\n",
			fltr.total, fltr.avg, fltr.curs, fltr.elem[fltr.curs]);
	}
	
	return 0;
}
