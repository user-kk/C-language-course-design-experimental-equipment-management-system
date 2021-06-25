#include"C语言课设头文件.h"
//本函数用于备份 
void back_up()
{system("cls");
FILE*fp;
fp=fopen("data_backup.txt","w");
struct Node*p,*head;
int count=0;
p=head=from_data_to_list();
while(p!=NULL)
	{	
	 count++;
	 p=p->next; 
	}
p=head; 
int u=1;
while(u<=count)
	   	{
		 fwrite(p,sizeof(struct Node),1,fp);
		 p=p->next;
	 	 u++;
		}
fclose(fp);	
release_node(head);	
printf("备份成功！");
system("pause"); 
}
