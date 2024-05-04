#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestEverythingValid);
  RUN_TEST_CASE(Sort, TestInvalidType);
  RUN_TEST_CASE(Sort, TestInvalidIntType);
  RUN_TEST_CASE(Sort, TestInvalidEmptyType);
  RUN_TEST_CASE(Sort, TestValidButWrongType);
  RUN_TEST_CASE(Sort, TestInvalidAlgorithm);
  RUN_TEST_CASE(Sort, TestInvalidCharAlgorithm);
  RUN_TEST_CASE(Sort, TestWrongBiggerLenght);
  RUN_TEST_CASE(Sort, TestInvalidCharLenght);
  RUN_TEST_CASE(Sort, TestOutOfOrderArray);
  RUN_TEST_CASE(Sort, TestTwoValuesArray);
  RUN_TEST_CASE(Sort, TestTwentyValuesArray);
  RUN_TEST_CASE(Sort, TestSameValuesArray);
  RUN_TEST_CASE(Sort, TestOneValueArray);
  RUN_TEST_CASE(Sort, TestOrderedArray);
  RUN_TEST_CASE(Sort, TestLowerHalfArray);
  RUN_TEST_CASE(Sort, TestUpperHalfArray);
  //RUN_TEST_CASE(Sort, TestEmptyArray);
  //RUN_TEST_CASE(Sort, TestFloatValueArray);
  //RUN_TEST_CASE(Sort, TestCharValueArray);
  //RUN_TEST_CASE(Sort, TestNegativeValuesArray);
}
