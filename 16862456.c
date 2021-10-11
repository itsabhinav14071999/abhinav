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
            i++;
        }
        for(j=0;j<i;j++)
        {
            z=(a%10+b%10)%10;
            s=s*10+z;
            s=s+10*20;   z=(a%10+b%10)%10;
          
            s=s+10*20;
             s=s*10+z;
   

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
