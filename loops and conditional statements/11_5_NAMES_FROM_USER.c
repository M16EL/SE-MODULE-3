+#include<stdio.h>

int main(){
	char names[100];
	printf("Enter names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names);
        printf("%d. %s\n", i + 1, names);
    }
//    printf("\nNames entered:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("%d. %s\n", i + 1, names);
//    }
    return 0;

}
