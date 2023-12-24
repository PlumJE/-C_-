#include <stdio.h>
#include <math.h>

void InputArray(double arr[], int size) {
	for (int i = 0; i < size; i++)
		scanf(" %lf", &arr[i]);
}

void PrintArray(double arr[], int size) {
	for (int i = 0; i < size; i++)
		printf("%lf ", arr[i]);
	puts("");
}

double Average(double arr[], int size) {
	double average = 0;
	for (int i = 0; i < size; i++)
		average += arr[i];
	average /= size;
	return average;
}

double Variance(double arr[], int size) {
	double variance = 0;
	double aver = Average(arr, size);
	for (int i = 0; i < size; i++)
		variance += pow(arr[i] - aver, 2);
	variance /= size;
	return variance;
}

double StandardDeviation(double arr[], int size) {
	return sqrt(Variance(arr, size));
}

void num22() {
	double input[5];

	printf("5개의 실수를 입력하세요 : ");
	InputArray(input, 5);

	printf("배열 : ");
	PrintArray(input, 5);

	printf("분산 : %lf\n", Variance(input, 5));

	printf("표준편차 : %lf", StandardDeviation(input, 5));
	puts("\n");
}