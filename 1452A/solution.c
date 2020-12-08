#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, x, y;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", 2*(x>y?x:y) - (x!=y));
        t --;
    }
    return 0;
}