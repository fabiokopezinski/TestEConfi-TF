#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort){



	/*MERGE SORT*/
	RUN_TEST_CASE(Sort,TEST_WhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,WhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,WhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,WhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,SortWorst);

	/*INSERTION SORT*/
	
	RUN_TEST_CASE(Sort,InsertSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,InsertSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,InsertSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,InsertSortWhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,InsertSortWorst);

	/*SHELL SORT*/

	RUN_TEST_CASE(Sort,ShellSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,ShellSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,ShellSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,ShellSortWhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,ShellSortWorst);

	/*SELECTION SORT*/
	RUN_TEST_CASE(Sort,SelectionSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,SelectionSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,SelectionSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,SelectionSortWhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,SelectionSortWorst);

	/*QUICK SORT*/
	RUN_TEST_CASE(Sort,QuickSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,QuickSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,QuickSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,QuickSortWhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,QuickSortWorst);

	/*HEAP SORT*/
	RUN_TEST_CASE(Sort,HeapSortWhenHaveAListOfChars);
	RUN_TEST_CASE(Sort,HeapSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,HeapSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,HeapSortWhenHaveTwoDifferentNumbers);
	RUN_TEST_CASE(Sort,HeapSortWorst);

	RUN_TEST_CASE(Sort,GetElapsed);
	RUN_TEST_CASE(Sort,GetSwaps);
	RUN_TEST_CASE(Sort,GetComparisons);

}