#include <stdio.h>
#include <stdlib.h>

void arrange_positive_negative(int *a,int n)
{
    int pos[n],neg[n];

    for(int i = 0;i < n;i++)
    {
	    pos[i] = 0;
	    neg[i] = 0;
    }
    
    int j = 0,k = 0;
    for(int i = 0;i < n;i++)
    {
	    if(a[i] > 0) pos[j++] = a[i];
	    else neg[k++] = a[i];
    }

    if(j < k)
    {
	    for(int i = 0;i < j;i++)
	    {
		    a[2*i] = pos[i];
		    a[2*i + 1] = neg[i];
	    }
	
	    int index = j*2;
	    for(int i = j;i < k;i++)
	    {
		    a[index] = neg[i];
		    index++;
	    }
    }
    else
    {
	    for(int i = 0;i < k;i++)
            {
                    a[2*i] = pos[i];
                    a[2*i + 1] = neg[i];
            }

            int index = k*2;
            for(int i = k;i < j;i++)
            {
                    a[index] = pos[i];
                    index++;
            }
    }
}

int main()
{
	int n,*arr = NULL;
	puts("enter the array size");
	scanf("%d",&n);

	arr = calloc(n,sizeof(int));
	if(arr == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	puts("enter the array elements");
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	arrange_positive_negative(arr,n);
	puts("The final array is");
	for(int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	free(arr);
	arr = NULL;
	exit(EXIT_SUCCESS);
}

