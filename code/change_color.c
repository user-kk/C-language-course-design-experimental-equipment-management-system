#include"C���Կ���ͷ�ļ�.h"
//���������ڸı�����ı�����ɫ�Լ����屾����ɫ 
void change_color()
{ FILE*p;
 p=fopen("color.txt","r");
 char b[9];
 fgets(b,9,p);
 fclose(p);
 system(b);
 } 
