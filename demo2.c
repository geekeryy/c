#include <stdio.h>
int main (){
	char c = 'h';
	char str[]="str1";			//定义字符串 
	char *p="this is str2"; 	//编译器先给字符串一个地址，然后让p指向这个地址	
	int *n,a=10; 
	double *d,b=10.2;			
	char *cc,aa='n';
	n=&a;
	d=&b;
	cc=&aa; 
	printf("str:%s\np:%s\n",str,p);
	printf("不同类型指针分配的空间：\n%d\n%d\n%d\n%d\n",sizeof(p),sizeof(n),sizeof(d),sizeof(cc));
	printf("空间大小：\ndouble:%d\nint:%d\nchar:%d\n",sizeof(b),sizeof(a),sizeof(aa));
	printf("存放地址：\n char c:%p\n char str[] :%p\n char *p:%p \n int *n:%p\n",&c,&str,&p,&n); 
	printf("存放地址：\n int a:%p\n double b :%p\n char aa:%p \n ",&a,&b,&aa); 
	return 0;
} 
/******************************************************************
1.c语言通过 字符数组 或 字符指针 来定义字符串
2.c语言给所有指针的内存空间大小都是相同的（待考证）
3.指针只能先定义后赋值 
******************************************************************/
