#include"C���Կ���ͷ�ļ�.h" 
//�����������½��û� 
int addname()
{
 system("cls");
 char newname[9],newpassword[9];
 int c,i,j;
 printf("�������½��û���(��λѧ��)   ");
 scanf("%s",newname);
 i=strlen(newname);
 if(i!=8)
 	{
	 printf("�û���λ������ȷ\n"); 
	 system("pause");
	 system("cls");
	 addname();
	
	}
 if(i==8)
 	{
	 printf("����������(��λ)  ") ;
	 scanf("%s",newpassword);
	 j=strlen(newpassword);
	 if(j!=8)
	 	{
	     printf("����λ������ȷ\n"); 
	     system("pause");
	     system("cls");
	     addname();
	    }
	 if(j==8) 
		{
	     printf("����ϸ�˶��û��������룬�Ƿ��������(1:ȷ��;2:��ȷ��)");
	     scanf("%d",&c); 
	     if(c==1)
	     	 {
	      	  printf("�����ɹ�\n");
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
