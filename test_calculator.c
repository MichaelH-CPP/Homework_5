#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_add_positive_numbers(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_positive_and_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(1, add(5, -4));
}

void test_add_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(-7, add(-3, -4));
}

void test_add_zero(void)
{
    TEST_ASSERT_EQUAL(5, add(5, 0));
    TEST_ASSERT_EQUAL(0, add(0, 0));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    return UNITY_END();
}