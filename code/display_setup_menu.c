#include"C语言课设头文件.h" 
//本函数用于输出显示设置菜单 
int display_setup_menu()
{system("cls");
 int a,i=6;                              //i为光标y轴所在位置 ,a为菜单选项
 gotoxy(39,5);
 printf("* * * * * * * * * * * *显示设置* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.更改界面颜色");
 gotoxy(56,17);
 printf("2.更改每页输出设备的个数");
 gotoxy(56,23);
 printf("3.返回上一步");
 gotoxy(56,27);
 printf("请输入："); 
 scanf("%d",&a);
 switch(a)
 	{case 1:{setcolor();
 			 break;
	 		}
 	 case 2:{setnumber();
 	 
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
