


#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("请输入三个正数");
    double a, b, c, d;
    scanf_s("%lf%lf%lf", &a, &b, &c);
    if (c < a||c<b)
    {if(c<a)
    {
        d = c;
        c = a;
        a = d;

    }
    else
    {
        d = c;
        c = b;
        b = d;
    }
    }
    
        if ((a + b) > c)
        {
            printf("能组成三角形\n");
        }
        else
        {
            printf("不能组成三角形\n");
        }
    
    system("pause");
    return 0;

}

