#include "gtest/gtest.h"
#include "day-of-year.hpp"

#include <iostream>

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest)
{
  ASSERT_TRUE(false);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, 2012LeapYear)
{
  ASSERT_EQ(dayOfYear(12, 31, 2012), 366);
}

TEST(DayOfYearTestSuite, 2013NonLeapYear)
{
  ASSERT_EQ(dayOfYear(12, 31, 2013), 365);
}