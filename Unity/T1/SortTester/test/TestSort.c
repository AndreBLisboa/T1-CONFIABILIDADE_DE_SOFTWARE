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

void ValidTesting(int *a, int length, int index){
  const char* type = "On";
  if (index<2){
    TEST_ASSERT_EQUAL(0, sort(a, length, (char *)type, index));
  }
  else if (index >= 2 && index < 5){
    type = "On2";
    TEST_ASSERT_EQUAL(0, sort(a, length, (char *)type, index));
  }
  else{
    type = "Onlogn";
    TEST_ASSERT_EQUAL(0, sort(a, length, (char *)type, index));
  }
}

void InvalidTesting(int *a, int length, int index){
  const char* type = "On2";
  if (index<2){
    TEST_ASSERT_EQUAL(1, sort(a, length, (char *)type, index));
  }
  else if (index >= 2 && index < 5){
    type = "Onlogn";
    TEST_ASSERT_EQUAL(1, sort(a, length, (char *)type, index));
  }
  else{
    type = "On";
    TEST_ASSERT_EQUAL(1, sort(a, length, (char *)type, index));
  }
}

TEST(Sort, TestEverythingValid)
{
    int a[] = {1, 2, 3, 4, 5};
    int length = 5;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestInvalidType)
{
    int a[] = {1, 2, 3, 4, 5};
    int length = 5;
    const char* type = "T1";

    for (int i=0; i<8; i++){
      TEST_ASSERT_EQUAL(1, sort(a, length, (char *)type, i));
    }

}

TEST(Sort, TestOutOfOrderArray)
{
    int a[] = {2, 3, 1, 5, 4};
    int length = 5;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestWrongBiggerLenght)
{
    int a[] = {2, 3, 1, 5, 4};
    int length = 6;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestWrongSmallerLenght)
{
    int a[] = {2, 3, 1, 5, 4};
    int length = 4;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestTwoValuesArray)
{
    int a[] = {2, 1};
    int length = 2;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestTwentyValuesArray)
{
    int a[] = {19, 17, 15, 13, 11, 9, 7, 5, 3, 1, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0};
    int length = 20;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestSameValuesArray)
{
    int a[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int length = 10;

    for (int i=0; i<8; i++){
      ValidTesting(a, length, i);
    }
}

TEST(Sort, TestValidButWrongType)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;

    for (int i=0; i<8; i++){
      InvalidTesting(a, length, i);
    }
}