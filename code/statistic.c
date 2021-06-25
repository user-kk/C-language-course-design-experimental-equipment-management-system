#include"C语言课设头文件.h"
//本函数用于统计设备排序显示 
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
		 printf("请输入想要统计的设备购买时间\n");
		 scanf("%d %d %d",&c.year,&c.month,&c.day);
		 printf("1.比此时间购买的早 2.比此时间购买的晚 3.和此时间相等\n");
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
		 printf("请输入想要统计的设备种类\n");
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
		 printf("请输入想要统计的设备状态\n");
		 printf("1(正常使用) 2(修理中) 3(已报废) 4(待修理) 5(闲置) 6(丢失)");
		 d=scan(5);
		 if(d==1)strcpy(b,"正常使用\0");
		 if(d==2)strcpy(b,"修理中\0");
		 if(d==3)strcpy(b,"已报废\0");
		 if(d==4)strcpy(b,"待修理\0");
		 if(d==5)strcpy(b,"闲置\0");
		 if(d==6)strcpy(b,"丢失\0"); 
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
	    printf("请输入想要统计的修理次数\n");
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
		 printf("请输入想要统计的设备购买价格\n");
		 scanf("%f",&q);
		 printf("1.比此购买价格的少 2.比此购买价格的多 3.和此购买价格相等\n");
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
printf("此种条件下，设备共有%d个\n",count); 
system("pause");
}
