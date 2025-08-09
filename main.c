#include <stdio.h>
#include "demo.h"

int main() {
    printf("Sum: %d\n", sum(5, 3));
    printf("Diff: %d\n", diff(5, 3));
    printf("Product: %d\n", product(5, 3));
    printf("Division: %.2f\n", division(10, 2));
    printf("Square: %d\n", square(4));
    return 0;
}



#include "unity.h"
#include "demo.h"

void setUp(void) {
    printf("Starting a new test...\n");
}

void tearDown(void) {
    printf("Test finished.\n");
}

void test_sum_pos(void) {
    TEST_ASSERT_EQUAL(30, sum(10, 20)); // checks if 10+20 == 30
}

void test_diff_pos(void) {
    TEST_ASSERT_EQUAL(-10, diff(10, 20)); // checks if 10-20 == -10
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_sum_pos);
    RUN_TEST(test_diff_pos);

    return UNITY_END();
}
