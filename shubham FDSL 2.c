/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i, p, f = 0;

    
    printf("Enter how many array elements you want: ");
    scanf("%d", &n);
int a[n];

    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("What number do you want to search in the array? ");
    scanf("%d", &p);

    
    for (i = 0; i < n; i++) {
        if (a[i] == p) {
            f = 1;
            break;
        }
    }


    if (f == 1) {
        printf("The number you want to search is present in the array.\n");
    } else {
        printf("The number you want to search is not present in the array.\n");
    }

    return 0;
}