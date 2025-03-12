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

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    return UNITY_END();
}