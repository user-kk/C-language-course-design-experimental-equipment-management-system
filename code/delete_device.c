#include"C���Կ���ͷ�ļ�.h"
//����������ɾ���豸��Ϣ 
void delete_device()
{
	system("cls");
	struct Node*p1,*p2,*head;
	char a[10];
	int b,count=0;
	int flag=0;
	head=p2=p1=from_data_to_list();
	printf("��������Ҫɾ�����豸�ı�ţ�\n");
	scanf("%s",a);
	if(strcmp((p1->device).num,a)==0)
		{
			flag=1; 
			printf("���豸����ϸ��ϢΪ��\n");
			printf("��ţ�%s\n",(p1->device).num);
			printf("���ࣺ%s\n",(p1->device).sizename);
			printf("����۸�%.2f\n",(p1->device).buy_prize);
			printf("����ʱ��: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
			printf("��ǰ״̬��%s\n",(p1->device).statement);
			printf("%s״̬��ʼʱ�䣺%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
			printf("���豸�ܻ���: %.2f\n",(p1->device).all_cost);
			printf("�����������%d\n",(p1->device).repair_time);
			printf("��ע��%d����%s",count,(p1->device).note);
			printf("-----------------------------------------------------------------------------------------------------------\n");
			printf("�Ƿ�ɾ���豸��Ϣ��       1(��) 2(��)\n");
			b=scan(2);
			switch(b)
				{
					case 1:	{head=p1->next;printf("�豸��Ϣ��ɾ��\n");system("pause");
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
					printf("���豸����ϸ��ϢΪ��\n");
					printf("��ţ�%s\n",(p1->device).num);
					printf("���ࣺ%s\n",(p1->device).sizename);
					printf("����۸�%.2f\n",(p1->device).buy_prize);
					printf("����ʱ��: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
					printf("��ǰ״̬��%s\n",(p1->device).statement);
					printf("%s״̬��ʼʱ�䣺%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
					printf("���豸�ܻ���: %.2f\n",(p1->device).all_cost);
					printf("�����������%d\n",(p1->device).repair_time);
					printf("��ע��%d����%s",count,(p1->device).note);
					printf("-----------------------------------------------------------------------------------------------------------\n");
					printf("�Ƿ�ɾ���豸��Ϣ��       1(��) 2(��)\n");
					b=scan(2);
					switch(b)
						{
							case 1:	{p2->next=p1->next;
									printf("�豸��Ϣ��ɾ��\n");
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
		{printf("δ�ҵ����豸,�����º˶��豸���\n");
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

