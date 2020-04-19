#include <stdio.h>
#include <string.h>
#include <stdlib.h>


union book{
	int a;
	double b;
	char c;
};


int main()
{
	union book tt;
	printf("%d\n",sizeof(tt));
	tt.a = 10;
	printf("%d\n",sizeof(tt));
	tt.b = 10.1;
	printf("%d\n",sizeof(tt));
	tt.c = 'A';
	printf("%d\n",sizeof(tt.c));

#if 0

	printf("%d\n",sizeof(int));
	p = (int *)malloc(3);
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%d\n",*(p+1));
	free(p);
	free(p);
	free(p);
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%d\n",*(p+1));



	p[1] = 1;
	//p++;
	printf("%d\n",arr[1]);
	printf("%d",p[1]);


	if(1 == p[1])
	{
		int x = 100;
		printf("%d",x);
	}
	else
	{
		//int x = 1;
		printf("%d",x-1);
	}


	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0; i < (LEN - 1);i++)
	{
		for(j = i +1;j < LEN;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	for(i = 0; i < LEN;i++)
		printf("arr[%d] = %d\n",i,arr[i]);
#endif



    return 0;
}

