#include"C���Կ���ͷ�ļ�.h"
//������������ʾ�����Լ���������Ϣ 
void help()
	{system("cls");
	 FILE*p;
	 p=fopen("����.txt","r");
	 char a;
	 while(!feof(p))
	 	{a=fgetc(p);
	 	  if(a=='\n')
	 	  	Sleep(300);
	 	Sleep(30);
		   printf("%c",a);
		}
	 system("pause");
	 system("cls");
     printf("�����ˣ���� ��Զ\n����ʱ�䣺2021.3.9\n�汾:1.0\n");
     system("pause");
	  
	} 
