#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>  
#include"C语言课设头文件.h"
//本函数用于管理员注销其他用户账号 
void delete_name()
{system("cls");
 FILE*p1,*p2;int c;
 p1=fopen("namecode.dat","r+");
 p2=fopen("namecode_temporary.dat","w");
 if(p1==NULL||p2==NULL)
 	{printf("失败");
 	 system("pause");
 	 return;
	}
 char name[9],name_temporary[9],password_temporary[9];
 printf("请输入你想删除的用户");
 scanf("%s",name);
 printf("请仔细核对用户信息，是否继续删除(1:确认;2:不确认)");
	     scanf("%d",&c); 
 if(c==1) 
 	{fgets(name_temporary,9,p1);
 	 fgets(password_temporary,9,p1);
 	 while(!feof(p1))
 		{
	  	if(strcmp(name,name_temporary)!=0)
 	 		{fputs(name_temporary,p2);
 	 	 	 fputs(password_temporary,p2);
	    	}
	 	fgets(name_temporary,9,p1);
     	fgets(password_temporary,9,p1);
		}
 	 fclose(p1);
 	 fclose(p2);
 	 remove("namecode.dat");
 	 rename("namecode_temporary.dat","namecode.dat");
 	 printf("删除成功"); 
 	 system("pause");
 	}
 else return;	
}
