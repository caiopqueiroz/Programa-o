# include <stdio.h>

int main() {

    int i = 5;
    int *p;
    p = &i;

    printf("%u %d %d %d %d",
           p,
           *p+2,
           **&p,
           3**p,
           **&p+4);

    return 0;
}
