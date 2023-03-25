ASSIGNMENT 4
OUESTION 1:check the given string is palindrome or not.

CODE:
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, a, palindrome=1;
    printf("Enter a string: ");
    gets(str);
    a = strlen(str);
    for(i = 0; i < a/2; i++) 
    {
      if(str[i] != str[a-1-i]) 
        {
          palindrome = 0; 
          break;
        }
    }
    
    if(palindrome) 
    {
      printf("%s is a palindrome\n", str);
    } 
    else 
    {
      printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}

OUTPUT:
Enter a string: 2002
2002 is a palindrome

Enter a string: 1234
1234 is not a palindrome



QUESTION 2:Count No. Of vowels in a given text.

CODE:
#include <stdio.h>
#include <string.h>

int main() 
{
    char a[100];
    int i, n, s = 0;
    
    printf("Enter some text: ");
    gets(a);
    
    n = strlen(a);
    
    for(i = 0; i < n; i++) 
    {
        switch(a[i]) 
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                s++;
                break;
        }
    }
    
    printf("Number of vowels: %d\n", s);
    
    return 0;
}
OUTPUT:
Enter some text: basil
Number of vowels: 2

OUESTION 3:Arrange names in alphabetical order.

CODE:
#include <stdio.h>
#include <string.h>

int main() 
{
    char names[10][50], temp[50];
    int i, j, n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    printf("Enter %d names:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%s", names[i]);
    }
    
    for(i = 0; i < n-1; i++) 
    {
        for(j = i+1; j < n; j++) 
        {
            if(strcmp(names[i], names[j]) > 0) 
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    printf("Names in alphabetical order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}

OUTPUT:
Enter the number of names: 4
Enter 4 names:
basil
aaron
zyan
vijay
Names in alphabetical order:
aaron
basil
vijay
zyan

OUESTION 4:Read the date in the given format 10/02/2000 and check leap year or not.

CODE: 
#include <stdio.h>

int main() 
{
    int day, month, year;
    printf("Enter date in the format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);
    if(year % 4 == 0) 
    {
        if(year % 100 == 0) 
        {
            if(year % 400 == 0) 
            {
                printf("%d is a leap year.\n", year);
            } 
            else 
            {
                printf("%d is not a leap year.\n", year);
            }
        } 
        else 
        {
            printf("%d is a leap year.\n", year);
        }
    } 
    else 
    {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}

OUTPUT:
Enter date in the format dd/mm/yyyy: 10/02/2000
2000 is a leap year.

OUESTION 5:Generate prime from 1 to n numbers

CODE:
#include <stdio.h>

int main() 
{
    int n, i, j, isPrime;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are:\n", n);
    for(i = 2; i <= n; i++) 
    {
        isPrime = 1;
        for(j = 2; j <= i/2; j++) 
        {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

OUTPUT:
Enter a positive integer n: 10
Prime numbers between 1 and 10 are:
2
3
5
7

OUESTION 6:perform transpose matrix.

CODE:
#include <stdio.h>

int main() 
{
    int i, j, rows, cols;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix:\n");
    for(i = 0; i < cols; i++) 
    {
        for(j = 0; j < rows; j++) 
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
return 0;
}

OUTPUT:
Enter number of rows and columns of matrix: 2 2
Enter elements of matrix:
1 2 3 4
Original matrix:
1 2 
3 4 
Transposed matrix:
1 3 
2 4 

QUESTION 7:Sum of diagonal elements of matrix

CODE:
#include <stdio.h>

int main() {
    int i, j, n, sum = 0;
    
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of matrix:\n");
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("The sum of diagonal elements of matrix is %d", sum);
    
    return 0;
}

OUTPUT:
Enter the size of square matrix: 2
Enter the elements of matrix:
1 2 3 4
The matrix is:
1 2 
3 4 
The sum of diagonal elements of matrix is 5

QUESTION 8:Binary search

CODE:
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {
    int i, n, x, result;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array in ascending order:\n");
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &x);
    
    result = binarySearch(arr, 0, n - 1, x);
    
    if (result == -1) {
        printf("Element not found in the array");
    } else {
        printf("Element found at index %d", result);
    }
    
    return 0;
}

OUESTION 9: Sort given data using merge sort
CODE:
#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    int i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

QUESTION 10:Print the Fibonacci series using recursion
CODE:
#include <stdio.h>

int fibonacci(int n);
int main() 
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci(i));
    }
return 0;
}

int fibonacci(int n) 
{
    if (n == 0 || n == 1) 
    {
        return n;
    } 
    else 
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

OUTPUT:
Enter the number of terms: 10
Fibonacci series: 0 1 1 2 3 5 8 13 21 34 


