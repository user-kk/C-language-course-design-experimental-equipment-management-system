#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>  
#include"C���Կ���ͷ�ļ�.h"
//���������ڹ���Աע�������û��˺� 
void delete_name()
{system("cls");
 FILE*p1,*p2;int c;
 p1=fopen("namecode.dat","r+");
 p2=fopen("namecode_temporary.dat","w");
 if(p1==NULL||p2==NULL)
 	{printf("ʧ��");
 	 system("pause");
 	 return;
	}
 char name[9],name_temporary[9],password_temporary[9];
 printf("����������ɾ�����û�");
 scanf("%s",name);
 printf("����ϸ�˶��û���Ϣ���Ƿ����ɾ��(1:ȷ��;2:��ȷ��)");
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
 	 printf("ɾ���ɹ�"); 
 	 system("pause");
 	}
 else return;	
}
