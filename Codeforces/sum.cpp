#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int x;
        scanf("%d", &x);
        if(x > 10)
            printf("No\n");
        else
            printf("Yes\n");
    }
}