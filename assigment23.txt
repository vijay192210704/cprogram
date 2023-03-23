1) #include <stdio.h>

int main() {
   int num1, num2, num3, max;
   
   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);
   
   max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
   
   printf("The maximum of the three numbers is %d", max);
   
   return 0;
}

Output:

Enter three numbers: 1
2
3
The maximum of the three numbers is 3

2)
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Using conditional/ternary operator to check if ch is an alphabet or not
    (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? printf("%c is an alphabet.\n", ch) : printf("%c is not an alphabet.\n", ch);

    return 0;
}

output:Enter a character: s
s is an alphabet.


3)
#include <stdio.h>

int main() {
    int n, sum=0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        if(i%2!=0) {    // check if i is odd
            sum += i;   // add i to sum if it is odd
        }
    }
    
    printf("The sum of all odd numbers from 1 to %d is %d", n, sum);
    
    return 0;
}

output:

Enter the value of n: 12
The sum of all odd numbers from 1 to 12 is 36

4)#include <stdio.h>

#include <string.h>

#define MAX_SIZE 100    // maximum size of the string

int main() {

    char str[MAX_SIZE];

    int freq[256] = {0};    // initialize frequency of all characters to 0

    int i, max_freq = -1;

    char max_char;

    

    printf("Enter a string: ");

    fgets(str, MAX_SIZE, stdin);

    

    // calculate frequency of each character in the string

    for(i=0; i<strlen(str); i++) {

        freq[str[i]]++;

    }

    

    // find the character with maximum frequency

    for(i=0; i<strlen(str); i++) {

        if(freq[str[i]] > max_freq) {

            max_freq = freq[str[i]];

            max_char = str[i];

        }

    }

    

    printf("The maximum occurring character in the string is '%c' with frequency %d", max_char, max_freq);

    

    return 0;

}

output;

Enter a string: 55

The maximum occurring character in the string is '5' with frequency 2

5)

#include <stdio.h>

int tmp = 20;

void func();

int main() {

    printf("%d ", tmp);

    func();

    printf("%d ", tmp);

    return 0;

}

void func() {

    int tmp = 10;

    printf("%d ", tmp);

}

output:

20 1020 


6)#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/wait.h>

int main() {

    int a = 10;

    pid_t pid = fork();

    if (pid == 0) {

        a++;

        printf("Child process: a = %d\n", a);

        exit(0);

    } else if (pid > 0) {

        wait(NULL);

        printf("Parent process: a = %d\n", a);

    } else {

        perror("fork");

        exit(1);

    }

    return 0;

}

output;

Child process: a = 11

Parent process: a = 10

7)#include <stdio.h>

int main() {

    int a = 1;

    while (a <= 100) {

        printf("%d\n", a * a);

        a++;

    }

    return 0;

}

output;

1

4

9

16

25

36

49

64

81

100

121

144

169

196

225

256

289

324

361

400

441

484

529

576

625

676

729

784

841

8)If the array begins at memory location 1200, the output of the program would be:

Output:

1200, 1200, 1200

This is because the memory address of the first element of the array (arr) and the memory address of the first element of the array using the indexing operator (&arr[0]) would be the same, which is the starting memory address of the array itself (&arr).

9)The program will output the value of the first element of the array a, which is 1.

Explanation:

The array a is a 3x4 array that is initialized with some values.

In the main() function, a pointer ptr is declared and initialized to point to the first element of a.

The fun() function is called with the address of ptr as an argument. Since ptr points to an integer, &ptr is a pointer to a pointer to an integer, which is what fun() expects as an argument.

Inside fun(), the value of the integer pointed to by the pointer to a pointer is printed, which is the first element of a, i.e., 1

10)

#include <stdio.h>

#include <string.h>

#define MAX_NAMES 100

int main() {

    char names[MAX_NAMES][50];  

   

    int num_names = 0;  

    char order;  

    

    while (num_names < MAX_NAMES) {

        printf("Enter a name (or 'done' to stop): ");

        scanf("%s", names[num_names]);

        if (strcmp(names[num_names], "done") == 0) {

            break;

        }

        num_names++;

    }

    printf("Enter the order (A for ascending or D for descending): ");

    scanf(" %c", &order);

    if (order == 'A' || order == 'a') {

        for (int i = 0; i < num_names - 1; i++) {

            for (int j = i + 1; j < num_names; j++) {

                if (strcmp(names[i], names[j]) > 0) {

                    char temp[50];

                    strcpy(temp, names[i]);

                    strcpy(names[i], names[j]);

                    strcpy(names[j], temp);

                }

            }

        }

    } else if (order == 'D' || order == 'd') {

        for (int i = 0; i < num_names - 1; i++) {

            for (int j = i + 1; j < num_names; j++) {

                if (strcmp(names[i], names[j]) < 0) {

                    char temp[50];

                    strcpy(temp, names[i]);

                    strcpy(names[i], names[j]);

                    strcpy(names[j], temp);

                }

            }

        }

    }

    printf("Sorted list of names:\n");

    for (int i = 0; i < num_names; i++) {

        printf("%s\n", names[i]);

    }

    return 0;

}

output:

Enter a name (or 'done' to stop): Banana

Enter a name (or 'done' to stop): Carrot

Enter a name (or 'done' to stop): Apple

Enter a name (or 'done' to stop): Radish

Enter a name (or 'done' to stop): Jack

Enter a name (or 'done' to stop): done

Enter the order (A for ascending or D for descending): A

Sorted list of names:

Apple

Banana

Carrot

Jack

Radish