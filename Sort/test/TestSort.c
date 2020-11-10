#include "unity.h"
#include "unity_fixture.h"

#define SIZEARRAY 4

void merge_sort(int* vet,int n);

TEST_GROUP(Sort);

TEST_SETUP(Sort){

}

TEST_TEAR_DOWN(Sort){

}

TEST(Sort,TEST_WhenHaveDuplicatedValues){
	int list[]={1,2,3,1};
	int expected[]={1,1,2,3};

	merge_sort(list,SIZEARRAY);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}

}

TEST(Sort,WhenSortingNumberNegative){
	int list[]={-1,3,2,4};
	int expected[]={-1,2,3,4};

	merge_sort(list,SIZEARRAY);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

TEST(Sort,WhenHaveTwoDifferentNumbers){
	int list[]={1,2,2,1};
	int expected[]={1,1,2,2};

	merge_sort(list,SIZEARRAY);

	for (int i = 0; i < SIZEARRAY; ++i)
	{
		TEST_ASSERT_EQUAL(expected[i],list[i]);
	}
}

