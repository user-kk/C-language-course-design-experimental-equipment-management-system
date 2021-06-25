#include"C语言课设头文件.h" 
//本函数用于翻页功能每页显示的设备个数控制 
void setnumber()
{
	system("cls");
	FILE*p;
	p=fopen("number.dat","r+");
	int b,c; 
	fscanf(p,"%d",&b);
	printf("您当前每页输出设备的个数为：%d\n",b);
	printf("您想将其修改为：");
	scanf("%d",&c);
	rewind(p);
	fprintf(p,"%d",c);
	printf("修改成功！此修改重启程序后生效\n");
	system("pause");
	fclose(p);	
	
}
