#include"C���Կ���ͷ�ļ�.h"
//�����������ͷ��ڶ��е����� 
void release_node(struct Node*p1)
{struct Node*p2;
 while(p1!=NULL)
 	{p2=p1->next;
	 free(p1);
	 p1=p2;
	}
 } 
