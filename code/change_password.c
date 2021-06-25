#include"C语言课设头文件.h"
//本函数用于修改密码 
int change_password_2(int n)
{ 
	int i;
	char new_password1[9],new_password2[9];
	printf("请输入新密码(八位)");
	scanf("%s",new_password1);
	printf("请再次输入新密码");
	scanf("%s",new_password2); 
	if(strcmp(new_password1,new_password2)==0)
		{i=strlen(new_password1);
		 if(i==8)
		 	{FILE *p;
    	 	 p=fopen("namecode.dat","r+");
    	 	 if(p==NULL)printf("shibai");
    	 	 fseek(p,8*(2*n-1),0);
    	 	 fputs(new_password1,p);
		 	 fclose(p); 
		   	 printf("修改成功\n");
		 	 system("pause");
		 	 return 0;
			}
		 else
		 	{printf("请输入八位密码\n"); 
		 	 system("pause");
			 return 1;
			}
		 
		}
	else printf("密码不一致\n");
	system("pause");
	return 1;
	
 } 
int change_password_1(int n)
{
 int a=1;
 int count=1;
 char entered_password[9],password[9],new_password1[9],new_password2[9];
 printf("请输入当前密码 ");
 scanf("%s",entered_password);
 FILE *p;
 p=fopen("namecode.dat","r+");
 while(count<=n) 
	{
	 fgets(password,9,p);
	 fgets(password,9,p);
	 count++;
	}
	fclose(p);
 if(strcmp(password,entered_password)==0)
		{
		 while(a)
		 	{
			 a=change_password_2(n);
		 	 system("cls");
		    }
		 return 0;
		}
	else
		{
		 printf("密码错误\n");
		 system("pause");
		 return 1;
		}
		
}

void change_password(int n)
{
 system("cls");
 int a=1;
 while(a)
	{
	 a=change_password_1(n);
	 system("cls");
	}
} 

