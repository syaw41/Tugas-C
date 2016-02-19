//referensi tetapi tidak bisa diterapkan di tugas1

#include <stdio.h>

int main ()
{
    int x;
    float check;
    printf ("enter a integer number:");
    scanf ("%f", &check);
    x=check;
    if (x==check)
    printf("\nYour number is %d", x);
    else 
    {
         printf("\nThis is not an integer number, please insert an integer!\n\n");
    }
    _getch();
    return 0;
}
