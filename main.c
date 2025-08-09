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

// Function to test
int add(int a, int b) {
    return a + b;
}

// Setup function (called before each test)
void setUp(void) {}

// Teardown function (called after each test)
void tearDown(void) {}

// Test case
void test_add(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-2, 2));
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_add);

    return UNITY_END();
}
