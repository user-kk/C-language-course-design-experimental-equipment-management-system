#include"C���Կ���ͷ�ļ�.h" 
//�������������ѡ��˵� 
int option_menu(int n)
{system("cls");
 int a,i=6,b=1,c=1;                              //iΪ���y������λ�� ,aΪ�˵�ѡ��,bΪ��������״̬ 
 gotoxy(39,5);
 printf("* * * * * * * * * * * *ѡ��˵�* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.��ʾ����");
 gotoxy(56,17);
 printf("2.�˻�����");
 gotoxy(56,23);
 printf("3.������һ��");
 gotoxy(56,27);
 printf("�����룺"); 
 scanf("%d",&a);
 switch(a)
 	{case 1:{while(c)
	  		 {c=display_setup_menu();
	  		 }
 			 break;
	 		}
 	 case 2:{while(b)
	  		 {b=account_settings_menu(n);
	  		 }
			 break;
	 		}
	 case 3:return 0;
	 default:{printf("������1~3��Χ�ڵ���,");
			 system("pause"); 
			 return 1;
			 break;
			 } 
	}
 return 1;
}
