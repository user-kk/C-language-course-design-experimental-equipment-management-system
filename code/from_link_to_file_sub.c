#include"C���Կ���ͷ�ļ�.h"
//���������ڽ����ݴ������뵽inquire_data.txt�ļ� 
void from_link_to_file_sub(struct Node*head)
{struct Node*p1;
 p1=head;
 int count=0; 
 while(p1!=NULL)
	{	
	 count++;
	 p1=p1->next; 
	}
    p1=head; 
    int u=1;
	FILE*p; 
	p=fopen("inquire_data.txt","w");
   	while(u<=count)
	   	{
		 fwrite(p1,sizeof(struct Node),1,p);
		 p1=p1->next;
	 	 u++;
		}
	fclose(p);	
	release_node(head);		 
}
