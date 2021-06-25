#include"C语言课设头文件.h"
//主函数 
int main()
{
 //system("mode con cols=118 lines=34");
 change_color();
 int a=0;                    //a为状态量，检测log_in函数是否应该结束并且得到用户信息 
 while(!a) 
     {
	  a=log_in();
 	 } 
 change_color();
while(1)
 {menu(a);
 }  
} 

