#include"C���Կ���ͷ�ļ�.h"
//���������ڱȽ�ʱ���С�������ؽ�� 
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
