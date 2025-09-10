#include <stdio.h>

int main() {
    int month1, day1, year1, month2, day2, year2;
    int first_earlier = 0;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 != year2)
        first_earlier = year1 < year2;
    else if (month1 != month2)
        first_earlier = month1 < month2;
    else
        first_earlier = day1 < day2;

if (first_earlier == 0)
    printf("The first date is not earlier than the second date.");
else
    printf("The first day is earlier than the second date.");

return 0;
}
