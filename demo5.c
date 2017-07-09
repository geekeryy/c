#include <stdio.h>
void func0(int,void (fun)(int));
void func1(int);
int main(){
	int a=10;
	int *p;
	p=&a;
	printf("a=%d\np=%p\n*p=%d\n",a,p,*p);
	*p=20;
	printf("a=%d\np=%p\n*p=%d\n",a,p,*p);
	func0(a,func1);
	return 0;
}
void func0(int n,void (*fun)(int)){
	int b=n;
	printf("调用回调函数：");
	fun(b); 
}
void func1(int n){
	printf("a=%d",n);
} 

/*****************************************************
1.通过改变*p的值，来改变指针指向的值 
2.使用回调函数	 
******************************************************/
