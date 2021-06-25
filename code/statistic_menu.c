#include"C语言课设头文件.h"
//本函数用于输出统计设备显示界面 
int statistic_menu()
{system("cls");
 int a,i=6,c,b=1; //i为光标y轴所在位置 ,a为菜单选项,c为每页输出设备的个数,b为状态 
 char h[6];
 struct Node*p1;                          
 gotoxy(39,5);
 printf("* * * * * * * * * * * *统计  界面* * * * * * * * * *");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.按设备种类统计");
 gotoxy(56,13);
 printf("2.按修理次数统计");
 gotoxy(56,15);
 printf("3.按购买日期统计");
 gotoxy(56,17);
 printf("4.按设备状态统计");
 gotoxy(56,19); 
 printf("5.按设备购买价格统计"); 
 gotoxy(56,21);
 printf("6.组合统计");
 gotoxy(56,23);
 printf("7.返回上一步");
 gotoxy(56,25); 
 printf("请输入："); 
 scanf("%d",&a);
 switch(a)
 		{case 1:{statistic_sizename();
 				 break;
		 		}
 		 case 2:{strcpy(h,"4\0");
 		 		 statistic(h);
				 break;
	 			}
	 	 case 3:{strcpy(h,"1\0");
 		 		 statistic(h);
				 break;
		  		}
		 case 4:{strcpy(h,"3\0");
 		 		 statistic(h);
				break;
		 		}
		 case 5:{strcpy(h,"5\0");
 		 		 statistic(h);
				 break;
		 		} 
		 case 6:{system("cls");
		 		 printf("1.按设备购买时间统计 2.按设备种类统计\n");
				 printf("3.按当前状态统计 4.按修理次数统计\n");
				 printf("5.按购买价格统计\n"); 
		 		 printf("请输入条件（例：想要统计当前状态为闲置且修理1次的设备输入34）\n");
				 scanf("%s",h);
				 statistic(h);
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
