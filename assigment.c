ans1:

#include<stdio.h>
int main(){
    int arr[]={6,12,18,24};
    int x=0;
    x=arr[1]+(arr[1]=2);
    printf("%d",x);
    return 0;
}

output:
       14

ans2:

#include<stdio.h>
#include<conio.h>
void main(){
    inti=3,val;
    val=sizeof f(i)+ +f(i=1)+ +f(i-1);
    printf("%d %d",val,i);
}
int f(intnum){
    returnnum*5;
}

output:
gcc /tmp/KQTNKC7UlX.c -lm
/tmp/KQTNKC7UlX.c:2:9: fatal error: conio.h: No such file or directory
    2 | #include<conio.h>
      |         ^~~~~~~~~
compilation terminated.

ans3:

#include<stdio.h>
#include<conio.h>
floatavg(float,float,float);
void main(){
    float p=1,q=2,r=-2,a;
    a=avg(p,(q=4,r=-12,q),r);
    printf("%f",a);  
}
floatavg(floatx,floaty,float z){
    return (x+y+z)/3;
}

output:
main.c:3:1: warning: data definition has no type or storage class
    3 | floatavg(float,float,float);
      | ^~~~~~~~
main.c:3:1: warning: type defaults to ‘int’ in declaration of ‘floatavg’ [-Wimplicit-int]
main.c: In function ‘main’:
main.c:6:7: warning: implicit declaration of function ‘avg’ [-Wimplicit-function-declaration]
    6 |     a=avg(p,(q=4,r=-12,q),r);
      |       ^~~
main.c: At top level:
main.c:9:24: error: expected ‘)’ before ‘float’
    9 | floatavg(floatx,floaty,float z){
      |                        ^~~~~
      |                        )

ans4:

void main()
{
intconst * p=5;
printf("%d",++(*p));
}

output:
      main.c: In function ‘main’:
main.c:3:1: error: unknown type name ‘intconst’; did you mean ‘const’?
    3 | intconst * p=5;
      | ^~~~~~~~
      | const
main.c:3:14: warning: initialization of ‘int *’ from ‘int’ makes pointer from integer without a cast [-Wint-conversion]
    3 | intconst * p=5;
      |              ^
main.c:4:1: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    4 | printf("%d",++(*p));
      | ^~~~~~
main.c:1:1: note: include ‘’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | void main()
main.c:4:1: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
    4 | printf("%d",++(*p));
      | ^~~~~~
main.c:4:1: note: include ‘’ or provide a declaration of ‘printf’

ans5:

main()
{
int c[ ]={2.8,3.4,4,6.7,5};
int j,*p=c,*q=c;
for(j=0;j<5;j++) {
printf(" %d ",*c);
++q; }
for(j=0;j<5;j++){
printf(" %d ",*p);
++p; }
}

output:
 2  2  2  2  2  2  3  4  6  5

ans6:

main()
{
char string[]="Hello World";
display(string);
}
void display(char *string)
{
printf("%s",string);
}

output:
Hello World

ans7:

#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,rows;
clrscr();
printf("Enter the number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
for(j=1;j<=1;j++)
{
printf("%d",j);
}
}
getch();
}

output:
    1        
   12
  123
 1234
12345


ans8:

		// if the target is less than the middle element, discard the right half
		else if (target < nums[mid]) {
			high = mid - 1;
		}

		// if the target is more than the middle element, discard the left half
		else {
			low = mid + 1;
		}
	}

	// return the leftmost index, or -1 if the element is not found
	return result;
}

int main(void)
{
	int nums[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int n = sizeof(nums)/sizeof(nums[0]);

	int target = 5;

	int index = findFirstOccurrence(nums, n, target);

	if (index != -1)
	{
		printf("The first occurrence of element %d is located at index %d",
				target, index);
	}
	else {
		printf("Element not found in the array");
	}

	return 0;
}

output:
INPUT : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, x = 5
OUTPUT : First Occurrence = 2
         Last Occurrence = 5

  
INPUT : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, x = 10
OUTPUT: -1

ans9:

#include"string.h"
typedefstruct stu1
{
    char name1[6];
    char name2[6];
    double marks;
}STU1;
void main()
{
    STU1 s1={"rohit","kumar",87.43},*p1;
    char *p;
    p1=&s1;
    p=memchr(p1,'u',sizeof(STU1));
    printf("%s",p);  
}

output:

umar

and10:

#define square(x) x*x
main()
{
inti;
i = 64/square(4);
printf("%d",i);
}

output:
ERROR c:5:8: warning: implicit declaration of function 'square' [-Wimplicit-function-declaration]
  