#include <stdio.h>
#include <unistd.h>
void int_reverse(int *,int);
void char_reverse1(char *);
void char_reverse2(char *);
int main(){
	int n;
	int i=0;
	int a[30];
	char c[]={'a','b','c','d','a','b','c','d','a','b','c','d','a','b','c','d'};
	printf("请输入十进制数："); 
	scanf("%d",&n);
	while(n){
	a[i]=n%2;
	printf("a[%d]=%d\n",i,a[i]);
	n/=2;
	i++;	
	}
	printf("整型数组倒序结果为：");
	int_reverse(a,i);
	printf("\n");
	printf("字符数组倒序结果为：");
	char_reverse2(c);
	return 0;
} 

/*
倒序函数：使整型数组倒序输出
参数：数组首地址，数组长度 
*/
void int_reverse(int * p,int len){
	while(len--){
	printf("%d",*(p+len));
	}
}

/*
倒序函数：计算char数组长度，并使char数组倒序输出 
参数：数组首地址 
意义：理解数组结束符 
*/
void char_reverse1(char * p){
	int len=0;
	while(*p++!='\0'){	//p++为先使用后自增 ，退出循环后p指向结束符'\0'的下一位 
		len++;
	}
	p-=2;				//c编译器自动为数组加上结束符char c[]={'a','b','c','d','\0'}
	printf("len:%d\n",len); 
	while(len--){
		printf("%c",*(p--));
	}
}

/*
倒序函数：计算char数组长度，并使char数组倒序输出
参数：数组首地址  
*/
void char_reverse2(char * p){
	int len=0;
	char *q;
	q=p;
	while(*q++!='\0'){
		len++;
	}
	printf("len:%d\n",len);
	while(len--){
	printf("%c",*(p+len));
	}
}
/**************************************************************
1.整型数组没有结束符'\0'
2.仅仅依靠传递整型数组参数，是无法获取数组长度的 
3.NULL是指针类型
4.获取数组长度通用方法 length=sizeof(a)/sizeof(a[0]);得到数组最大容纳元素的个数 
***************************************************************/


