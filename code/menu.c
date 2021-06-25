#include"C语言课设头文件.h"
//本函数用于输出主菜单 
int menu(int n)
{  int a,b=1,c=1,d=1,i=6;                                //a为菜单选项 ,i为光标y轴所在位置 ,b为函数运行状态 
   system("cls");
   gotoxy(39,5);
   printf("* * * * * * * * * * * *主菜单* * * * * * * * * * * * ");
   for(;i<=27;i++)
   	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
   gotoxy(39,28);
   printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *"); 
   gotoxy(56,9);
   printf("1.增加设备");
   gotoxy(56,11);
   printf("2.修改设备");
   gotoxy(56,13);
   printf("3.删除设备");
   gotoxy(56,15);
   printf("4.查询与统计");
   gotoxy(56,17);
   printf("5.使用、修理、遗失、报废登记");
   gotoxy(56,19);
   printf("6.备份与还原");
   gotoxy(56,21);
   printf("7.设置");
   gotoxy(56,23);
   printf("8.关于");
   gotoxy(56,25);
   printf("9.退出");
   gotoxy(56,27);
   printf("请输入："); 
   scanf("%d",&a); 
   switch(a)
   	  {case 8:{
    		   help();
			   break;
		 	  }
	   case 9:{system("cls"); 
   			   printf("感谢使用！\n");
   			   Sleep(1000); 
   			   exit (0);
			   break;
	   		  }
	   	case 7:{while(c)
		   			{
					 c=option_menu(n); 
				    }
				break;
			   }
		case 1:{addnode();
				break;
				}
		case 2:{correct_Node();
				break;
				}
		case 3:{delete_device();
				break;
			   }
		case 4:{while(d)
		   			{
					 d=sub_menu(); 
				    }
				break;
			   }
		case 5:{device_cheak_in();
				break;
			   }
		case 6:{while(b)
		   			{
					 b=backup_menu(); 
				    }
				break;
			   }
		default:{printf("请输入1~9范围内的数,");
				 system("pause"); 
				 return 0;
				 break;
				} 
	  }
}
   
   
