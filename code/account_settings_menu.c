#include"C语言课设头文件.h" 
//本函数用于输出账户设置菜单 
int account_settings_menu(int n)     
{system("cls");
 int a,i=6,b=1;                              //i为光标y轴所在位置 ,a为菜单选项,b为函数运行状态 
 gotoxy(39,5);
 printf("* * * * * * * * * * * *账户设置* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.修改密码");
 gotoxy(56,14);
 printf("2.新建账户"); 
 gotoxy(56,17);
 printf("3.删除账户");
 gotoxy(56,20);
 printf("4.修改其他账户密码"); 
 gotoxy(56,23);
 printf("5.返回上一步");
 gotoxy(56,26); 
 printf("请输入："); 
 scanf("%d",&a);
 if(n==1)
	{ switch(a)
 		{case 1:{change_password(n);
 				 break;
		 		}
 		 case 2:{addname();
				 break;
	 			}
	 	 case 3:{delete_name();
				 break;
		  		}
	 	 case 4:{change_other_password();
				 break;
		  		}
		 case 5:return 0; 
		 default:{printf("请输入1~5范围内的数,");
			 	 system("pause"); 
			 	 return 1;
			 	 break;
			 	 } 
	 
		}
	}
 else
 	{switch(a)
 		{case 1:{change_password(n);
 				 break;
		 		}
		 case 2:
		 case 3:
		 case 4:{gotoxy(95,20);
		 		 printf("您没有权限进行此操作"); 
		 		 gotoxy(95,22);
		 		 system("pause");
				 break;
		 		}
		 case 5:return 0;
		 default:{printf("请输入1~5范围内的数,");
			      system("pause"); 
			      return 1;
			      break;
			     }
		}
	 }
	return 1;
}
