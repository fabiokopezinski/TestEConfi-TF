#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort){

	RUN_TEST_CASE(Sort,TEST_WhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,WhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,WhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,WhenHaveAListOfChars);

	/*INSERTION SORT*/
	
	RUN_TEST_CASE(Sort,InsertSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,InsertSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,InsertSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,InsertSortWhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,InsertSortWorst);

	/*SHELL SORT*/

	RUN_TEST_CASE(Sort,ShellSortWhenHaveAListOfChars);

	/*SELECTION SORT*/
	RUN_TEST_CASE(Sort,SelectionSortWhenHaveAListOfChars);

	/*QUICK SORT*/
	RUN_TEST_CASE(Sort,QuickSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,QuickSortWorst);

	/*HEAP SORT*/
	RUN_TEST_CASE(Sort,HeapSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,HeapSortWorst);

	RUN_TEST_CASE(Sort,GetElapsed);
	RUN_TEST_CASE(Sort,GetSwaps);
	RUN_TEST_CASE(Sort,GetComparisons);

}