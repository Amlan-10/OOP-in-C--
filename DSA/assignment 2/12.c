#include <stdio.h>

struct distance
{
    int km;
    int m;
};

void add(struct distance *p,struct distance *q);

int main()
{
    struct distance p,q;
    printf("Enter 1st distance :- \n");
    printf("km : ");
    scanf("%d",&p.km);
    printf("m : ");
    scanf("%d",&p.m);
    printf("Enter 2nd distance :- \n");
    printf("km : ");
    scanf("%d",&q.km);
    printf("m : ");
    scanf("%d",&q.m);
    add(&p,&q);
    return 0;
}
void add(struct distance *p,struct distance *q)
{
    struct distance a;
    a.km=p->km+q->km;
    a.m=p->m+q->m;
    a.km=a.km+a.m/1000;
    a.m=a.m%1000;
    printf("Sum of 2 distance is %dkm %dm",a.km,a.m);
}