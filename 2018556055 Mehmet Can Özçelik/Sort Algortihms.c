// Sort Algortihms.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>
#include <time.h>


//Insertion Sort Number
void insertionsort(int num[], int n) {
	int i, value, j;
	for (i = 1; i < n; i++) {
		value = num[i];
		j = i - 1;
	   
		for (j;j >= 0 && num[j] > value;j--) {
			num[j + 1] = num[j];

        }
		num[j + 1] = value;
	}
}
//Insertion Sort Name
void insertionsortchar(char name[], int x) {
	int i, value, j;
	for (i = 1; i < x; i++) {
		value = name[i];
		j = i - 1;

		for (j;j >= 0 && name[j] > value;j--) {
			name[j + 1] = name[j];

		}
		name[j + 1] = value;
	}
}


//Bubble Sort Number
void bubblesort(int num[], int n) {
	int i, temp, j;
	for (j = 0;j < (n - 1);j++) {

		for (i = 0; i < (n - 1); i++) {

			if (num[i] > num[i + 1]) {
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}

		}
	}
}
//Bubble Sort Name 
void bubblesortchar(char name[], int x) {
	int y, tempc, z;
	for (z = 0; z < (x - 1);z++) {
		for (y = 0;y < (x - 1);y++) {
			if (name[y] > name[y + 1]) {
				tempc = name[y];
				name[y] = name[y + 1];
				name[y + 1] = tempc;
			}
		}
	}
}

//Selection Sort Number
void selectionsort(int num[], int n)
{
	int   i, j, temp, min;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
			if (num[min] > num[j])
				min = j;
		temp = num[min];
		num[min] = num[i];
		num[i] = temp;
	}
}
//Selection Sort Name
void selectionsortchar(char name[], int x) {
	int   i, j, temp, min;
	for (i = 0; i < x - 1; i++) {
		min = i;
		for (j = i + 1; j < x; j++)
			if (name[min] > name[j])
				min = j;
		temp = name[min];
		name[min] = name[i];
		name[i] = temp;
	}

}
// Merge Sort Number 
void merge(int num[], int a, int b, int c)
{
	int i, j, k;
	int num1 = b - a + 1;
	int num2 = c - b;
	int L[15], R[15];

	for (i = 0; i < num1; i++)
		L[i] = num[a + i];
	for (j = 0; j < num2; j++)
		R[j] = num[b + 1 + j];

	i = 0;
	j = 0;
	k = a;
	while (i < num1 && j < num2)
	{
		if (L[i] <= R[j]) {
			num[k] = L[i];
			i++;
		}
		else {
			num[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < num1) {
		num[k] = L[i];
		i++;
		k++;
	}
	while (j < num2) {
		num[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int num[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(num, l, m);
		mergeSort(num, m + 1, r);
		merge(num, l, m, r);
	}
}

//Merge Sort Name
void mergechar(char name[], int a, int b, int c)
{
	int i, j, k;
	int num1 = b - a + 1;
	int num2 = c - b;
	int L[17], R[17];

	for (i = 0; i < num1; i++)
		L[i] = name[a + i];
	for (j = 0; j < num2; j++)
		R[j] = name[b + 1 + j];

	i = 0;
	j = 0;
	k = a;
	while (i < num1 && j < num2)
	{
		if (L[i] <= R[j]) {
			name[k] = L[i];
			i++;
		}
		else {
			name[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < num1) {
		name[k] = L[i];
		i++;
		k++;
	}
	while (j < num2) {
		name[k] = R[j];
		j++;
		k++;
	}
}
void mergeSortchar(char name[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSortchar(name, l, m);
		mergeSortchar(name, m + 1, r);
		mergechar(name, l, m, r);
	}
}


int main()
{
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	int num[] = { 2,0,1,8,5,5,6,0,5,5 };
	char name[] = "mehmetcan ozcelik";
	int n = 10, x = 17, i;

	bubblesort(num, n);
	bubblesortchar(name, x);

	for (i = 0;i < 10;i++) {
		printf("%d  ", num[i]);
	}
	for (i = 0;i < 17;i++) {
		printf("%c  ", name[i]);
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Bubble Sort Time : %lf s\n", cpu_time_used);

	start = clock();
	insertionsort(num, n);
	insertionsortchar(name, x);

	for (i = 0;i < 10;i++) {
		printf("%d  ", num[i]);
	}
	for (i = 0;i < 17;i++) {
		printf("%c  ", name[i]);
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Insertion Sort Time : %lf s\n", cpu_time_used);

	start = clock();
	selectionsort(num, n);
	selectionsortchar(name, x);

	for (i = 0;i < 10;i++) {
		printf("%d  ", num[i]);
	}
	for (i = 0;i < 17;i++) {
		printf("%c  ", name[i]);
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Selection Sort Time : %lf s\n", cpu_time_used);

	start = clock();
	mergeSort(num, 0, 9);
	mergeSortchar(name, 0, 16);

	for (i = 0;i < 10;i++) {
		printf("%d  ", num[i]);
	}
	for (i = 0;i < 17;i++) {
		printf("%c  ", name[i]);
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Merge Sort Time : %lf s\n", cpu_time_used);





}


