#include<stdio.h> 
#include<stdlib.h> 
void juedui(long long x)
{
	
	
	
}





void bubbleSort(long long a[], int n,long long b[])
{
int i, j,  flag;
long long hold1,hold2;
for (i = 0; i < n-1; i++)
{
	flag = 0;
	for (j = 0; j < n-1-i; j++)
	{
		if (a[j] > a[j + 1])
		{
		hold1 = a[j]; hold2=b[j];
		a[j] = a[j + 1]; b[j]=b[j+1];
		a[j + 1] = hold1; b[j+1]=hold2;
		flag = 1;		
		}		
}
if (0 == flag)
	break;
}
}

void Sort(long long arr[], int n,long long brr[])
{
	int i;
	long long hold1;
for (i = 0; i < n-1; i++)
{
	if(arr[i]==arr[i+1])
	{
		if(brr[i+1]<brr[i])
		{
			hold1=brr[i+1];
			brr[i+1]=brr[i];
			brr[i]=hold1;
		}	
	}	
}
}


int main()
{
 	long long arr[100000];
	long long  brr[100000];
	int n,i,m;
	int x;
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		
		brr[i]=x;
		x=x-m;
		if(x<0)
		{
			x=-x;
		}
		arr[i]=x;
		
		
	}	
	bubbleSort(arr,n,brr);
	Sort(arr,n,brr)	;
	for(i=0;i<n;i++)
	{
		printf("%;;d\n",brr[i]);
	}		
	return 0;
}