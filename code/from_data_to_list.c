#include"C语言课设头文件.h" 
//本函数用于将数据从data.txt文件返回到链表 
struct Node*from_data_to_list()
{	int n=1;
	struct Node*p1,*p2 ,*head;
	head=p2=NULL;
	FILE*p;
	p1=(struct Node*)malloc(sizeof(struct Node)); 	
	p=fopen("data.txt","r+");
	fgetc(p);
	while(!feof(p))
	{
		if(n==1)
			{
				fseek(p,-1,1);
				fread(p1,sizeof(Node),1,p);
				p1->last=NULL;
				head=p1;
				p2=p1;
				p1=(struct Node*)malloc(sizeof(struct Node));
				fgetc(p);
			}
		else
			{
				fseek(p,-1,1);
				fread(p1,sizeof(Node),1,p);
				p1->last=p2;
				p2->next=p1;
				p2=p1;
			    p1=(struct Node*)malloc(sizeof(struct Node));
			    fgetc(p);
			}
		
		n++;
	}
	free(p1);
	if(p2!=NULL)
	p2->next=NULL; 
	fclose(p);
	return head;
}
