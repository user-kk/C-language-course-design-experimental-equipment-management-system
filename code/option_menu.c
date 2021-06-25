#include"C语言课设头文件.h" 
//本函数用于输出选项菜单 
int option_menu(int n)
{system("cls");
 int a,i=6,b=1,c=1;                              //i为光标y轴所在位置 ,a为菜单选项,b为函数运行状态 
 gotoxy(39,5);
 printf("* * * * * * * * * * * *选项菜单* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.显示设置");
 gotoxy(56,17);
 printf("2.账户设置");
 gotoxy(56,23);
 printf("3.返回上一步");
 gotoxy(56,27);
 printf("请输入："); 
 scanf("%d",&a);
 switch(a)
 	{case 1:{while(c)
	  		 {c=display_setup_menu();
	  		 }
 			 break;
	 		}
 	 case 2:{while(b)
	  		 {b=account_settings_menu(n);
	  		 }
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
