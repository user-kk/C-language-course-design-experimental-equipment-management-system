#include"C���Կ���ͷ�ļ�.h" 
//�����������ж����������Ƿ��ڷ�Χ�� 
int scan(int n)
{	
	int a=1,b;
	int i=1;
	while(a)
		{printf("��ѡ��\n"); 
     	scanf("%d",&b);
     	fflush(stdin);
     	if(b>=1&&b<=n)
     		{a=0;
			}
		else
			{printf("����������ڷ�Χ��,"); 
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
