#include"C���Կ���ͷ�ļ�.h" 
//��������������˻����ò˵� 
int account_settings_menu(int n)     
{system("cls");
 int a,i=6,b=1;                              //iΪ���y������λ�� ,aΪ�˵�ѡ��,bΪ��������״̬ 
 gotoxy(39,5);
 printf("* * * * * * * * * * * *�˻�����* * * * * * * * * * * ");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.�޸�����");
 gotoxy(56,14);
 printf("2.�½��˻�"); 
 gotoxy(56,17);
 printf("3.ɾ���˻�");
 gotoxy(56,20);
 printf("4.�޸������˻�����"); 
 gotoxy(56,23);
 printf("5.������һ��");
 gotoxy(56,26); 
 printf("�����룺"); 
 scanf("%d",&a);
 if(n==1)
	{ switch(a)
 		{case 1:{change_password(n);
 				 break;
		 		}
 		 case 2:{addname();
				 break;
	 			}
	 	 case 3:{delete_name();
				 break;
		  		}
	 	 case 4:{change_other_password();
				 break;
		  		}
		 case 5:return 0; 
		 default:{printf("������1~5��Χ�ڵ���,");
			 	 system("pause"); 
			 	 return 1;
			 	 break;
			 	 } 
	 
		}
	}
 else
 	{switch(a)
 		{case 1:{change_password(n);
 				 break;
		 		}
		 case 2:
		 case 3:
		 case 4:{gotoxy(95,20);
		 		 printf("��û��Ȩ�޽��д˲���"); 
		 		 gotoxy(95,22);
		 		 system("pause");
				 break;
		 		}
		 case 5:return 0;
		 default:{printf("������1~5��Χ�ڵ���,");
			      system("pause"); 
			      return 1;
			      break;
			     }
		}
	 }
	return 1;
}
