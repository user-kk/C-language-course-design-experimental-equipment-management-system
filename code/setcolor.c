#include"C���Կ���ͷ�ļ�.h"
//����������������ɫ 
void setcolor()
{
	system("cls");
	char a[2],b[2],a1,b1;
	FILE*p;

	printf("���û��Լ�ѡ��          0���ڣ� 1������ 2���̣� 3��ǳ�̣� 4���죩 5���ϣ� 6���ƣ� 7���ף� 8���ң� \n ");
	printf("                         9��������   A�����̣� B����ǳ�̣� C�����죩 D�����ϣ� E�����ƣ� F�����ף�  \n"); 
	printf("��ѡ�񱳾���ɫ\n");
	printf("��ѡ��������ɫ\n");
	gotoxy(15,2);
	scanf("%s",a);
	gotoxy(15,3);
	scanf("%s",b);
	a1=a[0];
	b1=b[0];
	if((a1>='0'&&a1<='9'||a1>='A'&&a1<='F')&&(b1>='0'&&b1<='9'||b1>='A'&&b1<='F'))
		{p=fopen("color.txt","w");
		fputc('c',p);
		fputc('o',p);
		fputc('l',p);
		fputc('o',p);
		fputc('r',p);
		fputc(' ',p);
		fputc(a1,p);
		fputc(b1,p);
		fclose(p);
		printf("���óɹ�\n"); 
		printf("���趨���û���������ϵͳ����Ч\n");
		system("pause");
		}
	else
		{printf("�����ʽ����ȷ������������");
		 system("pause");
		 return; 
		}
 } 
