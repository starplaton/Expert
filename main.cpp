#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
    int t;
    int n; int m;   
    int a = 0;
    scanf("%d", &t);

    for(int i = 0 ; i < t ; i ++){
        scanf("%d %d", &n, &m);
        int total = 0;
        for(int j = 0 ; j < n ; j++){
            scanf("%d", &a);
            total += a;
        }
        
        printf("%d\n", total - m > 0 ? total - m : 0);
    }
}
