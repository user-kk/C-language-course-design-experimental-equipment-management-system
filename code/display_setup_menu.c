#include"C���Կ���ͷ�ļ�.h" 
//���������������ʾ���ò˵� 
int display_setup_menu()
{system("cls");
 int a,i=6;                              //iΪ���y������λ�� ,aΪ�˵�ѡ��
 gotoxy(39,5);
 printf("* * * * * * * * * * * *��ʾ����* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.���Ľ�����ɫ");
 gotoxy(56,17);
 printf("2.����ÿҳ����豸�ĸ���");
 gotoxy(56,23);
 printf("3.������һ��");
 gotoxy(56,27);
 printf("�����룺"); 
 scanf("%d",&a);
 switch(a)
 	{case 1:{setcolor();
 			 break;
	 		}
 	 case 2:{setnumber();
 	 
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
