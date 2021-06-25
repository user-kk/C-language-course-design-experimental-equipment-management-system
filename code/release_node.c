#include"C语言课设头文件.h"
//本函数用于释放在堆中的链表 
void release_node(struct Node*p1)
{struct Node*p2;
 while(p1!=NULL)
 	{p2=p1->next;
	 free(p1);
	 p1=p2;
	}
 } 
