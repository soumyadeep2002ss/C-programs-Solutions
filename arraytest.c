#include <stdio.h>
int *m();
void main()
{
    int k=m();
    printf("%d",k);
}
int *m()
{
	int a[2]={5,8};
	return a;
}
