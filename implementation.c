#include <stdio.h>
#include <math.h>
#include <string.h>

// Function prototypes
void reverseNumber();
void primeCheck();
void fibonacci();
int factorial(int n);
void palindrome();
void armstrong();
void swapNumbers();
void linearSearch();
void bubbleSort();
void matrixAddition();
void stringLength();
void binarySearch();
void evenOdd();

int main() {
    int choice, n;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Reverse Number\n");
        printf("2. Check Prime number\n");
        printf("3. Fibonacci series\n");
        printf("4. Factorial\n");
        printf("5. Palindrome\n");
        printf("6. Armstrong\n");
        printf("7. Swap numbers\n");
        printf("8. Linear search\n");
        printf("9. Bubble sort\n");
        printf("10. Matrix addition\n");
        printf("11. Length of string\n");
        printf("12. Binary Search\n");
        printf("13. Even and Odd\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: reverseNumber(); break;
            case 2: primeCheck(); break;
            case 3: fibonacci(); break;
            case 4:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factorial(n));
                break;
            case 5: palindrome(); break;
            case 6: armstrong(); break;
            case 7: swapNumbers(); break;
            case 8: linearSearch(); break;
            case 9: bubbleSort(); break;
            case 10: matrixAddition(); break;
            case 11: stringLength(); break;
            case 12: binarySearch(); break;
            case 13: evenOdd(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    } while (choice != 0);

    return 0;
}

// 1. Reverse Number
void reverseNumber() {
    int n, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("Reversed Number = %d\n", rev);
}

// 2. Prime Check
void primeCheck() {
    int n, i, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime\n");
        return;
    }

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");
}

// 3. Fibonacci
void fibonacci() {
    int n, a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// 4. Factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// 5. Palindrome
void palindrome() {
    int n, rev = 0, original;
    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

// 6. Armstrong
void armstrong() {
    int n, original, rem, result = 0, digits = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    while (original != 0) {
        rem = original % 10;
        result += pow(rem, digits);
        original /= 10;
    }

    if (result == n)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");
}

// 7. Swap Numbers
void swapNumbers() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
}

// 8. Linear Search
void linearSearch() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return;
        }
    }

    printf("Element not found\n");
}

// 9. Bubble Sort
void bubbleSort() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 10. Matrix Addition
void matrixAddition() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], C[r][c];

    printf("Enter Matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}

// 11. String Length
void stringLength() {
    char str[100];
    printf("Enter string: ");
    scanf(" %[^\n]", str);

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
        length++;

    printf("Length = %d\n", length);
}

// 12. Binary Search
void binarySearch() {
    int n, key;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return;
        } else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Element not found\n");
}

// 13. Even/Odd
void evenOdd() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}