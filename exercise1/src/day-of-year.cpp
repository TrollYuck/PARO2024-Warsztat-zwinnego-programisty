#include "day-of-year.hpp"
#include <array>

int dayOfYear(int month, int dayOfMonth, int year) {
    std::array<int, 12> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29;
    }

    // Calculate the day of the year
    int dayOfYear = dayOfMonth;
    for (int i = 0; i < month - 1; ++i) {
        dayOfYear += daysInMonth[i];
    }

    return dayOfYear;
}

