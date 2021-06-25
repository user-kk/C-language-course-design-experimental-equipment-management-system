#include"C语言课设头文件.h"
//本函数用于显示帮助以及制作人信息 
void help()
	{system("cls");
	 FILE*p;
	 p=fopen("帮助.txt","r");
	 char a;
	 while(!feof(p))
	 	{a=fgetc(p);
	 	  if(a=='\n')
	 	  	Sleep(300);
	 	Sleep(30);
		   printf("%c",a);
		}
	 system("pause");
	 system("cls");
     printf("制作人：何宇涵 黄远\n制作时间：2021.3.9\n版本:1.0\n");
     system("pause");
	  
	} 
