/* produces the reminder when x is divided by y, and thus is zero when y divides x exactly. For example, a year is a leap year if it is divisible by 4 but not by 100, expect that years divisible by 400 are leap years. therefore */

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
    printf("%d is a leap year\n", year);
} else {
    printf("%d is not a leap year\n", year);
}
