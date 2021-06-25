#include"C语言课设头文件.h"
//本函数用于输出设备查询与统计菜单 
int sub_menu()
{system("cls");
 int a,i=6,c,b=1,d=1; //i为光标y轴所在位置 ,a为菜单选项,c为每页输出设备的个数,b,d为状态 
 struct Node*p1;                          
 gotoxy(39,5);
 printf("* * * * * * * * * * * *查询与统计* * * * * * * * * *");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.输出当前全部设备");
 gotoxy(56,14);
 printf("2.设备排序"); 
 gotoxy(56,17);
 printf("3.设备查询");
 gotoxy(56,20);
 printf("4.设备统计");
 gotoxy(56,23); 
 printf("5.返回上一步"); 
 gotoxy(56,26);
 printf("请输入："); 
 scanf("%d",&a);
 switch(a)
 		{case 1:{
		 		 FILE*p;
		 		 p=fopen("number.dat","r");
		 		 fscanf(p,"%d",&c);
				 fclose(p);
				 p1=from_data_to_list();
				 print(c,p1); 
				 release_node(p1);
 				 break;
		 		}
 		 case 2:{sort(); 
				 break;
	 			}
	 	 case 3:{while(b)
		  			{b=inquire_menu();
			  	    }
				 break;
		  		}
		 case 4:{while(d)
		 		 	{d=statistic_menu();
					}
				break;
		 		} 
		 case 5:return 0; 
		 default:{printf("请输入1~5范围内的数,");
			 	 system("pause"); 
			 	 return 1;
			 	 break;
			 	 } 
		}
	return 1;
}
