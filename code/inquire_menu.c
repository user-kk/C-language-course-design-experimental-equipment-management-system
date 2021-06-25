#include"C语言课设头文件.h"
//本函数用于输出查询界面菜单 
int inquire_menu()
{system("cls");
 int a,i=6;                              //i为光标y轴所在位置 ,a为菜单选项
 char b[6]; 
 gotoxy(39,5);
 printf("* * * * * * * * * * * *查询  界面* * * * * * * * * *");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.按设备编号查询");
 gotoxy(56,13);
 printf("2.按设备购买时间查询"); 
 gotoxy(56,15);
 printf("3.按设备种类查询");
 gotoxy(56,17);
 printf("4.按当前状态查询"); 
 gotoxy(56,19);
 printf("5.按修理次数查询");
 gotoxy(56,21);
 printf("6.多条件查询");
 gotoxy(56,23);
 printf("7.返回上一步");
 gotoxy(56,25);
 printf("请输入："); 
 scanf("%d",&a);
 switch(a)
 		{case 1:{strcpy(b,"1\0");
		 		 inquire(b);
 				 break;
		 		}
 		 case 2:{strcpy(b,"2\0");
		  		 inquire(b);
				 break;
	 			}
	 	 case 3:{strcpy(b,"3\0");
		  		 inquire(b);
				 break;
		  		}
	 	 case 4:{strcpy(b,"4\0");
		  		 inquire(b);
				 break;
		  		}
		 case 5:{strcpy(b,"5\0");
		  		 inquire(b);
				 break;
		 		}
		 case 6:{system("cls");
		 		 printf("1.按设备编号查询 2.按设备购买时间查询\n");
				 printf("3.按设备种类查询 4.按当前状态查询\n");
				 printf("5.按修理次数查询 6.按设备购买价格查询\n"); 
		 		 printf("请输入条件（例：想要查询当前状态为闲置且修理1次的设备输入45）\n");
				 scanf("%s",b);
				 inquire(b);
				 break;
		 		}
		 case 7:return 0; 
		 default:{printf("请输入1~7范围内的数,");
			 	 system("pause"); 
			 	 return 1;
			 	 break;
			 	 } 
		}
	return 1;
}
