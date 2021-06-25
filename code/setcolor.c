#include"C语言课设头文件.h"
//本函数用于设置颜色 
void setcolor()
{
	system("cls");
	char a[2],b[2],a1,b1;
	FILE*p;

	printf("请用户自己选择：          0（黑） 1（蓝） 2（绿） 3（浅绿） 4（红） 5（紫） 6（黄） 7（白） 8（灰） \n ");
	printf("                         9（淡蓝）   A（淡绿） B（淡浅绿） C（淡红） D（淡紫） E（淡黄） F（亮白）  \n"); 
	printf("请选择背景颜色\n");
	printf("请选择字体颜色\n");
	gotoxy(15,2);
	scanf("%s",a);
	gotoxy(15,3);
	scanf("%s",b);
	a1=a[0];
	b1=b[0];
	if((a1>='0'&&a1<='9'||a1>='A'&&a1<='F')&&(b1>='0'&&b1<='9'||b1>='A'&&b1<='F'))
		{p=fopen("color.txt","w");
		fputc('c',p);
		fputc('o',p);
		fputc('l',p);
		fputc('o',p);
		fputc('r',p);
		fputc(' ',p);
		fputc(a1,p);
		fputc(b1,p);
		fclose(p);
		printf("设置成功\n"); 
		printf("该设定在用户重启管理系统后生效\n");
		system("pause");
		}
	else
		{printf("输入格式不正确，请重新输入");
		 system("pause");
		 return; 
		}
 } 
