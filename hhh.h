#pragma once
#include <stdio.h>
#include <math.h>
void add();
//���������ĺ͡�ƽ��ֵ��������̣������
void triangle();
//����3�������ж�����������
int nj(int n);
//��n�Ľ׳�
double sum1();
//ĳ���������1
int sigeman(int n);
//��1�ӵ�n�ĺ�
int yearday(int year, int month);
//���꼸�¶�����������ʽ��2024.10
void sum2();
//ĳ���������2
int zhishu(int n);
//�ж��Ƿ�Ϊ����
int hhh(int a, int b);
//���a��b֮�����������
void sjx(int n, char a);
//���������
void gedebahe();
//��°ͺղ���
double sum3(double m);
//��m�ĵ�n��
void bubbleSort(int a[], int size);
//ð������
void switchf(int a, int b);
void swap(int* a, int* b);
//������������
int sum(int array[], int n);
//������ĺ�
void sort(int array[], int n);
//����
void printArray(int array[], int n);
//�������
void reverse(int array[], int n);
//��ת����
void inputArray(int array[], int n);
//��������
int arvageArray(int array[], int n);
//�������ƽ��ֵ
int find(int a[], int n, int x);
//���������е�Ԫ��
void max(int a[], int n);
//�ҳ������е����Ԫ��
void min(int a[], int n);
//�ҳ������е���СԪ��
char* strcpy(char* destination, const char* source);
//�����ַ���
char* strcat(char* destination, const char* source);
//�����ַ���
int fib(int n);
//쳲���������
int Fib(int n);
//쳲���������
char* tenToHex(int n);
//ʮ����תʮ������
void strrev(char* str, int len);
//�ַ�����ת
int strlen(const char* str);
//�ַ�������
void strdel(char* str, int i);
//ɾ���ַ����е��ַ�

