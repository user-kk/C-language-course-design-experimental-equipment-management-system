#include"C���Կ���ͷ�ļ�.h"
//���������ڵǼ��豸״̬���豸��ע������״̬��ʼʱ�� 
void device_cheak_in()
{	system("cls");
	char a[10],comment[50],d[7];  //a�豸��� 
	int b,c,k=0;    //b,cΪ�н�ѡ��� ,k��״̬ 
	float cost;
	char*g,*k1,*k2;
	struct Node*p1,*head;
	p1=head=from_data_to_list();
	printf("��������Ҫ����������豸���\n"); 
	scanf("%s",a);
	while(p1!=NULL)
		{
			if(strcmp(a,(p1->device).num)==0)
				{	k=1;
					printf("��ʱ���豸��״̬Ϊ��%s\n",(p1->device).statement);
					printf("%s״̬��ʼʱ��Ϊ��%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
					printf("���뽫��̨�豸�Ǽ�Ϊ��1(����ʹ��) 2(������) 3(�ѱ���) 4(������) 5(����) 6(��ʧ)\n");
					b=scan(6); 
					switch(b)
						{
							case 1:{strcpy((p1->device).statement,"����ʹ��\0");
									break;
									} 
							case 2:{strcpy((p1->device).statement,"������\0");
									printf("������˴�����Ļ���\n");
									scanf("%f",&cost);
									(p1->device).all_cost=(p1->device).all_cost+cost;
									break;} 
							case 3:{strcpy((p1->device).statement,"�ѱ���\0");
									break;} 
							case 4:{strcpy((p1->device).statement,"������\0");
									break;} 
							case 5:{strcpy((p1->device).statement,"����\0");
									break;}	
							case 6:{strcpy((p1->device).statement,"��ʧ\0");
									break;
								   }	 	 
						}
					printf("���뽫%s״̬��ʼʱ��Ǽ�Ϊ��\n",(p1->device).statement);
					scanf("%d %d %d",&(p1->device).state_start_time.year,&(p1->device).state_start_time.month,&(p1->device).state_start_time.day);
				    printf("���Ƿ���Ҫ�Դ˴εǼ���ӱ�ע(1.�� 2.��)\n");
					c=scan(2); 
					if(c==1)
						{printf("����������Ϊ�˴εǼ���ӵı�ע\n");
						 scanf("%s",comment);
						 g=(p1->device).note;
						 strcpy(d,"\n��\n\0");
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
					printf("�Ǽǳɹ���\n"); 
					system("pause");
				}
			p1=p1->next;
		} 
	if(k==0)
		{printf("δ�ҵ���̨�豸,�����µǼ�");
		 system("pause");
		 system("cls");
		 device_cheak_in();
		}
	if(k==1)
		{from_link_to_file(head);
		}
return;			
} 
