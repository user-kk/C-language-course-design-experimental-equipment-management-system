#include"C���Կ���ͷ�ļ�.h"
//�����������������豸 
void addnode()
{system("cls");
 FILE*p;
 int a,k,n=1,u,n1=1,n2=1;                              //a�������豸�ĸ��� ,k��ʾ�Ƿ���������,u��ʾ����ո��������n��while��״̬ 
p=fopen("data.txt","a");
printf("�������������豸�ĸ���\n");
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
		{printf("�������豸���\n"); 
		scanf("%s",(p1->device).num);
		k=find_same_name((p1->device).num);
		if(k==0)
			{printf("�������豸����\n");
			scanf("%s",(p1->device).sizename);
			while(n1)
				{printf("��������豸�Ĺ���۸�\n"); 
				scanf("%f",&e); 
				 if(e>0)
				 	{(p1->device).buy_prize=e;
				 	 n1=0;
					}
				 else
				 	{printf("����۸���������"); 
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
				{printf("��������豸�Ĺ���ʱ��(�� �� ��)\n");
				 scanf("%d %d %d",&d.year,&d.month,&d.day);
				 if(d.year>999&&d.year<10000&&d.month<=12&&d.month>=1&&d.day>=1&&d.day<=31)
					 {(p1->device).buy_time.year=d.year;
				 	 (p1->device).buy_time.month=d.month;
				 	 (p1->device).buy_time.day=d.day;
					  n2=0; 
					 }
				else
					{printf("����ʱ����������"); 
			 	 	 system("pause");
				 	 goto3y();
			 	 	 for(u=1;u<=3;u++)
			 			{
			 				printf("                                                   \n");
						}
			 	 	 goto3y();
					}
				} 
			strcpy((p1->device).statement,"����\0");
			(p1->device).state_start_time.year=(p1->device).buy_time.year;
			(p1->device).state_start_time.month=(p1->device).buy_time.month;
			(p1->device).state_start_time.day=(p1->device).buy_time.day;
			(p1->device).all_cost=(p1->device).buy_prize;
			(p1->device).repair_time=0;
			strcpy((p1->device).note,"\n��\n\0");
			p=fopen("data.txt","a");
			fwrite(p1,sizeof(struct Node),1,p);
			fclose(p);
			n=0;
			if(i==a)
				{printf("���ӳɹ���");
				 system("pause"); 
				}
			}
		else
			{printf("������豸��ţ�"); 
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
