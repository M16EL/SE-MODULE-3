//1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int current = 1;
    int next;
    int n = 20;

    
    printf("%d ", current); 
    next = current * 2;
    printf("%d ", next); 
    current = next;
    next = current * 1.5;
    printf("%d ", (int)next); 
    current = (int)next;

    
    for (int i = 3; i < n; i++) {
        if (i % 2 == 0) {
            next = current * 2; 
        } else {
            next = current * 3; 
        }
        printf("%d ", next);
        current = next;
    }

    return 0;
}

