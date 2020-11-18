#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort){

	/*MERGE SORT*/
	RUN_TEST_CASE(Sort,WhenHaveOneNumbersIguals);
	RUN_TEST_CASE(Sort,SingleTest);
	RUN_TEST_CASE(Sort,SortWorst);
	RUN_TEST_CASE(Sort,WhenSortingNumberNegative);

	/*INSERTION SORT*/
	
	RUN_TEST_CASE(Sort,InsertSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,InsertSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,InsertSortWorst);
	RUN_TEST_CASE(Sort,InsertSortSingleTest);
	

	/*SHELL SORT*/

	RUN_TEST_CASE(Sort,ShellSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,ShellSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,ShellSortWorst);
	RUN_TEST_CASE(Sort,ShellSingleSort);

	/*SELECTION SORT*/
	RUN_TEST_CASE(Sort,SelectionSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,SelectionSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,SelectionSortWorst);
	RUN_TEST_CASE(Sort,SelectionSingleSort);

	/*QUICK SORT*/
	RUN_TEST_CASE(Sort,QuickSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,QuickSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,QuickSortWorst);
	RUN_TEST_CASE(Sort,QuickSortSingle);
	

	/*HEAP SORT*/
	RUN_TEST_CASE(Sort,HeapSortWhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,HeapSortWhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,HeapSortWorst);
	RUN_TEST_CASE(Sort,HeapSortSingle);

	RUN_TEST_CASE(Sort,GetElapsed);
	RUN_TEST_CASE(Sort,GetSwaps);
	RUN_TEST_CASE(Sort,GetComparisons);

}