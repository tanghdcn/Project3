#include<stdio.h>

void myP(int); 

void (*pAdd)(int); 

int main()
{
	myP(10); 

	pAdd = &myP; 

	(*pAdd)(20); 
}

void myP(int x)
{
	printf("%d\n", x);
}
