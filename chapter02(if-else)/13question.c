//given three pts. write a prog to check if all the three pts fall in one st.line
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3, m1, m2;

    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Enter x3: ");
    scanf("%lf", &x3);
    printf("Enter y3: ");
    scanf("%lf", &y3);

    // slope of st line
        m1 = (y2 - y1) / (x2 - x1);
        m2 = (y3 - y2) / (x3 - x2);

        if (m1 == m2) {
            printf("Points fall on a straight line.\n");
        } else {
            printf("Points do not fall on a straight line.\n");
        }
    

    return 0;
}
