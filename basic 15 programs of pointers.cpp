//1st PROGRAM//

#include <stdio.h>
int main() {
 int x = 10;
 int *ptr;
 ptr = &x;
 printf("Value of x: %d\n", x);
 printf("Value of x using pointer: %d\n", *ptr);
 return 0;
}

//2nd PROGRAN//

#include <stdio.h>
int main() {
 int arr[] = {10, 20, 30, 40, 50};
 int *ptr = arr;
 for (int i = 0; i < 5; i++) {
 printf("Element %d: %d\n", i, *ptr);
 ptr++;
 }
 return 0;
}


//3rd PROGRAM//

#include <stdio.h>
int add(int a, int b) {
 return a + b;
}
int main() {
 int (*ptr)(int, int);
 ptr = add;
 printf("Sum: %d\n", ptr(10, 20));
 return 0;
}

//4th PROGRAM//

#include <stdio.h>
int main() {
 int arr[] = {10, 20, 30, 40, 50};
 int *ptr = arr;
 for (int i = 0; i < 5; i++) {
 printf("Element %d: %d\n", i, *(ptr + i));
 }
 return 0;
}

//5th PROGRAM//

#include <stdio.h>
int main() {
 int x = 10;
 int *ptr1 = &x;
 int **ptr2 = &ptr1;
 printf("Value of x: %d\n", **ptr2);
 return 0;
}

//6th PROGRAM//

#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr = (int *)malloc(sizeof(int));
 *ptr = 42;
 printf("Value of dynamically allocated variable: %d\n", *ptr);
 free(ptr);
 return 0;
}

//7th PROGRAM//

#include <stdio.h>
void increment(int *x) {
 (*x)++;
}
int main() {
 int num = 10;
 increment(&num);
 printf("Incremented value: %d\n", num);
 return 0;
}

//8th PROGRAM//

#include <stdio.h>
struct Point {
 int x;
 int y;
};
int main() {
 struct Point p;
 struct Point *ptr = &p;
 ptr->x = 10;
 ptr->y = 20;
 printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);
 return 0;
}

//9th PROGRAM//

#include <stdio.h>
int main() {
 int arr[] = {10, 20, 30};
 int *ptrs[3];
 for (int i = 0; i < 3; i++) {
 ptrs[i] = &arr[i];
 printf("Value at index %d: %d\n", i, *ptrs[i]);
 }
 return 0;
}

//10th PROGRAM//

#include <stdio.h>
int main() {
 const int x = 10;
 const int *ptr = &x;
 printf("Value of x: %d\n", *ptr);
 return 0;
}

//11th PROGRAM//

#include <stdio.h>
int main() {
 const int x = 10;
 const int *ptr = &x;
 printf("Value of x: %d\n", *ptr);
 return 0;
}

//12th PROGRAM//

#include <stdio.h>
int add(int a, int b) {
 return a + b;
}
struct Calculator {
 int (*add)(int, int);
};
int main() {
 struct Calculator calc;
 calc.add = add;
 printf("Sum: %d\n", calc.add(5, 7));
 return 0;
}

//13th PROGRAM//

#include <stdio.h>
int add(int a, int b) {
 return a + b;
}
int subtract(int a, int b) {
 return a - b;
}
int main() {
 int (*ptr)(int, int);
 int result;
 ptr = add;
 result = ptr(10, 5);
 printf("Addition: %d\n", result);
 ptr = subtract;
 result = ptr(10, 5);
 printf("Subtraction: %d\n", result);
 return 0;
}

//14h PROGRAM//

#include <stdio.h>
int main() {
 char *str = "Hello, Pointer!";
 printf("String: %s\n", str);
 return 0;
}

//15th PROGRAM//

#include <stdio.h>
void printArray(int arr[], int size) {
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
int main() {
 int arr[] = {1, 2, 3, 4, 5};
 int size = sizeof(arr) / sizeof(arr[0]);
 printArray(arr, size);
 return 0;
}



