#include<stdio.h>

int main()
{
	const int x=10;
	int y=20;
	//const int *p=&x;	 //Here pointer is not constant
	const int *q=(const int*)&x;
	//p=&y; is not allowed
	
	//p++;		        //It is allowed because the pointer is not constant
	//1) x++; 2)(*p)=22 3)x=20 It is not allowd because the int is constant

	printf("Here the int is constant so the address of the pointer is %p\n",q);
	int const z=30;
	printf("z=%d\n",z);

	int const *r;
	r=&z;
	
	int var1=11;
	int *const a=&var1;	 //Here the pointer is constant but the location is not
	//a++; It is not allowed here because the a is constant here which is a pointer
	
	printf("The var1++ is %d\n",var1++);
	printf("The var1++ is %d\n",(*a)++);
	
	int const var2=22;
	int const *const b=&var2; //here the pointer and variable both are constant
	//1)b++ 2)var2++ 3)(*b)++ It is not allowed because here both variable and pointer are constant
	return 0;
}
	
