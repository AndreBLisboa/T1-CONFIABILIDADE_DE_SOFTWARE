#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestEverythingValid)
{
    int a[] = {1, 2, 3, 5, 4};
    int length = 5;
    const char* type = "On2"; // 0 e 1 = On, 2 a 4 = On2, 5 a 7 = Onlogn
    int algorithm = 3; // 0 e 1 = On, 2 a 4 = On2, 5 a 7 = Onlogn
    
    TEST_ASSERT_EQUAL(0, sort(a, length, (char *)type, algorithm));
}

TEST(Sort, TestInvalidType)
{
  // This test will fail
  // TEST_ASSERT_EQUAL(2, foo(1,2));
}
