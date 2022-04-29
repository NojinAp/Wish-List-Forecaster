/*
    ==================================================
    Workshop #2 (Part-2):
    ==================================================
    Name   : Nozhin Azarpanah
    ID     : 104844212
    Email  : nazarpanah@myseneca.ca
    Section: ZAA
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2010
#define MAX_YEAR 2021
#define LOG_DAYS 3

int main()
{
    const int JAN = 1;
    const int DEC = 12;
    int year, month, valid, i;
    float morning, evening;
    float m1, m2, m3, e1, e2, e3 = 0;
    float morningsum, eveningsum, totalsum, morningav, eveningav, totalav = 0;
    printf("General Well-being Log\n======================\n");
    do {
        valid = 1;
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if (year < MIN_YEAR || year > MAX_YEAR) {
            printf("   ERROR: The year must be between 2010 and 2021 inclusive\n");
            valid = 0;
        }
        if (month > DEC || month < JAN) {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
            valid = 0;
        }
    } while (valid == 0);
    printf("\n*** Log date set! ***\n");
    switch (month) {
    case 1:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-JAN-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 2:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-FEB-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 3:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-MAR-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 4:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-APR-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 5:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-MAY-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 6:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-JUN-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;

                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 7:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-JUL-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 8:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-AUG-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                morningsum += morning;
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 9:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-SEP-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 10:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-OCT-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 11:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-NOV-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    case 12:
        for (i = 1; i <= LOG_DAYS; i++) {
            printf("\n%d-DEC-%02d\n", year, i);
            do {
                valid = 1;
                printf("   Morning rating (0.0-5.0): ");
                scanf("%f", &morning);
                if (morning < 0.0 || morning > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    m1 = morning;
                }
                if (i == 2) {
                    m2 = morning;
                }
                if (i == 3) {
                    m3 = morning;
                }
            } while (valid == 0);
            do {
                valid = 1;
                printf("   Evening rating (0.0-5.0): ");
                scanf("%f", &evening);
                if (evening < 0.0 || evening > 5.0) {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    valid = 0;
                }
                if (i == 1) {
                    e1 = evening;
                }
                if (i == 2) {
                    e2 = evening;
                }
                if (i == 3) {
                    e3 = evening;
                }
            } while (valid == 0);
        }
        break;
    }
    morningsum = m1 + m2 + m3;
    eveningsum = e1 + e2 + e3;
    totalsum = morningsum + eveningsum;
    morningav = morningsum / LOG_DAYS;
    eveningav = eveningsum / LOG_DAYS;
    totalav = (totalsum / LOG_DAYS) / 2;
    printf("\nSummary\n=======\nMorning total rating: %.3f", morningsum);
    printf("\nEvening total rating: %.3f", eveningsum);
    printf("\n----------------------------\nOverall total rating: %.3f", totalsum);
    printf("\n\nAverage morning rating:  %.1f", morningav);
    printf("\nAverage evening rating:  %.1f", eveningav);
    printf("\n----------------------------\nAverage overall rating:  %.1f", totalav);
    return 0;
}