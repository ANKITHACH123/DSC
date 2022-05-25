/*#include<stdio.h>
int main()
{
    int i,n,arr[100],m,c=0;
    scanf("%d",&n);
    //scanf("%d",&m);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(arr[i]=m)
		{
			c++;
		}
	}
        if(c>=1)
		{
			printf("found");
		}
		else
		{
			printf("not found");
		}
}*/
#include<stdio.h>
int search(int *arr,int n,int se)
{
    /*int i,max=0;
	for(i=0;i<n;i++)
	{
	   if(arr[i]==se)
	   {
	       max=i;
	   }
	   	
	}
	return max;*/
	int static i=0;
	if(i==n)
	{
		return 0;
	}
	if(arr[i]==se)
	{
		return 2;
	}
	i++;
	return search(arr,n,se);
		
	
}

int main()
{
    int arr[100],n,i,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	//printf("%d ",search(arr,n,se));
    if(search(arr,n,se)==2)
    {
    	printf("found");
	}
	else
	{
		printf("not found");
	}
}