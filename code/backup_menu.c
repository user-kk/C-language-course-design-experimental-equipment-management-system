#include"C语言课设头文件.h"
//本函数用于输出数据备份菜单 
int backup_menu()
{system("cls");
 int a,i=6;
 gotoxy(39,5);
 printf("* * * * * * * * * * * *备份菜单* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.数据备份");
 gotoxy(56,17);
 printf("2.数据恢复");
 gotoxy(56,23);
 printf("3.返回上一步");
 gotoxy(56,27);
 printf("请输入："); 
 scanf("%d",&a);
 switch(a)
 	{case 1:{back_up();
 			 break;
	 		}
	 case 2:{recovery();
			 break;
	 		} 
	 case 3:return 0;
	 default:{printf("请输入1~3范围内的数,");
			 system("pause"); 
			 return 1;
			 break;
			 } 
 	} 
 return 1;
} 
