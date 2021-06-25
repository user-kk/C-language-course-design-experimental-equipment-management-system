#include"C语言课设头文件.h"
//本函数用于删除设备信息 
void delete_device()
{
	system("cls");
	struct Node*p1,*p2,*head;
	char a[10];
	int b,count=0;
	int flag=0;
	head=p2=p1=from_data_to_list();
	printf("请输入想要删除的设备的编号：\n");
	scanf("%s",a);
	if(strcmp((p1->device).num,a)==0)
		{
			flag=1; 
			printf("该设备的详细信息为：\n");
			printf("编号：%s\n",(p1->device).num);
			printf("种类：%s\n",(p1->device).sizename);
			printf("购买价格：%.2f\n",(p1->device).buy_prize);
			printf("购买时间: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
			printf("当前状态：%s\n",(p1->device).statement);
			printf("%s状态开始时间：%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
			printf("该设备总花费: %.2f\n",(p1->device).all_cost);
			printf("已修理次数：%d\n",(p1->device).repair_time);
			printf("备注共%d条：%s",count,(p1->device).note);
			printf("-----------------------------------------------------------------------------------------------------------\n");
			printf("是否删除设备信息：       1(是) 2(否)\n");
			b=scan(2);
			switch(b)
				{
					case 1:	{head=p1->next;printf("设备信息已删除\n");system("pause");
							 break;
							}
					default:      return;
				} 
			p2=p1;
			p1=p1->next;
		}	
		
	while(p1!=NULL)
		{
			if(strcmp(a,(p1->device).num)==0)
				{	
					flag=1;
					printf("该设备的详细信息为：\n");
					printf("编号：%s\n",(p1->device).num);
					printf("种类：%s\n",(p1->device).sizename);
					printf("购买价格：%.2f\n",(p1->device).buy_prize);
					printf("购买时间: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
					printf("当前状态：%s\n",(p1->device).statement);
					printf("%s状态开始时间：%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
					printf("该设备总花费: %.2f\n",(p1->device).all_cost);
					printf("已修理次数：%d\n",(p1->device).repair_time);
					printf("备注共%d条：%s",count,(p1->device).note);
					printf("-----------------------------------------------------------------------------------------------------------\n");
					printf("是否删除设备信息：       1(是) 2(否)\n");
					b=scan(2);
					switch(b)
						{
							case 1:	{p2->next=p1->next;
									printf("设备信息已删除\n");
									system("pause");
									break;
									}
							default: return;
				
						} 
				}
			p2=p1;
			p1=p1->next;
			
		}
	if(flag==0)
		{printf("未找到该设备,请重新核对设备编号\n");
		 system("pause");
		 return; 
		}
	struct Node*p3;
 	p3=head;
	int count1=0; 
 	while(p3!=NULL)
	{	
	 count1++;
	 p3=p3->next; 
	}
    p3=head; 
    int u=1;
	FILE*p; 
	p=fopen("data.txt","w");
   	while(u<=count1)
	   	{
		 fwrite(p3,sizeof(struct Node),1,p);
		 p3=p3->next;
	 	 u++;
		}
	fclose(p);	
}

