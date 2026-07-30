#include<stdio.h>
int hcf(int,int);
int main()
{
	int m,n,f,a,b;
	printf("Enter");
	scanf("%d%d %d%d",&m,&n,&a,&b);
	
	f=hcf(hcf(m,n),hcf(a,b));
	printf("%d",f);
	return 0;
}
int hcf(int m,int n)
{
	if(m==n) return n;
	if(m==0) return n;
	if(n==0) return m;
	if(m>n) return(hcf(m%n,n));
	if(m<n) return(hcf(n%m,m));
}
