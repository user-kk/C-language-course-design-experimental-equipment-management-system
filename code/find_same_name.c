#include"C���Կ���ͷ�ļ�.h" 
//�����������ж��Ƿ�����ͬ���豸��� 
int find_same_name(char b[])
{int n=1;
	struct Node*p1,*head;
	p1=head=from_data_to_list(); 
 while(p1!=NULL)
 	{ 
	 if(strcmp((p1->device).num,b)==0)
 		{printf("�ñ���Ѵ��ڣ�");
		 return 1; 
		}
	p1=p1->next;	 
	}
 release_node(head);
 return 0;
}
