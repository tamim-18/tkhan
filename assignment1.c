#include<stdio.h>
#include<math.h>
int main()
{

    float R,r,a,b;
    int n;
    scanf("%d %f",&n,&R);
    a=R*sin(3.1416/n);
    b=1+sin(3.1416/n);
    r=a/b;
    printf("r= %f\n",r);
    return 0;
}
