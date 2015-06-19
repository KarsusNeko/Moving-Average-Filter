#ifndef __MAF_H
#define __MAF_H

typedef struct {
	int		size;
	int		total;
	float	avg;
	int		curs;
	int*	elem;
} maf;

maf maf_create(int* elem, const int size);
void maf_update(maf* elem, const int data);

#endif // __MAF_H
