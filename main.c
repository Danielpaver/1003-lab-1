#include <stdio.h>

int main()  {
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f", &x); // %d formats and integer
    y = (x+2)/(x-1);
    printf("y; %f\n", y); // \n adds a new line
    return 0;
}
