#include<stdio.h>

void MyFun(int x); /* 这个声明也可写成：void MyFun( int )*/

void (*FunP)(int); /*也可声明成 void(*FunP)(int x)，但习惯上一般不这样。 */

int main(int argc, char* argv[])
{
	MyFun(10); /* 这是直接调用 MyFun 函数 */

	FunP = &MyFun; /* 将 MyFun 函数的地址赋给 FunP 变量 */

	(*FunP)(20); /* （★）这是通过函数指针变量 FunP 来调用MyFun 函数的。 */
}

void MyFun(int x) /* 这里定义一个 MyFun 函数 */
{
	printf("%d\n", x);
}