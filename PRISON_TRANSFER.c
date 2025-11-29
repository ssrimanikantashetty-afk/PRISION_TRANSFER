#include<stdio.h>
int main()
 {
    int n,t,c;
    scanf("%d %d %d",&n,&t,&c);
    int a[n];
    for(int i=0;i<n;i++) 
	{
	scanf("%d",&a[i]);
    }
    int count=0,valid=0;
    for(int i=0;i<n;i++) 
	{
        if (a[i]<=t) 
		valid++;
        else 
		valid=0;
        if (valid>=c) 
		count++;
    }
    printf("%d\n",count);
    return 0;
}