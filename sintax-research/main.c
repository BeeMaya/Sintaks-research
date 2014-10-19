#include <stdio.h>
#include <math.h>

float distance (float x1, float x2, float y1, float y2);
int isPointinCircle (float xa, float ya, float x0, float y0, float radius);
int countSimilarDigits (int number);
void minmaxdigits (int number);
int quarter (float x, float y);

int main()
{
    //point A
    float x1 = 3.3;
    float x2 = 5.8;
    
    //point B
    float y1 = 2.4;
    float y2 = 9.7;
    
    //расстояние между двумя точками
    float Distance = distance (x1, x2, y1, y2);
    printf("Distance is = %f\n", Distance);
    
    
    //определение точка в круге?
    isPointinCircle(2.3, 3.7, 7.8, 4.4, 7.3);
    
    //определение одинаковых чисел в большом числе
    int discountSimilarDigits=countSimilarDigits(123);
    printf("count of similar digits %d\n", discountSimilarDigits);
    
    //определение макс и мин числа
    minmaxdigits(587);
    minmaxdigits(229);
    minmaxdigits(222);
    minmaxdigits(901);
    
    //определение четверти по координатам точки
    printf("quarter is =%d\n", quarter(2.3, 7.7));
    printf("quarter is =%d\n", quarter(2.3, -7.7));
    printf("quarter is =%d\n", quarter(-2.3, -7.7));
    printf("quarter is =%d\n", quarter(-2.3, 7.7));
    printf("quarter is =%d\n", quarter(0, 7.1));
    printf("quarter is =%d\n", quarter(0.2, 0));
    printf("quarter is =%d\n", quarter(0, 0));
    
    return 0;
}


float distance (float x1, float x2, float y1, float y2)
{
    float d = sqrtf(powf(x2-x1,2)+powf(y2-y1,2));
    return d;
}

int isPointinCircle(float xa, float ya, float x0, float y0, float radius)
{
    float checkRadius=distance(xa, ya, x0, y0);
    int result =0;
    
    if (radius>=checkRadius)
    {
        printf("point is in circle\n");
        result=1;
    }
    else
    {
        printf("point is out of circle\n");
    }
    return result;
}

int countSimilarDigits (int number)
{
    int result =0;
    int d1=number%10;
    int d2=(number/10)%10;
    int d3=number/100;
    printf("d3=%d, d2=%d, d1=%d\n", d3, d2, d1);
    
    if(d1==d2 && d2==d3 && d1==d3)
    { result =3;
    }
    
    else if (d1==d2||d2==d3||d1==d3)
    { result = 2;
    }
    
    return result;
}

void minmaxdigits (int number)
{
    int d1=number%10;
    int d2=(number/10)%10;
    int d3=number/100;
    printf("d3=%d, d2=%d, d1=%d\n", d3, d2, d1);
    int max=0;
    int min=0;
    
    
    
    if (d1>=d2 && d1>=d3)
    {
        max=d1;
    }
    else if (d2>=d1 && d2>=d3)
    {
        max=d2;
    }
    else
    {
        max =d3;
    };
    
    if (d1<=d2 && d1<=d3)
    {
        min=d1;
    }
    else if (d2<=d1 && d2<=d3)
    {
        min=d2;
    }
    else
    {min = d3;
    };
    
    printf("min is %d\n", min);
    printf("max is %d\n", max);
}

int quarter (float x, float y)
{
    int result =0;
    printf("x=%f and y=%f\n", x, y);
    
    if (x==0 && y!=0)
    {
        printf("point is on os X\n");
    }
    else if(x!=0 && y==0)
    {
        printf("point is on os Y\n");
    }
    
    
    if (x>0 && y>0)
    {
        result = 1;
    }
    else if (x>0 && y<0)
    {
        result = 2;
    }
    else if (x<0 && y<0)
    {
        result= 3;
    }
        
    else if (x<0 && y>0)
    {
        result=4;
    }
    

    return result;
    
}









