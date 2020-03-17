#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
	int i, j, k;
	int n1 = mid - start + 1;
	int n2 = end - mid;


	int L[n1], R[n2];


	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int start, int end)
{
	if (l < r)
	{
		int m = start+(end-l)/2;

		// Sort first and second halves
		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);

		merge(arr, start, m, r);
	}
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

/* Driver program to test above functions */
int main()
{
    int t,num;
    cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
	 cin>>num;
	 arr[i]=num;

	}

	printf("Given array is \n");
	printArray(arr, t);

	mergeSort(arr, 0, t-1);

	printf("\nSorted array is \n");
	printArray(arr,t);
	return 0;
}
