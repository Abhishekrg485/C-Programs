//Make it Zero using only integer 3 or 4 with any no. of operations(Codechef)
#include <stdio.h>
int sum(int N) {
    if (N == 0)
        return 1; 
    if (N < 3)
        return 0; 

  
    return (sum(N - 3) || sum(N - 4));
}

int main(void) {
    int T, N;
    scanf("%d", &T);

    while (T-- > 0) {
        scanf("%d", &N);

        if (sum(N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
