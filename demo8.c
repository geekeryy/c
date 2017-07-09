#include <stdio.h>
#include <stdarg.h>
double average(int n,...){
	int i;
	int sum=0;
	//定义变量 
	va_list valist;
	//初始化所有参数 
	va_start(valist,n);
	//获取每个参数值 
	for(i=0;i<n;i++){
		sum+=va_arg(valist,int);	
	}
	return sum/n;
}
int main(){
	printf("average:%f",average(0,5,2,3,4,5,6));
	return 0; 
} 
/***********************************************************
1.va_arg()运行一次，指针后移 
2....前面必须有一个整型参数来表示参数个数 
************************************************************/
