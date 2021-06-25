#include"C语言课设头文件.h"
//本函数用于将数据从链表传入到inquire_data.txt文件 
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
