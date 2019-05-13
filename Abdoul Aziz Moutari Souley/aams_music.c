#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"


int duration(string frac)
{
    int i=atoi(&frac[0]);
    int j=atoi(&frac[3]);
    if(i>0&&j>0&&(j%2==0))
    {
        return (float) (i/j);
    }
    else
    {
        return 1;
    }
}
int frequency(string n)
{
    int smt;
    char NS=n[0];
    int OCT=n[strlen(n)- 1]- 48;
    if(NS=='C')
    {
        smt=1;
    }
    if(NS=='D')
    {
        smt=3;
    }
    if(NS=='E')
    {
        smt=5;
    }
    if(NS=='F')
    {
        smt=7;
    }
    if(NS=='G')
    {
        smt=9;
    }
    if(NS=='A')
    {
        smt=11;
    }
    if(NS=='B')
    {
        smt=13;
    }
    if(n[1]=='#')
    {
        smt++;
    }
    if(n[1]=='b')
    {
        smt--;
    }
    float freq= 440 * (powf(2,(smt- 10/ (float) 12)));
    return round (freq * (powf(2, OCT- 4)));
}

bool is_rest(string a)
{
    if(strcmp(a,"\0")==0)
    {return true;}
    else
    {return false;}
}
