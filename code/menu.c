#include"C���Կ���ͷ�ļ�.h"
//����������������˵� 
int menu(int n)
{  int a,b=1,c=1,d=1,i=6;                                //aΪ�˵�ѡ�� ,iΪ���y������λ�� ,bΪ��������״̬ 
   system("cls");
   gotoxy(39,5);
   printf("* * * * * * * * * * * *���˵�* * * * * * * * * * * * ");
   for(;i<=27;i++)
   	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
   gotoxy(39,28);
   printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *"); 
   gotoxy(56,9);
   printf("1.�����豸");
   gotoxy(56,11);
   printf("2.�޸��豸");
   gotoxy(56,13);
   printf("3.ɾ���豸");
   gotoxy(56,15);
   printf("4.��ѯ��ͳ��");
   gotoxy(56,17);
   printf("5.ʹ�á�������ʧ�����ϵǼ�");
   gotoxy(56,19);
   printf("6.�����뻹ԭ");
   gotoxy(56,21);
   printf("7.����");
   gotoxy(56,23);
   printf("8.����");
   gotoxy(56,25);
   printf("9.�˳�");
   gotoxy(56,27);
   printf("�����룺"); 
   scanf("%d",&a); 
   switch(a)
   	  {case 8:{
    		   help();
			   break;
		 	  }
	   case 9:{system("cls"); 
   			   printf("��лʹ�ã�\n");
   			   Sleep(1000); 
   			   exit (0);
			   break;
	   		  }
	   	case 7:{while(c)
		   			{
					 c=option_menu(n); 
				    }
				break;
			   }
		case 1:{addnode();
				break;
				}
		case 2:{correct_Node();
				break;
				}
		case 3:{delete_device();
				break;
			   }
		case 4:{while(d)
		   			{
					 d=sub_menu(); 
				    }
				break;
			   }
		case 5:{device_cheak_in();
				break;
			   }
		case 6:{while(b)
		   			{
					 b=backup_menu(); 
				    }
				break;
			   }
		default:{printf("������1~9��Χ�ڵ���,");
				 system("pause"); 
				 return 0;
				 break;
				} 
	  }
}
   
   
