// Paxton Proctor
// 10/12/2022
// programming techniques

#include <stdio.h>

#define SCD(t) scanf("%d", &t)

#define SCDD(a,b) scanf("%d %d", &a, &b)

#define PFD() printf("divisa")
#define PFNE() printf("NE")
#define PFNO() printf("NO")
#define PFSE() printf("SE")
#define PFSO() printf("SO")

#define WHILE(t) while(SCD(t), t != 0)
#define FOR(i, t) for (int i = 0; i < t; i++)

int main() {  
    int t;
    WHILE(t) {
        int a, b;
        SCDD(a,b);
        FOR(i,t) {
            int n, m;
            SCDD(n,m);
            if (n == a || m == b)
                PFD();
            else if (m > b)
            {
                if (n > a)
                    PFNE();
                else 
                    PFNO();
            }
            else if (n > a)
                PFSE();
            else
                PFSO();
            printf("\n");
        }
    }
    return 0;
}
