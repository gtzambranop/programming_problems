#include <stdio.h>

int main(){
    int i, x, y;
    for(i = scanf("%d"); i >= 0; i--){
        scanf("%d %d", &x, &y);
        printf("%d\n", 2*(x>y?x:y) - (x!=y));
    }
    return 0;
}