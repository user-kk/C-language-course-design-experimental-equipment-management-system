#include"C语言课设头文件.h"
//本函数用于登记设备状态和设备备注，更新状态开始时间 
void device_cheak_in()
{	system("cls");
	char a[10],comment[50],d[7];  //a设备编号 
	int b,c,k=0;    //b,c为承接选项的 ,k表状态 
	float cost;
	char*g,*k1,*k2;
	struct Node*p1,*head;
	p1=head=from_data_to_list();
	printf("请输入想要对其操作的设备编号\n"); 
	scanf("%s",a);
	while(p1!=NULL)
		{
			if(strcmp(a,(p1->device).num)==0)
				{	k=1;
					printf("此时此设备的状态为：%s\n",(p1->device).statement);
					printf("%s状态开始时间为：%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
					printf("您想将此台设备登记为：1(正常使用) 2(修理中) 3(已报废) 4(待修理) 5(闲置) 6(丢失)\n");
					b=scan(6); 
					switch(b)
						{
							case 1:{strcpy((p1->device).statement,"正常使用\0");
									break;
									} 
							case 2:{strcpy((p1->device).statement,"修理中\0");
									printf("请输入此次修理的花费\n");
									scanf("%f",&cost);
									(p1->device).all_cost=(p1->device).all_cost+cost;
									break;} 
							case 3:{strcpy((p1->device).statement,"已报废\0");
									break;} 
							case 4:{strcpy((p1->device).statement,"待修理\0");
									break;} 
							case 5:{strcpy((p1->device).statement,"闲置\0");
									break;}	
							case 6:{strcpy((p1->device).statement,"丢失\0");
									break;
								   }	 	 
						}
					printf("你想将%s状态开始时间登记为：\n",(p1->device).statement);
					scanf("%d %d %d",&(p1->device).state_start_time.year,&(p1->device).state_start_time.month,&(p1->device).state_start_time.day);
				    printf("您是否想要对此次登记添加备注(1.是 2.否)\n");
					c=scan(2); 
					if(c==1)
						{printf("请输入您想为此次登记添加的备注\n");
						 scanf("%s",comment);
						 g=(p1->device).note;
						 strcpy(d,"\n无\n\0");
						 if(strcmp(d,g)==0)
						 	{k1=g;
						 	 k2=g+3;
						 	 *(k1+1)='\0';
						 	 strcat(comment,k2);
							 strcat(k1,comment);
							 }
						 else
						 	{strcat(g,comment);
						 	 strcat(g,"\n");
							}
						}
					printf("登记成功！\n"); 
					system("pause");
				}
			p1=p1->next;
		} 
	if(k==0)
		{printf("未找到该台设备,请重新登记");
		 system("pause");
		 system("cls");
		 device_cheak_in();
		}
	if(k==1)
		{from_link_to_file(head);
		}
return;			
} 
