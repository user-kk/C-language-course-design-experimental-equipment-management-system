#include"C语言课设头文件.h"
//本函数用于管理员修改其他用户的密码 
int change_other_password()
{int i;
 system("cls");
 printf("请输入您想修改其密码的用户名");
 char name[9],password_file[9],name_file[9],password1[9],password2[9]; 
 scanf("%s",name);
 FILE*p;
 p=fopen("namecode.dat","r+");
	if(p==NULL)
    	printf("打不开"); 
 fgets(name_file,9,p);
 fgets(password_file,9,p);
 while(!feof(p))
	{
    	if(strcmp(name,name_file)==0)
    		{printf("请输入新密码");
    		 scanf("%s",password1);
    		 printf("请再次输入新密码");
			 scanf("%s",password2);
			 if(strcmp(password1,password2)==0)
			 	{i=strlen(password1);
			 	 if(i==8)
			 	 	{
					 fseek(p,-8,1);
			 	 	 fputs(password1,p);
			 	 	 printf("修改成功\n");
				 	 fclose(p); 
					 system("pause");
				 	 return 0;
			    	}
			     else
			     	{printf("请输入八位密码\n"); 
		 	 		 system("pause");
			 		 return 1;
					}
				}
			 else
			 { 
			  printf("两次密码不一致，请重新修改\n");
			  fclose(p);
			  system("pause");
			  system("cls");
			  return 1; 
       		 }
       		}
    	else
	 		{
			 fgets(name_file,9,p);
    		 fgets(password_file,9,p);
    		}
	}
 printf("该用户不存在,请核对准确无误后修改\n");
 fclose(p); 
 system("pause");
 system("cls");
 return 1; 	
}
