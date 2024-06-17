//WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>


void reverse(char str[]);
int checkPalindrome(char str[]);

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    
    reverse(input);
    printf("Reversed string: %s\n", input);

   
    if (checkPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int checkPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}



//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage

#include<stdio.h>
struct employee{
	int no;
	char name[100];
	char address[100];
	int age;
};
int main(){
	
	struct employee e[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter no of employee:");
		scanf("%d",&e[i].no);
		printf("Enter name of employee:");
		scanf("%s",&e[i].name);
//		printf("Enter address of employee:");
//		scanf("%s",&e[i].address);
		while (getchar() != '\n');
        printf("Enter address of employee: ");
        fgets(e[i].address, sizeof(e[i].address), stdin);
		printf("Enter age of employee:");
		scanf("%d",&e[i].age);
	}
	
	for(i=0;i<5;i++){
		printf("%d is id and %s is name and %s is address and %d is age of employee %d\n",e[i].no,e[i].name,e[i].address,e[i].age,i+1);
	}
	
	
	return 0;
}

