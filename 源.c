#include<stdio.h>
#include"hhh.cpp"
int main()
{
	struct student
	{
		char name[20];
		int id;
		int englishscore;
		int mathscore;
		int physicsscore;

	};
	struct student s[10];
	int n;
	scanf_s("%d", &n);
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d %s %d %d %d",&s[i].id, s[i].name, &s[i].mathscore, &s[i].physicsscore, &s[i].englishscore);
	}
	int average[10];
	for (i = 0; i < n; i++)
	{
		average[i] = (s[i].englishscore + s[i].mathscore + s[i].physicsscore) / 3;
	}
	for (i = 0; i < n; i++)
		printf("The average score of the %dth student is %d.\n", i + 1, average[i]);


	return 0;
}



