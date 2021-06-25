#include"C语言课设头文件.h" 
//本函数用于判断输入数字是否在范围内 
int scan(int n)
{	
	int a=1,b;
	int i=1;
	while(a)
		{printf("请选择：\n"); 
     	scanf("%d",&b);
     	fflush(stdin);
     	if(b>=1&&b<=n)
     		{a=0;
			}
		else
			{printf("输入的数不在范围内,"); 
			 system("pause");
			 goto3y();
			 for(i=1;i<=3;i++)
			 	{
			 		printf("                                                   \n");
				}
			goto3y();
			}
		}
	return b;		
}
