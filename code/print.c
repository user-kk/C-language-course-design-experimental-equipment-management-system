#include"C语言课设头文件.h"
//本函数用于实现翻页以及输出设备信息 
void print(int n,struct Node*p1)
{
	system("cls");
	int n1=0,n2=0;
	int a,b=1,i,d=1;                             //a为接收，b为当前页数，i为输出空格行数，d为状态 
	struct Node*p2,*head;
	head=p1;
	while(p1!=NULL)
		{n1++;
		 p1=p1->next;
		}
	n2=n1/n;
	int remainder=n1%n;
	if(remainder!=0)
		n2++;
	p1=head;
	if(n2==1||n2==0)
		{	
			system("cls");
			while(p1!=NULL)
				{sub_print(p1);
				 p1=p1->next;
				}
			printf("                                                                                当前为第1页/共1页/共%d个设备\n",n1);
			printf("1.上一页 2.下一页 3.退出\n");
			while(1)
				{a=scan(3);
				 switch(a)
					{case 1:{printf("当前已是第一页");
						  	 system("pause");
			 				 goto3y();
			 				 for(i=1;i<=3;i++)
			 					{
			 						printf("                                                   \n");
								}
							 goto3y();
							 break;
							}
					case 2:{printf("当前已是最后一页");
							system("pause");
			 				goto3y();
			 				for(i=1;i<=3;i++)
			 					{
			 						printf("                                                   \n");
								}
							goto3y();
							break;
						   }
					case 3:return; 
					}
				} 
		}
	else
		{while(1)
			{p2=p1;
			 d=1;
			 for(i=1;i<=n;i++)
				{if(p1!=NULL)
					{sub_print(p1);
				 	 p1=p1->next;
					}
				}
			 printf("                                                                                当前为第%d页/共%d页/共%d个设备\n",b,n2,n1);
			 printf("1.上一页 2.下一页 3.退出\n");
			 while(d) 
			 	{a=scan(3);
			 	 switch(a)
			 		{case 1:{if(b<=1)
			 					{printf("当前已是第一页");
						  	 	 system("pause");
			 				 	 goto3y();
			 				 	 for(i=1;i<=3;i++)
			 						{
			 							printf("                                                   \n");
									}
							 	 goto3y();
								}
							 else
							 	{b--;
							 	 d=0;
							 	 p1=p2;
							 	 for(i=1;i<=n;i++)
									{
									 p1=p1->last;
									}
								 system("cls");
								}
							  break;
				       		 }
				    case 2:{if(b>=n2)
				    			{printf("当前已是最后一页");
								 system("pause");
			 					 goto3y();
			 					 for(i=1;i<=3;i++)
			 						{
			 							printf("                                                   \n");
									}
								 goto3y();
								}
							 else
							 	{b++;
							 	 d=0;
							 	 p1=p2;
							 	 for(i=1;i<=n;i++)
									{
									 p1=p1->next;
									}
								 system("cls");
								}
							break;
					       }
					case 3:return;
				 }
				}
			}
		} 
}
