#include<stdio.h>
int main()
{
    int i,m,t,s,a,b,j,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        //Update 12.1
        while(m>0)
        {
            m=m/10;
        }
       
        while(s>0)
        {
            y=(y*10)+(s%10);
            s=s/10;
        }
        printf("%d\n",y);
    }
    return 0;
}
