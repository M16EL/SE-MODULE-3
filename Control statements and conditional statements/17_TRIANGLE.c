#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    
    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Triangle can be formed.\n");
    } else {
        printf("Triangle cannot be formed.\n");
    }

    return 0;
}

