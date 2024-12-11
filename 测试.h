#include <stdio.h>
#include <math.h>
void add()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf_s("%2d%2d", &a, &b);
	int sum = a + b;
	float ave;
	ave = (float)sum / 2;
	int difference = abs(a - b);
	int product = a * b;
	double quotient = (double)a / (double)b;
	printf("The sum is %d\n", sum);
	printf("The average is %.2f\n", ave);
	printf("The difference is %d\n", difference);
	printf("The product is %d\n", product);
	printf("The quotient is %.2f\n", quotient);
}
//���������ĺ͡�ƽ��ֵ��������̣������
void triangle()
{
	double a, b, c;
	printf("Enter three numbers: ");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b)
	{
		if (a == b || b == c || c == a)
		{
			if (fabs(a * a + b * b - c * c) <= 1e-2 || fabs(b * b + c * c - a * a) <= 1e-2 || fabs(c * c + a * a - b * b) <= 1e-2)
			{
				printf("The triangle is ����ֱ��������\n");
			}
			else
			{

				if (a == b && b == c && c == c)
				{
					printf("The triangle is �ȱ�������\n");
				}
				else
				{
					printf("The triangle is ����������\n");
				}
			}

		}
		else if ((fabs(a * a + b * b - c * c) <= 1e-2 || fabs(b * b + c * c - a * a) <= 1e-2 || fabs(c * c + a * a - b * b) <= 1e-2) && (a != b && b != c && c != a))
		{
			printf("The triangle is ֱ��������\n");
		}
		else
		{
			printf("The triangle is һ��������\n");
		}
	}
	else
	{
		printf("The triangle is not valid.\n");
	}

}
//����3�������ж�����������
int nj(int n)
{
	int i = 1, sum = 1;
	while (i <= n)
	{
		sum = sum * i;
		i++;
	}

	return(sum);
}
//��n�Ľ׳�
double sum1()
{
	int  i;
	double item, sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		item = pow(-1, i + 1) / (i * 2 - 1);
		sum = sum + item;
	}
	return(sum);
}
//ĳ���������1
int sigeman(int n)
{
	int sum = 0, i = 1;
	do
	{
		i += 1;
		sum += i;
	} while (i <= n);
	return(sum);
}
//��1�ӵ�n�ĺ�
void yearday(int year, int month)
{
	int day = 0;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	case 2:
		if (year % 4 == 0)
		{
			day = 29;
		}
		else
		{
			day = 28;
		}
		break;
	}
	printf("day=%d", day);
}
//���꼸�¶�����������ʽ��2024.10
void sum2()
{
	double a = 1, b = 2;
	double sum2 = 0;
	double sign;
	for (int i = 0; i < 20; i++)
	{
		sign = pow(-1, i);
		sum2 = sum2 + sign * (b / a);
		double c;
		c = b;
		b = a + c;
		a = c;
	}
	printf("%lf", sum2);
}
//ĳ���������2
int zhishu(int n)
{
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
//�ж��Ƿ�Ϊ����
int hhh(int a, int b)
{
	for (int i = a + 1, j = 1; i < b; i++)
	{
		if (10 <= a&&a <= b&&b <= 1000)
		{
			if (zhishu(i))
			{
				printf("%4d ", i);
				if ((j % 8) == 0)
				{
					printf("\n");
				}
				j++;
			}
		}
		else
		{
			printf("�������\n");
			break;
		}
	}
	return 0;
}
//���a��b֮�����������
void sjx(int n, char a)
{
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			printf("%c", a);
		}
		printf("\n");

	}
}
//���������
void gedebahe()
{
	int j = 1;
	for (int i = 3; i <= 2000; i++)
	{
		for (int k = 2; k <= i / 2; k++)
		{
			if (i % 2 == 0 && zhishu(k) && zhishu(i - k))
			{
				printf("%4d=%4d+%4d", i, k, i - k);
				if (j % 4 == 0)
				{
					printf("\n");
				}
				j++;
				break;
				
				
			}
		}
	}
}
//��°ͺղ���
/*int jian(int sum[9])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = i; j < 9; j++)
		{
			if (sum[i] == sum[j])
			{
				return 0;
			}
		}
	}
	return 1;*/
double sum3(double m)
{
	double i = 1, sum = 0;
	while (((double)pow(m, i)) / (double)nj(i) > 1e-4)
	{
		sum += pow(-1, i + 1) * (double)pow(m, i) / (double)nj(i);
		i++;
	}
	return sum;
}
//��m�ĵ�n��
void bubbleSort(int a[],int size)
{
	int temp = 0;
	for (int j = size - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
}
//ð������
void switchf(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//������������
int sum(int array[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}
//������ĺ�
void sort(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] > array[j])
			{
				switchf(array[i], array[j]);
			}
		}
	}
}
//����
void printArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
}
//�������
void reverse(int array[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		switchf(array[i], array[n - i - 1]);
	}
}
//��ת����
void inputArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}
}
//��������
int arvageArray(int array[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum / n;
}
//�������ƽ��ֵ
int find(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            
            return i;
        }
    }
    
    printf("Element not found");
    return -1;
}
//���������е�Ԫ��
void max(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum element is %d",max);
}
//�ҳ������е����Ԫ��
void min(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum element is %d",min);
}
//�ҳ������е���СԪ��
char* strcpy(char* destination, const char* source)
{
	int i = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i++];
	}
	destination[i] = '\0';
	return(destination);
}
//�����ַ���
char* strcat(char* destination, const char* source)
{
	int i = 0;
	while (*(destination + i) != '\0')
		i++;
	while (*source != '\0')
		*(destination + i++) = *source++;
	*(destination + i) = '\0';
	return(destination);
}
//�����ַ���
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
//쳲���������
int Fib(int n)
{
	int a = 1;
	if (n == 1 || n == 2)
		return 1;
	else if (n > 2)
	{
		int a = 1, b = 1, c;
		for (int i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;

		}
		return c;
	}

}
//쳲���������

