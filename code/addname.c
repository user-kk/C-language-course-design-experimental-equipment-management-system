#include"C语言课设头文件.h" 
//本函数用于新建用户 
int addname()
{
 system("cls");
 char newname[9],newpassword[9];
 int c,i,j;
 printf("请输入新建用户名(八位学号)   ");
 scanf("%s",newname);
 i=strlen(newname);
 if(i!=8)
 	{
	 printf("用户名位数不正确\n"); 
	 system("pause");
	 system("cls");
	 addname();
	
	}
 if(i==8)
 	{
	 printf("请输入密码(八位)  ") ;
	 scanf("%s",newpassword);
	 j=strlen(newpassword);
	 if(j!=8)
	 	{
	     printf("密码位数不正确\n"); 
	     system("pause");
	     system("cls");
	     addname();
	    }
	 if(j==8) 
		{
	     printf("请仔细核对用户名和密码，是否继续创建(1:确认;2:不确认)");
	     scanf("%d",&c); 
	     if(c==1)
	     	 {
	      	  printf("创建成功\n");
	      	  FILE *p;
          	  p=fopen("namecode.dat","ab");
	      	  fputs(newname,p);
	      	  fputs(newpassword,p);
	      	  fclose(p);
	      	  return 0;	 
	    	 } 
	    else return 0;
        }
    }
	 return 0;
}
