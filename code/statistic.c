#include"C���Կ���ͷ�ļ�.h"
//����������ͳ���豸������ʾ 
void statistic(char*a)
{system("cls");
 struct Node*p1,*head1;
 head1=p1=from_data_to_list();
 struct Node*p2,*p3,*head2;
 char b[25];
 float q; 
 int d,e,h,count=0;
 struct date c;
 int flag=0;
 while(*a!='\0')
	{head2=p3=NULL;
	p2=(struct Node*)malloc(sizeof(struct Node)); 
	 if(*a=='1')
	 	{p1=head1;
		 printf("��������Ҫͳ�Ƶ��豸����ʱ��\n");
		 scanf("%d %d %d",&c.year,&c.month,&c.day);
		 printf("1.�ȴ�ʱ�乺����� 2.�ȴ�ʱ�乺����� 3.�ʹ�ʱ�����\n");
		 d=scan(3);
		 if(d==1)
		 	{while(p1!=NULL)
		 		{if(compare_date(c,(p1->device).buy_time)<0)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}
			}
		 if(d==2)
		 	{while(p1!=NULL)
		 		{if(compare_date(c,(p1->device).buy_time)>0)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}
			 }
		 if(d==3)
		 	{while(p1!=NULL)
		 		{if(compare_date(c,(p1->device).buy_time)==0)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}
			 }
			
		 }
	if(*a=='2')
		{p1=head1;
		 printf("��������Ҫͳ�Ƶ��豸����\n");
		 scanf("%s",b);
		 while(p1!=NULL)
		 	{if(strcmp(b,(p1->device).sizename)==0)
		 		{if(head2==NULL)
		 			{p2->device=p1->device;
		 			 head2=p2;
		 			 p3=p2;
		 			 p2=(struct Node*)malloc(sizeof(struct Node)); 
					}
				 else
				 	{p2->device=p1->device;
				 	 p3->next=p2;
				 	 p3=p2;
				 	 p2=(struct Node*)malloc(sizeof(struct Node)); 
					}
				}
			 p1=p1->next;
			} 
		}
	if(*a=='3')
		{p1=head1;
		 printf("��������Ҫͳ�Ƶ��豸״̬\n");
		 printf("1(����ʹ��) 2(������) 3(�ѱ���) 4(������) 5(����) 6(��ʧ)");
		 d=scan(5);
		 if(d==1)strcpy(b,"����ʹ��\0");
		 if(d==2)strcpy(b,"������\0");
		 if(d==3)strcpy(b,"�ѱ���\0");
		 if(d==4)strcpy(b,"������\0");
		 if(d==5)strcpy(b,"����\0");
		 if(d==6)strcpy(b,"��ʧ\0"); 
		 while(p1!=NULL)
		 		{if(strcmp(b,(p1->device).statement)==0)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}	
			
		}
	if(*a=='4')
	   {p1=head1;
	    printf("��������Ҫͳ�Ƶ��������\n");
	    scanf("%d",&e);
	    while(p1!=NULL)
		 		{if(e==(p1->device).repair_time)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				} 
	   }
	if(*a=='5')
		{
	 	 p1=head1;
		 printf("��������Ҫͳ�Ƶ��豸����۸�\n");
		 scanf("%f",&q);
		 printf("1.�ȴ˹���۸���� 2.�ȴ˹���۸�Ķ� 3.�ʹ˹���۸����\n");
		 d=scan(3);
		 if(d==1)
		 	{while(p1!=NULL)
		 		{if((p1->device).buy_prize<q);
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}
			}
		 if(d==2)
		 	{while(p1!=NULL)
		 		{if((p1->device).buy_prize>q)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}
			 }
		 if(d==3)
		 	{while(p1!=NULL)
		 		{if((p1->device).buy_prize==q)
		 			{if(head2==NULL)
		 				{p2->device=p1->device;
		 			 	head2=p2;
		 			 	p3=p2;
		 			 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
				 	 else
				 		{p2->device=p1->device;
				 	 	p3->next=p2;
				 	 	p3=p2;
				 	 	p2=(struct Node*)malloc(sizeof(struct Node)); 
						}
					}
			 	p1=p1->next;
				}
			 }
		} 
	free(p2);
	if(p3!=NULL)p3->next=NULL;
	head1=head2;
	a++; 	
	}
p1=head1;
while(p1!=NULL)
	{count++;
	 p1=p1->next;
	}
printf("���������£��豸����%d��\n",count); 
system("pause");
}
