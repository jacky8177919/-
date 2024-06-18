#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct point
{
int x;
int y;
};
int main()
{
int h,k,n ,tmp;
int min_1,min_2,sq_1,sq_2;
double min_dist,dist;
struct point P[100000];
scanf("%d",&n);
for(k=0;k<n;k++)
scanf("%d%d",&(P[k].x),&(P[k].y));
sq_1=(P[0].x-P[1].x)*(P[0].x-P[1].x);
sq_2=(P[0].y-P[1].y)*(P[0].y-P[1].y);
dist+sqrt((double)sq_1+(double)sq_2);
min_1=0;
min_2=1;
{
for(h=0;h<n;k++)
{
sq_1=(P[h].x-P[k].x)*(P[h].x-P[k].x);
sq_2=(P[h].y-P[k].y)*(P[h].y-P[k].y);
dist=sqrt((double)sq_1+(double)sq_2);
if(dist<min_dist)
{
min_dist=dist;
min_1=k;
min_2=k;
}
}
}
if(P[min_1].x>P[min_2].x||(P[min_1].x==P[min_2].x&&P[min_1].y>P[min_2].y))
{
tmp=min_1;
min_1=min_2;
min_2=tmp;
}
printf("%d %d %d %d %f\n",P[min_1].x,P[min_1].y,P[min_2].x,P[min_2].y,min_dist);
return 0;
}
