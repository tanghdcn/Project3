#include<stdio.h>

void MyFun(int x); /* �������Ҳ��д�ɣ�void MyFun( int )*/

void (*FunP)(int); /*Ҳ�������� void(*FunP)(int x)����ϰ����һ�㲻������ */

int main(int argc, char* argv[])
{
	MyFun(10); /* ����ֱ�ӵ��� MyFun ���� */

	FunP = &MyFun; /* �� MyFun �����ĵ�ַ���� FunP ���� */

	(*FunP)(20); /* �������ͨ������ָ����� FunP ������MyFun �����ġ� */
}

void MyFun(int x) /* ���ﶨ��һ�� MyFun ���� */
{
	printf("%d\n", x);
}