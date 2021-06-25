#include"C语言课设头文件.h"
//本函数用于数据恢复 
void recovery()
{
	system("cls");
	int n=1;
	struct Node*p1,*p2 ,*head;
	FILE*p;
	p1=(struct Node*)malloc(sizeof(struct Node)); 	
	p=fopen("data_backup.txt","r");
	fgetc(p);
	while(!feof(p))
	{
		if(n==1)
			{
				fseek(p,-1,1);
				fread(p1,sizeof(Node),1,p);
				head=p1;
				p2=p1;
				p1=(struct Node*)malloc(sizeof(struct Node));
				fgetc(p);
			}
		else
			{
				fseek(p,-1,1);
				fread(p1,sizeof(Node),1,p);
				p2->next=p1;
				p2=p1;
			    p1=(struct Node*)malloc(sizeof(struct Node));
			    fgetc(p);
			}
		
		n++;
	}
	free(p1);
	p2->next=NULL; 
	fclose(p);
	struct Node*p3;
 	p3=head;
 	int count=0; 
 	while(p3!=NULL)
		{	
		 count++;
		 p3=p3->next; 
		}
    p3=head; 
    int u=1;
	FILE*fp; 
	fp=fopen("data.txt","w");
   	while(u<=count)
	   	{
		 fwrite(p3,sizeof(struct Node),1,fp);
		 p3=p3->next;
	 	 u++;
		}
	fclose(fp);	
	release_node(head);	
	printf("恢复成功！");
	system("pause");  
}
