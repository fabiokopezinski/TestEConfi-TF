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


TEST_GROUP(Sort);

TEST_SETUP(Sort){

}

TEST_TEAR_DOWN(Sort){

}
TEST(Sort,TEST_WhenHaveDuplicatedValues){
		

	int list[]={1,2,3,1};
	
	int *expected=sort_array(list,SIZEARRAY,5);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}

}

TEST(Sort,WhenSortingNumberNegative){
	int list[]={-1,3,2,4};
	int *expected=sort_array(list,SIZEARRAY,5);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

TEST(Sort,WhenHaveTwoDifferentNumbers){
	int list[]={1,2,2,1};
	int *expected=sort_array(list,SIZEARRAY,5);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

TEST(Sort,WhenHaveAListOfChars){
	int list[SIZEARRAY]={'a','c','d','b'};
	int *expected=sort_array(list,SIZEARRAY,5);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

  /*    INSERTION SORT              */


TEST(Sort,InsertSortWhenHaveAListOfChars){
	
	int list[SIZEARRAY]={1,3,4,2};
	int *expected=sort_array(list,SIZEARRAY,1);
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

	TEST(Sort,InsertSortWhenHaveDuplicatedValues){
	int list[]={1,2,3,1};
	int *expected=sort_array(list,SIZEARRAY,1);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}

}

TEST(Sort,InsertSortWhenSortingNumberNegative){
	int list[]={-1,3,2,4};
	int *expected=sort_array(list,SIZEARRAY,1);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

TEST(Sort,InsertSortWhenHaveTwoDifferentNumbers){
	int list[]={1,2,2,1};
	int *expected=sort_array(list,SIZEARRAY,1);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

/*	SHELL SORT*/


TEST(Sort,ShellSortWhenHaveAListOfChars){
	
	int list[SIZEARRAY]={1,3,4,2};
	int *expected=sort_array(list,SIZEARRAY,2);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

/*SELECTION SORT*/

TEST(Sort,SelectionSortWhenHaveAListOfChars){
	
	int list[SIZEARRAY]={1,3,4,2};
	int *expected=sort_array(list,SIZEARRAY,0);
	
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

/*QUICK SORT*/

TEST(Sort,QuickSortWhenHaveAListOfChars){
	
	int list[SIZEARRAY]={1,3,4,2};
	int *expected=sort_array(list,SIZEARRAY,3);
	
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
	
}

/*HEAP SORT*/

TEST(Sort,HeapSortWhenHaveAListOfChars){
	
	int list[SIZEARRAY]={1,3,4,2};
	int *expected=sort_array(list,SIZEARRAY,4);
	
	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
	
}
