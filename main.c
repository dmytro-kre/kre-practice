#include <stdio.h>

int buf[2] = {1, 2}; // global symbol

static int age = 100;


calc(int a, int b);

work();

int main() { // global symbol

    int result = calc(2, 2);
    printf("1first element: %d! second element %d ololo\n", buf[0], buf[1]);

    swap();

    printf("2first element: %d! second element %d\n", buf[0], buf[1]);


    printf("Hello, World! %d\n", result);

    printf("age:%d\n", age);
    work();
    printf("age:%d\n", age);
    return 0;
}
