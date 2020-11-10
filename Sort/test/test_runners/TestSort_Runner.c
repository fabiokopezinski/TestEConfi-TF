#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort){

	RUN_TEST_CASE(Sort,TEST_WhenHaveDuplicatedValues);
	RUN_TEST_CASE(Sort,WhenSortingNumberNegative);
	RUN_TEST_CASE(Sort,WhenHaveTwoDifferentNumbers);
}