#include"C语言课设头文件.h"
//本函数用于改变字体的背景颜色以及字体本身颜色 
void change_color()
{ FILE*p;
 p=fopen("color.txt","r");
 char b[9];
 fgets(b,9,p);
 fclose(p);
 system(b);
 } 
