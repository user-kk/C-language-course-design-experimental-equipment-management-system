#include"C���Կ���ͷ�ļ�.h"
//����������ͳ���豸���ಢ�������ж��ٸ� 
void statistic_sizename()
{system("cls");
 struct Node*p1,*head,*p2;
 head=p1=from_data_to_list();
 char a[20][15];
 int b[20];
 int i=0,n=0,u=0;
 for(;u<=20;u++)
 	b[u]=1;
 int count=1;
 int flag=1;
 while(count)
 	{count=0;
 	 p1=head;
	 while(p1!=NULL)
	 	{count++;
	 	 p1=p1->next;
		}
	 p1=head;
	 if(p1!=NULL)
	 	{
		 strcpy(a[i],(p1->device).sizename);
	 	 head=p2=p1=p1->next;
	 	 n=0;
		}
	 while(p1!=NULL)
	 	{n++;
	 	 flag=1;
	 	 if(strcmp(a[i],(p1->device).sizename)==0)
	 	 	{if(n==1)
	 	 	 	{flag=0;
				 b[i]++;
	 	 	 	 head=p1->next;
	 	 	 	 p2=p1=head;
	 	 	 	 n=0;
				}
			 else
			 	{flag=0;
				 b[i]++;
			 	 p2->next=p1->next;
	 	 	 	 p1=p1->next;
				} 
			}
		if(flag==1)
			{p2=p1;
			 p1=p1->next;
			}
		}
	i++;
	}
i--;
printf("����Ŀǰ��\n");
for(u=0;u<i;u++)
	{printf("%s�ĸ���Ϊ%d\n",a[u],b[u]);
	}
system("pause");
return;
}
