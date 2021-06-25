#include"C语言课设头文件.h"
//本函数用于增添新设备 
void addnode()
{system("cls");
 FILE*p;
 int a,k,n=1,u,n1=1,n2=1;                              //a新增加设备的个数 ,k表示是否有重名的,u表示输出空格的行数，n表while的状态 
p=fopen("data.txt","a");
printf("请输入新增加设备的个数\n");
scanf("%d",&a); 
struct Node*head;
struct Node*p1,*p2;
p1=(struct Node*)malloc(sizeof(struct Node));
int i=1; 
struct date d; 
float e;
while(i<=a)
{	
	n1=1,n2=1;
	while(n) 
		{printf("请输入设备编号\n"); 
		scanf("%s",(p1->device).num);
		k=find_same_name((p1->device).num);
		if(k==0)
			{printf("请输入设备种类\n");
			scanf("%s",(p1->device).sizename);
			while(n1)
				{printf("请输入该设备的购买价格\n"); 
				scanf("%f",&e); 
				 if(e>0)
				 	{(p1->device).buy_prize=e;
				 	 n1=0;
					}
				 else
				 	{printf("购买价格输入有误，"); 
			 	 	 system("pause");
				 	 goto3y();
			 		 for(u=1;u<=3;u++)
			 			{
			 				printf("                                                   \n");
						}
			 	 	 goto3y();
					}
					
				}
			while(n2)
				{printf("请输入该设备的购买时间(年 月 日)\n");
				 scanf("%d %d %d",&d.year,&d.month,&d.day);
				 if(d.year>999&&d.year<10000&&d.month<=12&&d.month>=1&&d.day>=1&&d.day<=31)
					 {(p1->device).buy_time.year=d.year;
				 	 (p1->device).buy_time.month=d.month;
				 	 (p1->device).buy_time.day=d.day;
					  n2=0; 
					 }
				else
					{printf("购买时间输入有误，"); 
			 	 	 system("pause");
				 	 goto3y();
			 	 	 for(u=1;u<=3;u++)
			 			{
			 				printf("                                                   \n");
						}
			 	 	 goto3y();
					}
				} 
			strcpy((p1->device).statement,"闲置\0");
			(p1->device).state_start_time.year=(p1->device).buy_time.year;
			(p1->device).state_start_time.month=(p1->device).buy_time.month;
			(p1->device).state_start_time.day=(p1->device).buy_time.day;
			(p1->device).all_cost=(p1->device).buy_prize;
			(p1->device).repair_time=0;
			strcpy((p1->device).note,"\n无\n\0");
			p=fopen("data.txt","a");
			fwrite(p1,sizeof(struct Node),1,p);
			fclose(p);
			n=0;
			if(i==a)
				{printf("增加成功！");
				 system("pause"); 
				}
			}
		else
			{printf("请更换设备编号，"); 
			 system("pause");
			 goto3y();
			 for(u=1;u<=3;u++)
			 	{
			 		printf("                                                   \n");
				}
			 goto3y();
			}
		}
	n=1;
	i++;
}
free(p1);
}
