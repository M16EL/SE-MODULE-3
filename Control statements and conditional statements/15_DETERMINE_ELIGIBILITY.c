#include <stdio.h>

int main() {
    int phy, chem, maths, total, maths_phy;

    printf("Input the marks obtained in Physics : ");
    scanf("%d", &phy);
    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chem);
    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &maths);
    printf("Total marks of Maths, Physics and Chemistry : ");
    scanf("%d", &total);
    printf("Total marks of Maths and Physics : ");
    scanf("%d", &maths_phy);

    if (phy >= 55 && chem >= 50 && maths >= 65 && total >= 190) {
        printf("The candidate is eligible.\n");
    } else if (maths_phy >= 140 && maths_phy < 190) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

