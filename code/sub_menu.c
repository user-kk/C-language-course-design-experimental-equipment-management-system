#include"C���Կ���ͷ�ļ�.h"
//��������������豸��ѯ��ͳ�Ʋ˵� 
int sub_menu()
{system("cls");
 int a,i=6,c,b=1,d=1; //iΪ���y������λ�� ,aΪ�˵�ѡ��,cΪÿҳ����豸�ĸ���,b,dΪ״̬ 
 struct Node*p1;                          
 gotoxy(39,5);
 printf("* * * * * * * * * * * *��ѯ��ͳ��* * * * * * * * * *");
 for(;i<=27;i++)
 	{gotoxy(39,i);
     printf("*                                                  *");
   	} 
 gotoxy(39,28);
 printf("* * * * * * * * * * * * * * * ** * * * * * * * * * *");
 gotoxy(56,11);
 printf("1.�����ǰȫ���豸");
 gotoxy(56,14);
 printf("2.�豸����"); 
 gotoxy(56,17);
 printf("3.�豸��ѯ");
 gotoxy(56,20);
 printf("4.�豸ͳ��");
 gotoxy(56,23); 
 printf("5.������һ��"); 
 gotoxy(56,26);
 printf("�����룺"); 
 scanf("%d",&a);
 switch(a)
 		{case 1:{
		 		 FILE*p;
		 		 p=fopen("number.dat","r");
		 		 fscanf(p,"%d",&c);
				 fclose(p);
				 p1=from_data_to_list();
				 print(c,p1); 
				 release_node(p1);
 				 break;
		 		}
 		 case 2:{sort(); 
				 break;
	 			}
	 	 case 3:{while(b)
		  			{b=inquire_menu();
			  	    }
				 break;
		  		}
		 case 4:{while(d)
		 		 	{d=statistic_menu();
					}
				break;
		 		} 
		 case 5:return 0; 
		 default:{printf("������1~5��Χ�ڵ���,");
			 	 system("pause"); 
			 	 return 1;
			 	 break;
			 	 } 
		}
	return 1;
}
