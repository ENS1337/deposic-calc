#include <ctest.h>
#include <deposit.h>

CTEST(simple_test, check)
{
    int result = check (12313,234);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}
////////////////////////////////////
CTEST(test_sum9999days1, check)
{
    int result = check (9999,1);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////////////////////////////////////
CTEST(test_sum11111days_negative, check)
{
    int result = check (11111,-1);

    int expected = 0;

    ASSERT_EQUAL(expected, result);
}
////////////////////////////////////
CTEST(test_sum11111days366, check)
{
    int result = check (11111,366);

    int expected = 0;

    ASSERT_EQUAL(expected, result);
}
////////////////////////////////////
CTEST(test_sum10000days1, calc_Bklad)
{
    int result = Bklad (10000,1);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////////////////////////////////////
CTEST(test_sum10000days30, calc_Bklad)
{
    int result = Bklad (10000,30);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////////////////////////////////////
CTEST(test_sum100000days30, calc_Bklad)
{
    int result = Bklad (100000,30);

    // Then
    int expected = 90000;
    ASSERT_EQUAL(expected, result);
}
/////////////////////////////////////
CTEST(test_sum10000days31, calc_Bklad)
{
    int result = Bklad (10000,31);

    // Then
    int expected = 10200;
    ASSERT_EQUAL(expected, result);
}
//////////////////////////////////////
CTEST(test_sum100000days31, calc_Bklad)
{
    int result = Bklad (100000,31);

    // Then
    int expected = 103000;
    ASSERT_EQUAL(expected, result);
}
//////////////////////////////////////
CTEST(test_sum10000days121, calc_Bklad)
{
    int result = Bklad (10000,121);

    // Then
    int expected = 10600;
    ASSERT_EQUAL(expected, result);
}
//////////////////////////////////////
CTEST(test_sum100000days121, calc_Bklad)
{
    int result = Bklad (100000,121);

    // Then
    int expected = 108000;
    ASSERT_EQUAL(expected, result);
}
//////////////////////////////////////
CTEST(test_sum10000days241, calc_Bklad)
{
    int result = Bklad (10000,241);

    // Then
    int expected = 12200;
    ASSERT_EQUAL(expected, result);
}
//////////////////////////////////////
CTEST(test_sum100000days241, calc_Bklad)
{
    int result = Bklad (100000,241);

    // Then
    int expected = 115000;
    ASSERT_EQUAL(expected, result);
}
//////////////////////////////////////
CTEST(test_sum110000days241, calc_Bklad)
{
    int result = Bklad (110000,365);

    // Then
    int expected = 123222;
    ASSERT_EQUAL(expected, result);
}



