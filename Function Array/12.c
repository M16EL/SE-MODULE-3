//WAP to accept 5 students name and store it in array

#include <stdio.h>

int main() {
	int i;
    char name[5][100];

    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s",&name[i]);
    }
    
    for (i = 0; i < 5; i++) {
        printf("%s\n",name[i]);
    }

    return 0;
}

