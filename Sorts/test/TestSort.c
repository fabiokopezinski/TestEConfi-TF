#include "unity.h"
#include "unity_fixture.h"
#include<string.h>
#include<stdlib.h>
#define SIZEARRAY 4

void merge_sort(int* vet,int n);
void insertion_sort(int *array,int size);
void shell_sort(int *vet, int size);
void selection_sort(int *vet, int tam);
void quick_sort(int vet[], int left, int right);
void heap_sort(int vet[], int n);
int* sort_array(int *vet, int size, int method);
double get_elapsed_time();
int get_swaps();
int get_comparisons();


TEST_GROUP(Sort);

TEST_SETUP(Sort){

}

TEST_TEAR_DOWN(Sort){

}

TEST(Sort,WhenSortingNumberNegative){
	int list[SIZEARRAY]={-1,3,2,4};
	int expected[SIZEARRAY]={-1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,5);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,WhenHaveOneNumbersIguals){
	int list[SIZEARRAY]={1,2,3,1};
	int *expected[SIZEARRAY]={1,1,2,3};
	int *retur=sort_array(list,SIZEARRAY,5);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}
TEST(Sort,SingleTest){
	int list[SIZEARRAY]={1,2,5,4};
	int expected[SIZEARRAY]={1,2,4,5};
	int *retur=sort_array(list,SIZEARRAY,5);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}


TEST(Sort,SortWorst){

	int list[SIZEARRAY]={5,4,2,1};
	int expected[SIZEARRAY]={1,2,4,5};
	int *retur=sort_array(list,SIZEARRAY,5);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}



  /*    INSERTION SORT              */

TEST(Sort,InsertSortWhenHaveDuplicatedValues){
	int list[SIZEARRAY]={1,2,3,1};
	int expected[SIZEARRAY]={1,1,2,3};
	int *retur=sort_array(list,SIZEARRAY,1);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}

}

TEST(Sort,InsertSortWhenSortingNumberNegative){
	int list[SIZEARRAY]={-1,3,2,4};
	int expected[]={-1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,1);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}
TEST(Sort,InsertSortSingleTest){
	int list[SIZEARRAY]={1,4,2,5};
	int expected[SIZEARRAY]={1,2,4,5};
	int *retur=sort_array(list,SIZEARRAY,1);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,InsertSortWorst){
	int list[SIZEARRAY]={4,3,2,1};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,1);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

/*	SHELL SORT*/


TEST(Sort,ShellSortWhenHaveDuplicatedValues){
	int list[SIZEARRAY]={1,2,3,1};
	int expected[SIZEARRAY]={1,1,2,3};
	int *retur=sort_array(list,SIZEARRAY,2);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}

}

TEST(Sort,ShellSortWhenSortingNumberNegative){
	int list[SIZEARRAY]={-1,3,2,4};
	int expected[SIZEARRAY]={-1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,2);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}


TEST(Sort,ShellSingleSort){

	int list[SIZEARRAY]={1,3,2,4};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,2);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,ShellSortWorst){
	int list[SIZEARRAY]={4,3,2,1};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,2);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}


/*SELECTION SORT*/

TEST(Sort,SelectionSortWhenHaveDuplicatedValues){
	int list[SIZEARRAY]={1,2,3,1};
	int *expected[SIZEARRAY]={1,1,2,3};
	int *retur=sort_array(list,SIZEARRAY,0);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}

}

TEST(Sort,SelectionSortWhenSortingNumberNegative){
	int list[SIZEARRAY]={-1,3,2,4};
	int expected[SIZEARRAY]={-1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,0);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}


TEST(Sort,SelectionSortWorst){
	int list[SIZEARRAY]={4,3,2,1};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,0);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,SelectionSingleSort){
	int list[SIZEARRAY]={3,4,1,5};
	int expected[SIZEARRAY]={1,3,4,5};
	int *retur=sort_array(list,SIZEARRAY,0);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}


/*QUICK SORT*/

TEST(Sort,QuickSortWhenHaveDuplicatedValues){
	int list[SIZEARRAY]={1,2,3,1};
	int expected[SIZEARRAY]={1,1,2,3};
	int *retur=sort_array(list,SIZEARRAY-1,3);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}

}

TEST(Sort,QuickSortWhenSortingNumberNegative){
	int list[SIZEARRAY]={-1,3,2,4};
	int expected[SIZEARRAY]={-1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY-1,3);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,QuickSortWorst){
	
	int list[SIZEARRAY]={3,2,1,0};
	int expected[SIZEARRAY]={0,1,2,3};
	int *retur=sort_array(list,SIZEARRAY-1,3);
	
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
	
}

TEST(Sort,QuickSortSingle){
	int list[SIZEARRAY]={3,1,2,4};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY-1,3);
	
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}


/*HEAP SORT*/

TEST(Sort,HeapSortWhenHaveDuplicatedValues){
	int list[SIZEARRAY]={1,2,3,1};
	int expected[SIZEARRAY]={1,1,2,3};
	int *retur=sort_array(list,SIZEARRAY,4);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}

}

TEST(Sort,HeapSortWhenSortingNumberNegative){
	int list[SIZEARRAY]={-1,3,2,4};
	int expected[SIZEARRAY]={-1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,4);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,HeapSortWorst){
	int list[SIZEARRAY]={4,3,2,1};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,4);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,HeapSortSingle){
	int list[SIZEARRAY]={3,4,2,1};
	int expected[SIZEARRAY]={1,2,3,4};
	int *retur=sort_array(list,SIZEARRAY,4);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],retur[i]);
	}
}

TEST(Sort,GetElapsed){
	get_elapsed_time();
}

TEST(Sort,GetSwaps){
	get_swaps();
}

TEST(Sort,GetComparisons){
	get_comparisons();
}