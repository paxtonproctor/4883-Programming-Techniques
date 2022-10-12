// Paxton Proctor
// 10/12/2022
// Programming Techniques

#include<stdio.h>
#include<string.h>

#define SCS(a) scanf("%s",a)

#define PFDE(a,i) printf("Case %d: ENGLISH\n",++i)
#define PFDS(a,i) printf("Case %d: SPANISH\n",++i)
#define PFDG(a,i) printf("Case %d: GERMAN\n",++i)
#define PFDF(a,i) printf("Case %d: FRENCH\n",++i)
#define PFDI(a,i) printf("Case %d: ITALIAN\n",++i)
#define PFDR(a,i) printf("Case %d: RUSSIAN\n",++i)
#define PFDU(a,i) printf("Case %d: UNKNOWN\n",++i)

int main()
{
    int i=0;
    char a[50];
    while(SCS(a) && strcmp(a,"#"))
    {
        if(!strcmp(a,"HELLO")) PFDE(a,i);
        else if(!strcmp(a,"HOLA")) PFDS(a,i);
        else if(!strcmp(a,"HALLO")) PFDG(a,i);
        else if(!strcmp(a,"BONJOUR")) PFDF(a,i);
        else if(!strcmp(a,"CIAO")) PFDI(a,i);
        else if(!strcmp(a,"ZDRAVSTVUJTE")) PFDR(a,i);
        else  PFDU(a,i);
    }
    return 0;
}
