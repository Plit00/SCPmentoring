#include<stdio.h>
int main()
{
    int cnt,i;
    int sum = 0;
    char input[101];
    
    scanf("%d", &cnt);
    scanf("%s", input);
    for (i = 0; i < cnt; i++)
    {
        sum += input[i]-'0';
    }
    printf("%d\n", sum);
    return 0;
}
