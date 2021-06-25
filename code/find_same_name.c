#include"C语言课设头文件.h" 
//本函数用于判断是否有相同的设备编号 
int find_same_name(char b[])
{int n=1;
	struct Node*p1,*head;
	p1=head=from_data_to_list(); 
 while(p1!=NULL)
 	{ 
	 if(strcmp((p1->device).num,b)==0)
 		{printf("该编号已存在，");
		 return 1; 
		}
	p1=p1->next;	 
	}
 release_node(head);
 return 0;
}
