#include"C���Կ���ͷ�ļ�.h"
//�����������޸����� 
int change_password_2(int n)
{ 
	int i;
	char new_password1[9],new_password2[9];
	printf("������������(��λ)");
	scanf("%s",new_password1);
	printf("���ٴ�����������");
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
		   	 printf("�޸ĳɹ�\n");
		 	 system("pause");
		 	 return 0;
			}
		 else
		 	{printf("�������λ����\n"); 
		 	 system("pause");
			 return 1;
			}
		 
		}
	else printf("���벻һ��\n");
	system("pause");
	return 1;
	
 } 
int change_password_1(int n)
{
 int a=1;
 int count=1;
 char entered_password[9],password[9],new_password1[9],new_password2[9];
 printf("�����뵱ǰ���� ");
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
		 printf("�������\n");
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

