#include<stdio.h>



//int main()
//{
//	int n=0,sum=0,i=0,a=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		sum += a;
//	}
//	printf("average=%.2f", sum*1.0 / n);
//}

//void sorted(int arr[],int sz)
//{
//	int i,tmp;
//	for (i = 0; i < sz-1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//}
//int find(int arr[], int x,int y)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		if (arr[i] == y)
//		{
//			return i;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 0 }, arr1[] = {0};
//	int n = 0,i=0,a;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &a);
//		arr[i] = a;
//		arr1[i] = a;
//	}
//
//	sorted(&arr1, n);
//	int max = find(arr1, n, arr1[n - 1]);
//	int min = find(arr1, n, arr1[0]);
//	int tmp;
//	tmp = arr[min];
//	arr[min] = arr[0];
//	arr[0] = tmp;
//	tmp = arr[max];
//	arr[max] = arr[n - 1];
//	arr[n - 1] = tmp;
//	printf("After swapped:");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int n,i,j=0,k=0;
//	int arr[10];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
//	int max = arr[0],min=arr[0];
//	for (i = 0; i < n; i++)
//	{
//		max < arr[i] ? max = arr[i],j=i : max;
//		min > arr[i] ? min = arr[i] ,k=i: min;
//	}
//	int tmp;
//	tmp = arr[0];
//	arr[0] = arr[k];
//	arr[k] = tmp;
//	tmp = arr[n-1];
//	arr[n-1] = arr[j];
//	arr[j] = tmp;
//	printf("After swapped:");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

//int main()
//{
//	int n, i, j = 0, k = 0,tmp;
//	int arr[10];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
//	for (i = 0; i < n; i++)
//	{
//		for (j=i; j < n; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//				
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//
//	return 0;
//}


//输入一个正整数n(1<n<=10)，再输入n个整数，编写程序将一维数组中的数按逆序重新存放并输出，程序中不使用辅助数组。

//int main()
//{
//	int arr[10];
//	int n,i,j,tmp;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
//	i = 0, j = n-1;
//	while (i < j)
//	{
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//
//	return 0;
//}


int main()
{
	int arr[10];
	int n, i, j, tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);




	return 0;
}