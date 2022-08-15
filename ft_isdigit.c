#include<stdio.h>

int ft_isdigit(int arg)
{
	if(arg >= '0' && arg <= '9')
		return 1 ;
	return 0;
}
int main()
{
	int x = '2';
	printf("%d",ft_isdigit(x));
}
