#include"C���Կ���ͷ�ļ�.h"
//���������������ѯ����˵� 
int inquire_menu()
{system("cls");
 int a,i=6;                              //iΪ���y������λ�� ,aΪ�˵�ѡ��
 char b[6]; 
 gotoxy(39,5);
 printf("* * * * * * * * * * * *��ѯ  ����* * * * * * * * * *");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.���豸��Ų�ѯ");
 gotoxy(56,13);
 printf("2.���豸����ʱ���ѯ"); 
 gotoxy(56,15);
 printf("3.���豸�����ѯ");
 gotoxy(56,17);
 printf("4.����ǰ״̬��ѯ"); 
 gotoxy(56,19);
 printf("5.�����������ѯ");
 gotoxy(56,21);
 printf("6.��������ѯ");
 gotoxy(56,23);
 printf("7.������һ��");
 gotoxy(56,25);
 printf("�����룺"); 
 scanf("%d",&a);
 switch(a)
 		{case 1:{strcpy(b,"1\0");
		 		 inquire(b);
 				 break;
		 		}
 		 case 2:{strcpy(b,"2\0");
		  		 inquire(b);
				 break;
	 			}
	 	 case 3:{strcpy(b,"3\0");
		  		 inquire(b);
				 break;
		  		}
	 	 case 4:{strcpy(b,"4\0");
		  		 inquire(b);
				 break;
		  		}
		 case 5:{strcpy(b,"5\0");
		  		 inquire(b);
				 break;
		 		}
		 case 6:{system("cls");
		 		 printf("1.���豸��Ų�ѯ 2.���豸����ʱ���ѯ\n");
				 printf("3.���豸�����ѯ 4.����ǰ״̬��ѯ\n");
				 printf("5.�����������ѯ 6.���豸����۸��ѯ\n"); 
		 		 printf("������������������Ҫ��ѯ��ǰ״̬Ϊ����������1�ε��豸����45��\n");
				 scanf("%s",b);
				 inquire(b);
				 break;
		 		}
		 case 7:return 0; 
		 default:{printf("������1~7��Χ�ڵ���,");
			 	 system("pause"); 
			 	 return 1;
			 	 break;
			 	 } 
		}
	return 1;
}
