#include "date.h"


Date::Date():m(1),d(1),y(1)
{
}
Date::Date (int a, int b, int c)
{
    static int arr[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    m = max(1,a);
    m = min(m,12);
    d = max(1,b);
    d = min(d,arr[m]);
    y = max(1,c);
}
int max(int a,int b)
{
    if(a>b) return(a);
    else return (b);
}
int min(int a,int b)
{
    if (a>b) return(b);
    else return (a);
}
string Date::print()
{
    char a[10],b[10],c[10];
    string p= itoa(m,c,10);
    p.append("-").append(itoa(d,a,10)).append("-").append(itoa(y,b,10));
    return p;
}
int Date::getm()const
{
    return m;
}
int Date::getd()const
{
    return d;
}
int Date::gety()const
{
    return y;
}
int Date::check(Date &p)
{
    int m=p.getm(),y=p.gety(),d=p.getd();
    int m1=getm(),y1=gety(),d1=getd();
    if (m < 3) y--, m += 12;
    int x=365*y + y/4 - y/100 + y/400 + (153*m - 457)/5 + d - 306;
    if (m1 < 3) y1--, m1 += 12;
    int q=365*y1 + y1/4 - y1/100 + y1/400 + (153*m1 - 457)/5 + d1 - 306;
    int sub=x-q;
    return sub;
}
