#include"C���Կ���ͷ�ļ�.h" 
//���������������豸��Ϣ 
void correct_Node()
{
	system("cls");
	int e,i,u,j,comment_count=0,k=0,h=1;               //e��u,jΪ���� ��iָʾ�Ƿ���������count��ʾ�м�����ע 
	char a[10];
	char b[100];
	char c[25];
	printf("�����������޸ĵ��豸��ţ�");
	scanf("%s",a);       //a�豸��� 
	struct Node*p1,*head;
	p1=head=from_data_to_list();
	while(p1!=NULL)
		{
			if(strcmp(a,(p1->device).num)==0)
				{	k=1;
					char*k=(p1->device).note;
					while(*k!='\0')
						{if(*k=='\n')comment_count++;
						 k++;
						}
					printf("���豸����ϸ��ϢΪ��\n");
					printf("��ţ�%s\n",(p1->device).num);
					printf("���ࣺ%s\n",(p1->device).sizename);
					printf("����۸�%.2f\n",(p1->device).buy_prize);
					printf("����ʱ��: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
					printf("��ǰ״̬��%s\n",(p1->device).statement);
					printf("%s״̬��ʼʱ�䣺%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
					printf("���豸�ĵ�ǰȫ������Ϊ: %.2f\n",(p1->device).all_cost);
					printf("�����������%d\n",(p1->device).repair_time);
					printf("��ע��%d����%s",comment_count-1,(p1->device).note);
					printf("-----------------------------------------------------------------------------------------------------------\n");
					printf("��������Ҫ���ĵ�����\n");
					printf("1.���\n");
					printf("2.����\n");
					printf("3.����۸�\n");
					printf("4.����ʱ��\n");
					printf("5.��ǰ״̬\n");
					printf("6.%s״̬��ʼʱ��\n",(p1->device).statement);
					printf("7.���豸�ܻ���\n");
					printf("8.���������\n");
					printf("9.��ע\n");
					e=scan(9); 
					switch(e)
						{case 2:{printf("���뽫�����Ϊ��\n");
								 scanf("%s",b);
								 strcpy((p1->device).sizename,b);
								 printf("�޸ĳɹ���"); 
								 break;
								}
						 case 1:{while(h)
						 			{printf("���뽫�����Ϊ��\n");
						 			 scanf("%s",b);
						 			 i=find_same_name(b);
						 		 	if(i!=1)
						 		 		{
								 		 strcpy((p1->device).num,b);
									 	 printf("�޸ĳɹ���");
									 	 h=0;
									    }
								 	 else 
										 {
										 	printf("�������޸�,"); 
										 	system("pause");
											goto3y();
										    for(i=1;i<=3;i++)
			 									{
			 										printf("                                                   \n");
												}
											goto3y();
										 }
									 }
								  break;
							    }
						 case 3:{printf("���뽫�����Ϊ��\n");
						 		 scanf("%f",(p1->device).buy_prize);
						 		 printf("�޸ĳɹ���");
								 break;
						 		}
						 case 4:{printf("���뽫�����Ϊ��\n");
						 	 	 scanf("%d %d %d",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
							     printf("�޸ĳɹ���");
								 break;
						 		}
						 case 5:{printf("���뽫�����Ϊ��\n");
						 		 printf("1(����ʹ��) 2(������) 3(�ѱ���) 4(������) 5(����) 6(��ʧ)\n");
						 		 j=scan(6);
						 		 if(j==1)strcpy(c,"����ʹ��\0");
		 						 if(j==2)strcpy(c,"������\0");
								 if(j==3)strcpy(c,"�ѱ���\0");
								 if(j==4)strcpy(c,"������\0");
								 if(j==5)strcpy(c,"����\0");
								 if(j==6)strcpy(c,"��ʧ\0");
								 strcpy((p1->device).statement,c);
								 printf("�޸ĳɹ���");
								break;
						 		}
						 case 7:{printf("���뽫�����Ϊ��\n");
						 		 scanf("%f",(p1->device).all_cost);
						  		 printf("�޸ĳɹ���");
								 break;
						 		}
						 case 8:{printf("���뽫�����Ϊ��\n");
						 		 scanf("%d",(p1->device).repair_time);
						 		 printf("�޸ĳɹ���");
							     break;
						 		}
						 case 9:{printf("�������������������ע\n");
						 		 u=scan(comment_count-1); 
						 		 char*k1,*k2; 
						 		 int another_count=0;
						 		 char*g=(p1->device).note;
								 while(*g!='\0')
								 	{ 
									 if(*g=='\n')
								 		{another_count++;
								 		 if(another_count==u)
								 		 	{k1=g;
										    }
										 if(another_count==u+1)
										 	{k2=g;
											}
										 }
										g++;
								 	}
								 *(k1+1)='\0';
								 printf("���뽫�����Ϊ��\n");
								 scanf("%s",b);
								 strcat(b,k2);
								 strcat(k1,b);
								 printf("�޸ĳɹ���");	  
								 break;
						 		}
						 	
						}
				 system("pause"); 
				}
			p1=p1->next;
			
		}
	if(k==0)
		{printf("δ�ҵ���̨�豸,");
		 system("pause");
		 system("cls");
		 correct_Node();
		}
	if(k==1)
		{from_link_to_file(head);
		}
	return;	
}
