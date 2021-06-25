#include"C语言课设头文件.h"
//本函数用于输出登录界面 
int log_in()
{
	int n=1;
	char name1[9],password1[9];
	char name2[9],password2[9];
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t   欢迎使用实验设备管理系统");
	printf("\n\n\n\n");
	printf("\t\t\t\t***********************************************\n");
	printf("\t\t\t\t**                                           **\n");                                    
    printf("\t\t\t\t**       请输入用户名（学号）:               **\n");
    printf("\t\t\t\t**                                           **\n");
    printf("\t\t\t\t**       请输入密码 :                        **\n");
    printf("\t\t\t\t**                                           **\n");
    printf("\t\t\t\t***********************************************\n");
 	gotoxy(65,13);   
	scanf("%s",name1);
    gotoxy(60,15);
    scanf("%s",password1);
    FILE *p;
    p=fopen("namecode.dat","r+");
    if(p==NULL)
    	printf("打不开"); 
    fgets(name2,9,p);
    fgets(password2,9,p);
    while(!feof(p))
    {
    	if((strcmp(name1,name2)==0)&&(strcmp(password1,password2)==0))
    		{gotoxy(90,17); 
			 printf("登陆成功\n");
			 fclose(p); 
			 gotoxy(90,19);
    		 system("pause");
			 system("cls");
    		 return n;
       		 }
    	else
	 		{
			 fgets(name2,9,p);
    		 fgets(password2,9,p);
    		}
    	n++;
	}
	    gotoxy(90,15);
    	printf("用户名或密码错误\n");
    	gotoxy(90,17);
    	printf("若忘记密码请联系管理员");
    	gotoxy(90,19);
	 	system("pause");
	    system("cls");
      	return 0;
	
}
