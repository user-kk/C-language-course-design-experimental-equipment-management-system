#include"C语言课设头文件.h"
//本函数用于比较时间大小，并返回结果 
int compare_date(struct date a,struct date b)
{if(a.year<b.year)return 1;
 if(a.year>b.year)return -1;
 if(a.year==b.year)
 	{if(a.month<b.month)return 1;
 	 if(a.month>b.month)return -1;
 	 if(a.month==b.month)
 		{if(a.day<b.day)return 1;
 		 if(a.day>b.day)return -1;
 		 if(a.day==b.day)return 0;
		}
	}
}
