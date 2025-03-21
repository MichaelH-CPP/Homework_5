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

void test_add_overflow(void)
{
    int result = add(INT_MAX, 1);
    TEST_ASSERT_TRUE(result < 0);
}

void test_add_underflow(void)
{
    int result = add(INT_MIN, -1);
    TEST_ASSERT_TRUE(result > 0);
}

void test_subtract_positive_numbers(void)
{
    TEST_ASSERT_EQUAL(5, subtract(8, 3));
}

void test_subtract_positive_and_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(9, subtract(5, -4));
}

void test_subtract_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(1, subtract(-3, -4));
}

void test_subtract_zero(void)
{
    TEST_ASSERT_EQUAL(5, subtract(5, 0));
    TEST_ASSERT_EQUAL(0, subtract(0, 0));
}

void test_subtract_overflow(void)
{
    int result = subtract(INT_MIN, -1);
    TEST_ASSERT_TRUE(result < 0);
}

void test_subtract_underflow(void)
{
    int result = subtract(INT_MIN, 1);
    TEST_ASSERT_TRUE(result > 0);
}

void test_multiply_positive_numbers(void)
{
    TEST_ASSERT_EQUAL(15, multiply(3, 5));
}

void test_multiply_positive_and_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(-20, multiply(5, -4));
}

void test_multiply_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(12, multiply(-3, -4));
}

void test_multiply_zero(void)
{
    TEST_ASSERT_EQUAL(0, multiply(5, 0));
    TEST_ASSERT_EQUAL(0, multiply(0, 0));
}

void test_multiply_overflow(void)
{
    int result = multiply(INT_MAX, 2);
    TEST_ASSERT_TRUE(result < 0);
}

void test_multiply_underflow(void)
{
    int result = multiply(INT_MIN, 2);
    TEST_ASSERT_TRUE(result > 0);
}

void test_divide_positive_numbers(void)
{
    TEST_ASSERT_EQUAL(5, divide(15, 3));
}

void test_divide_positive_and_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(-5, divide(20, -4));
}

void test_divide_negative_numbers(void)
{
    TEST_ASSERT_EQUAL(3, divide(-12, -4));
}

void test_divide_zero(void)
{
    TEST_ASSERT_EQUAL(0, divide(0, 5));
}

void test_divide_overflow(void)
{
    int result = divide(INT_MAX, 1 / 2);
    TEST_ASSERT_TRUE(result < 0);
}

void test_divide_underflow(void)
{
    int result = divide(INT_MIN, 1 / 2);
    TEST_ASSERT_TRUE(result > 0);
}

int main(void)
{
    UNITY_BEGIN();
    printf("Running Adding Tests: \n");
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_add_overflow);
    RUN_TEST(test_add_underflow);

    printf("Running Subtracting Tests: \n");
    RUN_TEST(test_subtract_positive_numbers);
    RUN_TEST(test_subtract_positive_and_negative_numbers);
    RUN_TEST(test_subtract_negative_numbers);
    RUN_TEST(test_subtract_zero);
    RUN_TEST(test_subtract_overflow);
    RUN_TEST(test_subtract_underflow);

    printf("Running Multiplying Tests: \n");
    RUN_TEST(test_multiply_positive_numbers);
    RUN_TEST(test_multiply_positive_and_negative_numbers);
    RUN_TEST(test_multiply_negative_numbers);
    RUN_TEST(test_multiply_zero);
    RUN_TEST(test_multiply_overflow);
    RUN_TEST(test_multiply_underflow);

    printf("Running Dividing Tests: \n");
    RUN_TEST(test_divide_positive_numbers);
    RUN_TEST(test_divide_positive_and_negative_numbers);
    RUN_TEST(test_divide_negative_numbers);
    RUN_TEST(test_divide_zero);
    RUN_TEST(test_divide_overflow);
    RUN_TEST(test_divide_underflow);

    return UNITY_END();
}