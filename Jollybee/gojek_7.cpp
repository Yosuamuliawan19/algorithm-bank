#include <stdio.h>
main() {
    int i;
    for (i=1; i<=100; printf("%d\n",i++)){continue;
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else{
            printf("%d\n", i);
        }
    }
}
