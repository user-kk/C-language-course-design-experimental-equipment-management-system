#include"C���Կ���ͷ�ļ�.h"
//�������������ͳ���豸��ʾ���� 
int statistic_menu()
{system("cls");
 int a,i=6,c,b=1; //iΪ���y������λ�� ,aΪ�˵�ѡ��,cΪÿҳ����豸�ĸ���,bΪ״̬ 
 char h[6];
 struct Node*p1;                          
 gotoxy(39,5);
 printf("* * * * * * * * * * * *ͳ��  ����* * * * * * * * * *");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.���豸����ͳ��");
 gotoxy(56,13);
 printf("2.���������ͳ��");
 gotoxy(56,15);
 printf("3.����������ͳ��");
 gotoxy(56,17);
 printf("4.���豸״̬ͳ��");
 gotoxy(56,19); 
 printf("5.���豸����۸�ͳ��"); 
 gotoxy(56,21);
 printf("6.���ͳ��");
 gotoxy(56,23);
 printf("7.������һ��");
 gotoxy(56,25); 
 printf("�����룺"); 
 scanf("%d",&a);
 switch(a)
 		{case 1:{statistic_sizename();
 				 break;
		 		}
 		 case 2:{strcpy(h,"4\0");
 		 		 statistic(h);
				 break;
	 			}
	 	 case 3:{strcpy(h,"1\0");
 		 		 statistic(h);
				 break;
		  		}
		 case 4:{strcpy(h,"3\0");
 		 		 statistic(h);
				break;
		 		}
		 case 5:{strcpy(h,"5\0");
 		 		 statistic(h);
				 break;
		 		} 
		 case 6:{system("cls");
		 		 printf("1.���豸����ʱ��ͳ�� 2.���豸����ͳ��\n");
				 printf("3.����ǰ״̬ͳ�� 4.���������ͳ��\n");
				 printf("5.������۸�ͳ��\n"); 
		 		 printf("������������������Ҫͳ�Ƶ�ǰ״̬Ϊ����������1�ε��豸����34��\n");
				 scanf("%s",h);
				 statistic(h);
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
