#include"C���Կ���ͷ�ļ�.h"
//���������������¼���� 
int log_in()
{
	int n=1;
	char name1[9],password1[9];
	char name2[9],password2[9];
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t   ��ӭʹ��ʵ���豸����ϵͳ");
	printf("\n\n\n\n");
	printf("\t\t\t\t***********************************************\n");
	printf("\t\t\t\t**                                           **\n");                                    
    printf("\t\t\t\t**       �������û�����ѧ�ţ�:               **\n");
    printf("\t\t\t\t**                                           **\n");
    printf("\t\t\t\t**       ���������� :                        **\n");
    printf("\t\t\t\t**                                           **\n");
    printf("\t\t\t\t***********************************************\n");
 	gotoxy(65,13);   
	scanf("%s",name1);
    gotoxy(60,15);
    scanf("%s",password1);
    FILE *p;
    p=fopen("namecode.dat","r+");
    if(p==NULL)
    	printf("�򲻿�"); 
    fgets(name2,9,p);
    fgets(password2,9,p);
    while(!feof(p))
    {
    	if((strcmp(name1,name2)==0)&&(strcmp(password1,password2)==0))
    		{gotoxy(90,17); 
			 printf("��½�ɹ�\n");
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
    	printf("�û������������\n");
    	gotoxy(90,17);
    	printf("��������������ϵ����Ա");
    	gotoxy(90,19);
	 	system("pause");
	    system("cls");
      	return 0;
	
}
