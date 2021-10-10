#include<stdio.h>
int main()
{
    int i,m,t,s,a,b,j,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        y=0;
    i=0;
        y=0;
    i=0;
        y=0;
    i=0;
        y=0;
    i=0;
        y=0;
    i=0;
   
    
        
        i=1;
        y=2;
        s=3;
        i=1;
        y=2;
        s=3;
        scanf("%d%d",&a,&b);
        
        m=a;
        while(m>0)
        {
            m=m/10;
            i++;
        }
        for(j=0;j<i;j++)
        {
            z=(a%10+b%10)%10;
        
            b=b/10;
        }
       
        printf("%d\n",y);
    }
    return 0;
}
