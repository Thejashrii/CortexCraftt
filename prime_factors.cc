#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
bool checkprime(int p)
{
	int cnt=0;
	for(int i=1;i<=p;i++)
	{
		if((p%i)==0)
			cnt++;
	}
	if(cnt==2)
		return true;
	return false;
}
int main()
{
	int *arr=NULL,n,k=0;
	printf("enter the n\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if((n%i)==0 && checkprime(i)) {
			arr=realloc(arr,(k+1)*sizeof(int));
			arr[k++]=i;
			if(((n/i)!=i)  && checkprime(n/i)){
				arr=realloc(arr,(k+1)*sizeof(int));
				arr[k++]=n/i;
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}

}

