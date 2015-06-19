#include "maf.h"

maf maf_create(int* elem, const int size)
{
	maf	tmp;
	
	tmp.size	= size;
	tmp.elem	= elem;
	tmp.total	= 0;
	tmp.avg		= 0;
	tmp.curs	= 0;
	
	return tmp;
}

void maf_update(maf* maf_ctnr, const int data)
{
	maf_ctnr->total	-= maf_ctnr->elem[maf_ctnr->curs];
	maf_ctnr->total	+= data;
	maf_ctnr->avg	 = (float) maf_ctnr->total
								/ maf_ctnr->size;
	maf_ctnr->elem[maf_ctnr->curs]
					 = data;

	if(maf_ctnr->curs
			< (maf_ctnr->size - 1))
		maf_ctnr->curs++;
	else
		maf_ctnr->curs = 0;
}
