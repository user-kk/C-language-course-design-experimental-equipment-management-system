#include"C���Կ���ͷ�ļ�.h"
//����������ʵ�ַ�ҳ�Լ�����豸��Ϣ 
void print(int n,struct Node*p1)
{
	system("cls");
	int n1=0,n2=0;
	int a,b=1,i,d=1;                             //aΪ���գ�bΪ��ǰҳ����iΪ����ո�������dΪ״̬ 
	struct Node*p2,*head;
	head=p1;
	while(p1!=NULL)
		{n1++;
		 p1=p1->next;
		}
	n2=n1/n;
	int remainder=n1%n;
	if(remainder!=0)
		n2++;
	p1=head;
	if(n2==1||n2==0)
		{	
			system("cls");
			while(p1!=NULL)
				{sub_print(p1);
				 p1=p1->next;
				}
			printf("                                                                                ��ǰΪ��1ҳ/��1ҳ/��%d���豸\n",n1);
			printf("1.��һҳ 2.��һҳ 3.�˳�\n");
			while(1)
				{a=scan(3);
				 switch(a)
					{case 1:{printf("��ǰ���ǵ�һҳ");
						  	 system("pause");
			 				 goto3y();
			 				 for(i=1;i<=3;i++)
			 					{
			 						printf("                                                   \n");
								}
							 goto3y();
							 break;
							}
					case 2:{printf("��ǰ�������һҳ");
							system("pause");
			 				goto3y();
			 				for(i=1;i<=3;i++)
			 					{
			 						printf("                                                   \n");
								}
							goto3y();
							break;
						   }
					case 3:return; 
					}
				} 
		}
	else
		{while(1)
			{p2=p1;
			 d=1;
			 for(i=1;i<=n;i++)
				{if(p1!=NULL)
					{sub_print(p1);
				 	 p1=p1->next;
					}
				}
			 printf("                                                                                ��ǰΪ��%dҳ/��%dҳ/��%d���豸\n",b,n2,n1);
			 printf("1.��һҳ 2.��һҳ 3.�˳�\n");
			 while(d) 
			 	{a=scan(3);
			 	 switch(a)
			 		{case 1:{if(b<=1)
			 					{printf("��ǰ���ǵ�һҳ");
						  	 	 system("pause");
			 				 	 goto3y();
			 				 	 for(i=1;i<=3;i++)
			 						{
			 							printf("                                                   \n");
									}
							 	 goto3y();
								}
							 else
							 	{b--;
							 	 d=0;
							 	 p1=p2;
							 	 for(i=1;i<=n;i++)
									{
									 p1=p1->last;
									}
								 system("cls");
								}
							  break;
				       		 }
				    case 2:{if(b>=n2)
				    			{printf("��ǰ�������һҳ");
								 system("pause");
			 					 goto3y();
			 					 for(i=1;i<=3;i++)
			 						{
			 							printf("                                                   \n");
									}
								 goto3y();
								}
							 else
							 	{b++;
							 	 d=0;
							 	 p1=p2;
							 	 for(i=1;i<=n;i++)
									{
									 p1=p1->next;
									}
								 system("cls");
								}
							break;
					       }
					case 3:return;
				 }
				}
			}
		} 
}
