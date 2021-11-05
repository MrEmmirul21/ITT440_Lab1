#include <stdio.h>
#include <unistd.h>

int main()
{
 int age;
 printf("Hello, how old are you ? >");
 scanf("%d",&age);
 printf("You are %d years old",age);
 return 0;
}
