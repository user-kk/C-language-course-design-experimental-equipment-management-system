#include"C���Կ���ͷ�ļ�.h" 
//���������ڷ�ҳ����ÿҳ��ʾ���豸�������� 
void setnumber()
{
	system("cls");
	FILE*p;
	p=fopen("number.dat","r+");
	int b,c; 
	fscanf(p,"%d",&b);
	printf("����ǰÿҳ����豸�ĸ���Ϊ��%d\n",b);
	printf("���뽫���޸�Ϊ��");
	scanf("%d",&c);
	rewind(p);
	fprintf(p,"%d",c);
	printf("�޸ĳɹ������޸������������Ч\n");
	system("pause");
	fclose(p);	
	
}
