#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("Nhap vao 3 so a b c de kiem tra: ");
	scanf("%d %d %d", &a,&b,&c);
	if( (a+b)<=c || (a+c)<=b || (b+c)<=a )
	{
		printf("\nBa so vua nhap khong phai la 3 canh cua tam giac!");
		return 0;
	}
	else
	{
		if( (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b) || (a*a)+(b*b)==(c*c))
	    {
	    	printf("\nBa so vua nhap la 3 canh cua tam giac vuong!");
	    	return 0;
		}
	    if(a==b && b==c)
	    {
	    	printf("\nBa so vua nhap la 3 canh cua tam giac deu!");
	    	return 0;
		}
	    if(a==b || a==c || b==c)
	    printf("\nBa so vua nhap la 3 canh cua tam giac can!");
	}
	printf("\nDay la tam giac thuong!");
	return 0;
}
