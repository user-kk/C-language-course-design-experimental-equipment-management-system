#include"C语言课设头文件.h"
//本函数用于输出单个设备信息 
void sub_print(struct Node*p1)
{	
	int comment_count=0;
	char*k=(p1->device).note;
	while(*k!='\0')
		{if(*k=='\n')comment_count++;
		 k++;
		}
	printf("编号：%s\n",(p1->device).num);
	printf("种类：%s\n",(p1->device).sizename);
	printf("购买价格：%.2f\n",(p1->device).buy_prize);
	printf("购买时间: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
	printf("当前状态：%s\n",(p1->device).statement);
	printf("%s状态开始时间：%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
	printf("此设备的当前全部花费为: %.2f\n",(p1->device).all_cost);
	printf("已修理次数：%d\n",(p1->device).repair_time);
	printf("备注共%d条：%s",comment_count-1,(p1->device).note);
	printf("-----------------------------------------------------------------------------------------------------------\n");
}
