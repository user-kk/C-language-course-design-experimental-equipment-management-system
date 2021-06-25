#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h> 
/////////////////////数据结构////////////////////////////////////////////// 
struct date                 //日期 
{
    int year;
    int month;
    int day;
};
struct Device             //设备 
{
    char num[10];
    char  sizename[10];
    float buy_prize;
    struct date buy_time;
    char statement[25];
    struct date state_start_time;
    float all_cost;
    int repair_time;
    char note[100];
};
struct Node            //单个节点 
{struct Device device;
 struct Node*next;
 struct Node*last;
};
////////////////////////函数声明/////////////////////////////////////////////// 
int log_in(); 
int addname();
void change_password(int n);
void delete_name();
void gotoxy(int x,int y);
int menu(int n);
int change_other_password();
int option_menu(int n);
int account_settings_menu(int n);
void setcolor();
void change_color();
void addnode();
void print(int n,struct Node*p1);
void correct_Node();
struct Node*from_data_to_list();
void goto3y();
int scan(int n);
int find_same_name(char b[]);
void release_node(struct Node*p1);
void device_cheak_in();
void from_link_to_file(struct Node*head);
void delete_device();
int backup_menu();
void back_up();
void recovery();
int sub_menu();
void sub_print(struct Node*p1);
int display_setup_menu();
void setnumber();
int inquire_menu();
void inquire(char*a);
void from_link_to_file_sub(struct Node*head);
int compare_date(struct date a,struct date b);
struct Node*from_data_to_list_sub();
void sort();
int statistic_menu();
void statistic_sizename();
void statistic(char*a);
void help();
