#include"C语言课设头文件.h" 
//本函数用于修正设备信息 
void correct_Node()
{
	system("cls");
	int e,i,u,j,comment_count=0,k=0,h=1;               //e，u,j为接收 ，i指示是否有重名，count显示有几条备注 
	char a[10];
	char b[100];
	char c[25];
	printf("请输入你想修改的设备编号：");
	scanf("%s",a);       //a设备编号 
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
					printf("该设备的详细信息为：\n");
					printf("编号：%s\n",(p1->device).num);
					printf("种类：%s\n",(p1->device).sizename);
					printf("购买价格：%.2f\n",(p1->device).buy_prize);
					printf("购买时间: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
					printf("当前状态：%s\n",(p1->device).statement);
					printf("%s状态开始时间：%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
					printf("此设备的当前全部花费为: %.2f\n",(p1->device).all_cost);
					printf("已修理次数：%d\n",(p1->device).repair_time);
					printf("备注共%d条：%s",comment_count-1,(p1->device).note);
					printf("-----------------------------------------------------------------------------------------------------------\n");
					printf("请输入想要更改的内容\n");
					printf("1.编号\n");
					printf("2.种类\n");
					printf("3.购买价格\n");
					printf("4.购买时间\n");
					printf("5.当前状态\n");
					printf("6.%s状态开始时间\n",(p1->device).statement);
					printf("7.该设备总花费\n");
					printf("8.已修理次数\n");
					printf("9.备注\n");
					e=scan(9); 
					switch(e)
						{case 2:{printf("您想将其更改为：\n");
								 scanf("%s",b);
								 strcpy((p1->device).sizename,b);
								 printf("修改成功！"); 
								 break;
								}
						 case 1:{while(h)
						 			{printf("您想将其更改为：\n");
						 			 scanf("%s",b);
						 			 i=find_same_name(b);
						 		 	if(i!=1)
						 		 		{
								 		 strcpy((p1->device).num,b);
									 	 printf("修改成功！");
									 	 h=0;
									    }
								 	 else 
										 {
										 	printf("请重新修改,"); 
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
						 case 3:{printf("您想将其更改为：\n");
						 		 scanf("%f",(p1->device).buy_prize);
						 		 printf("修改成功！");
								 break;
						 		}
						 case 4:{printf("您想将其更改为：\n");
						 	 	 scanf("%d %d %d",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
							     printf("修改成功！");
								 break;
						 		}
						 case 5:{printf("您想将其更改为：\n");
						 		 printf("1(正常使用) 2(修理中) 3(已报废) 4(待修理) 5(闲置) 6(丢失)\n");
						 		 j=scan(6);
						 		 if(j==1)strcpy(c,"正常使用\0");
		 						 if(j==2)strcpy(c,"修理中\0");
								 if(j==3)strcpy(c,"已报废\0");
								 if(j==4)strcpy(c,"待修理\0");
								 if(j==5)strcpy(c,"闲置\0");
								 if(j==6)strcpy(c,"丢失\0");
								 strcpy((p1->device).statement,c);
								 printf("修改成功！");
								break;
						 		}
						 case 7:{printf("您想将其更改为：\n");
						 		 scanf("%f",(p1->device).all_cost);
						  		 printf("修改成功！");
								 break;
						 		}
						 case 8:{printf("您想将其更改为：\n");
						 		 scanf("%d",(p1->device).repair_time);
						 		 printf("修改成功！");
							     break;
						 		}
						 case 9:{printf("请输入您想更改哪条备注\n");
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
								 printf("您想将其更改为：\n");
								 scanf("%s",b);
								 strcat(b,k2);
								 strcat(k1,b);
								 printf("修改成功！");	  
								 break;
						 		}
						 	
						}
				 system("pause"); 
				}
			p1=p1->next;
			
		}
	if(k==0)
		{printf("未找到该台设备,");
		 system("pause");
		 system("cls");
		 correct_Node();
		}
	if(k==1)
		{from_link_to_file(head);
		}
	return;	
}
