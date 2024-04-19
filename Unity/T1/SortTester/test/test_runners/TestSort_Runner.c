#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestEverythingValid);
  RUN_TEST_CASE(Sort, TestInvalidType);
}
