#include <stdio.h>
#include <string.h>

void print_test1()
{
	printf("hello world1\n");
}

//Êý¾Ý½»»»Ë³Ðò
void int_swap(int *first, int *second)
{
	int tmp;
	tmp = *first;
	*first = *second;
	*second = tmp;
}

void float_swap(float *first, float *second)
{
	float tmp;
	tmp = *first;
	*first = *second;
	*second = tmp;
}

//Ã°ÅÝÅÅÐòËã·¨
void bubble_sort_tmp(int data[], int n)
{ 
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (data[j] > data[j + 1]) {
				int_swap(&data[j],&data[j+1]);
			}
		}
	}
}

void bubble_sort(int data[], int n)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (data[j] > data[j + 1]) {
				int_swap(&data[j], &data[j + 1]);
				flag++;
			}
		}
		if (flag == 0) {
			break;
		}
		else {
			flag = 0;
		}
	}
}

void quick_sort(int data[],int n)
{

}

void insertion_sort(int data[], int n)
{
	int i, j, key;
	for (j = 1; j < n; j++) {
		key = data[j];
		i = j - 1;
		while ((i >= 0) && (data[i] > key)) {
			data[i + 1] = data[i];
			i--;
		}
		data[i+1] = key;
	}
}