#include "test-framework/unity.h"
#include "single_test_that_passes.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_add(void)
{
   TEST_ASSERT_EQUAL_INT(2, add(1, 1));
}

int main(void)
{
   UnityBegin("test_single_test_that_passes.c");

   RUN_TEST(test_add);

   return UnityEnd();
}
