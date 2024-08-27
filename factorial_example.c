#include <stdio.h>

long factorial(int n);

int main() {
    long result = factorial(5);
    printf("The factorial of 5 is: %ld\n", result);
    return 0;
}

long factorial(int n) {
    if (n > 0) {
        return n*factorial(--n);
        
    } else {
        return 1;
        
    }
}