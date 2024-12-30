#pragma once
#include <stdio.h>
#include <math.h>
void add();
//求两个数的和、平均值、差、积、商；并输出
void triangle();
//输入3个数，判断三角形类型
int nj(int n);
//求n的阶乘
double sum1();
//某个数列求和1
int sigeman(int n);
//从1加到n的和
int yearday(int year, int month);
//几年几月多少天输入形式如2024.10
void sum2();
//某个数列求和2
int zhishu(int n);
//判断是否为素数
int hhh(int a, int b);
//输出a到b之间的所有素数
void sjx(int n, char a);
//输出三角形
void gedebahe();
//歌德巴赫猜想
double sum3(double m);
//求m的第n项
void bubbleSort(int a[], int size);
//冒泡排序
void switchf(int a, int b);
void swap(int* a, int* b);
//交换两个变量
int sum(int array[], int n);
//求数组的和
void sort(int array[], int n);
//排序
void printArray(int array[], int n);
//输出数组
void reverse(int array[], int n);
//反转数组
void inputArray(int array[], int n);
//输入数组
int arvageArray(int array[], int n);
//求数组的平均值
int find(int a[], int n, int x);
//查找数组中的元素
void max(int a[], int n);
//找出数组中的最大元素
void min(int a[], int n);
//找出数组中的最小元素
char* strcpy(char* destination, const char* source);
//复制字符串
char* strcat(char* destination, const char* source);
//连接字符串
int fib(int n);
//斐波那契数列
int Fib(int n);
//斐波那契数列
char* tenToHex(int n);
//十进制转十六进制
void strrev(char* str, int len);
//字符串反转
int strlen(const char* str);
//字符串长度
void strdel(char* str, int i);
//删除字符串中的字符

