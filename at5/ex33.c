#include<stdio.h>

enum week{Seg, Ter, Qua, Qui, Sex, Sab, Dom};

int main()
{
    enum week day;
    day = Qua;
    
    printf("Quarta-feira: %d", day);

    return 0;
}