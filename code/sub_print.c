#include"C���Կ���ͷ�ļ�.h"
//������������������豸��Ϣ 
void sub_print(struct Node*p1)
{	
	int comment_count=0;
	char*k=(p1->device).note;
	while(*k!='\0')
		{if(*k=='\n')comment_count++;
		 k++;
		}
	printf("��ţ�%s\n",(p1->device).num);
	printf("���ࣺ%s\n",(p1->device).sizename);
	printf("����۸�%.2f\n",(p1->device).buy_prize);
	printf("����ʱ��: %d %d %d\n",(p1->device).buy_time.year,(p1->device).buy_time.month,(p1->device).buy_time.day);
	printf("��ǰ״̬��%s\n",(p1->device).statement);
	printf("%s״̬��ʼʱ�䣺%d %d %d\n",(p1->device).statement,(p1->device).state_start_time.year,(p1->device).state_start_time.month,(p1->device).state_start_time.day);
	printf("���豸�ĵ�ǰȫ������Ϊ: %.2f\n",(p1->device).all_cost);
	printf("�����������%d\n",(p1->device).repair_time);
	printf("��ע��%d����%s",comment_count-1,(p1->device).note);
	printf("-----------------------------------------------------------------------------------------------------------\n");
}
