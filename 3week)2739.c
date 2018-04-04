#include <stdio.h>
#include <string.h>
int main()
{
 int n, i; // 넣을값정리

 scanf("%d", &n); //출력

 for(i = 1; i < 10; i++) // n*9까지 이므로 i는 10보다 작다
  printf("%d * %d = %d\n", n, i, n * i); // 곱셈
  
  return 0;
}
