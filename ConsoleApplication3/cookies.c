#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int cookies = 45;
	int children = 7;
	int cookies_per_children = 0;
	int cookies_left_over = 0;
	cookies_per_children = cookies / children;
	printf("you have %d children and %d cookies\n", children, cookies);
	printf("give each child %d cookies.\n,cookies_per_children");
	cookies_left_over = cookies%children;
	printf("There are %d cookies left over.\n", cookies_left_over);
	system("pause");
	return 0;
}