#include"C���Կ���ͷ�ļ�.h"
//���������ڹ���Ա�޸������û������� 
int change_other_password()
{int i;
 system("cls");
 printf("�����������޸���������û���");
 char name[9],password_file[9],name_file[9],password1[9],password2[9]; 
 scanf("%s",name);
 FILE*p;
 p=fopen("namecode.dat","r+");
	if(p==NULL)
    	printf("�򲻿�"); 
 fgets(name_file,9,p);
 fgets(password_file,9,p);
 while(!feof(p))
	{
    	if(strcmp(name,name_file)==0)
    		{printf("������������");
    		 scanf("%s",password1);
    		 printf("���ٴ�����������");
			 scanf("%s",password2);
			 if(strcmp(password1,password2)==0)
			 	{i=strlen(password1);
			 	 if(i==8)
			 	 	{
					 fseek(p,-8,1);
			 	 	 fputs(password1,p);
			 	 	 printf("�޸ĳɹ�\n");
				 	 fclose(p); 
					 system("pause");
				 	 return 0;
			    	}
			     else
			     	{printf("�������λ����\n"); 
		 	 		 system("pause");
			 		 return 1;
					}
				}
			 else
			 { 
			  printf("�������벻һ�£��������޸�\n");
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
 printf("���û�������,��˶�׼ȷ������޸�\n");
 fclose(p); 
 system("pause");
 system("cls");
 return 1; 	
}
