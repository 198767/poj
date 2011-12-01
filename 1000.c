/*
Description
Calculate a+b

Input
Two integer a,b (0<=a,b<=10)

Output
Output a+b

Sample Input

1 2

Sample Output

3
 * 
*/
#include<stdio.h>
int main(int argc, char** argv)
{
	int a,b;
	while(scanf("%d %d",&a,&b) !=EOF)
	{
		printf("%d\n",a+b);
	}
	return 0;
}
