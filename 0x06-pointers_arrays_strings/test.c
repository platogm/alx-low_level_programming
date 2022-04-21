#include <stdio.h>

int main(void)
{
	int n;
	int l;
	int j[] = {10,20,78,88};
	int *k=j;
	int *p = &l;
//	*(p+1)=50;
	printf("Before increment *p = %d\n",*p);
	printf("After increment *p = %d\n",*(p+1));
	printf("Address of array %p\n",j);
	printf("Address of p %p\n",(&p));
	printf("Address of n %p\n",(&n));
	printf("Address of l %p\n",(&l));
	printf("Address of k %p\n",(&k));
return (0);
}
