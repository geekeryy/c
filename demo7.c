#include <stdio.h>
int main(){
	int a;
	int c=111;
	int b;
	char ch;
	char buf[255];
	char buff[255];
	FILE *p;
//文件写入 
	p=fopen("test.txt","a");
//	fputc('\n',p);					//将字符写入到p指向的输入流
//	fprintf(p,"this is point!\n");	//将字符串写入缓冲区 
//	fputs("this is fputs...\n",p);	//将字符串写入到p指向的输入流，成功返回非负值，失败返回EOF 
	c=fclose(p);					//将缓冲区数据写入文件，并关闭文件文件释放缓冲区 
	
//文件读取 
	p=fopen("test.txt","r");
	//方法一 
//	while((ch=fgetc(p))!=EOF){
//		fputc(ch,stdout);			//将ch表示的字符送到标准输出流中去 
//	}

	//方法二 
	fscanf(p,"%s",buf);			//读取p输入流，并复制到buf，遇到空格或换行结束 
	printf("fscanf:%s\n",buf); 
	
	//移动文件指针 
//	int len;
//	len=ftell(p);				//获得文件指针偏移量 
//	rewind(p);					//移动文件指针到文件头 
//	fseek(p,2L,0);				//移动文件指针(文件指针，偏移量长整型有正负值，0表示文件头1表示当前位置2表示文件尾) 
//	printf("%d",len);
	
	//方法三 
	fgets(buff,5,p);			//从p指向的输入流中获取n-1个字符，遇到换行符就停止读取，将读取的字符串复制到缓冲区buff包括换行符 
	int i=0;
	printf("buff:%s\n",buff); 
//	printf("buff:");
//	while(*(buff+i)!='\0'){		//*(buff+i)==buff[i]，编译器自动给字符数组末尾加上'\0'结束符 
//		printf("%c",buff[i]);
//		i++;
//	}
	
	c=fclose(p);
	
	fputs("fputs:ok\n",stdout);
	fprintf(stdout,"fprintf:no\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b); 
	printf("c=%d\n",c); 
	return 0;
}
/****************************************************************
1.fclose函数的作用是将缓冲区的数据写入文件
2.fgetc()函数每执行一次指针便向后移一位，直到指向EOF结束标志 ,实现取值功能
3.fgets(buff,n,p)读取p输入流中n-1个字符，复制到buff中，遇到换行符停止读取 
4.fputc(ch,stdout)显示ch的值 
5.fputs(s,point)将s字符串写入到point指向的输入流
6.fprintf(point,s)与fputs相似 
*****************************************************************/
