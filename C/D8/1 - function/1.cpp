// functions....

#include <stdio.h>

int sum(int x, int y);

int main(){
    int a, b, ans;

    printf("Enter 2 values : ");
    scanf("%d %d", &a, &b);

    ans = sum(a, b);
    printf("Answer is %d\n", ans);
}

int sum(int x, int y){
    int k;
    k = x + y;
    return k;
}