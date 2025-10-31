#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,temp;
    printf("1er nombre \n");
    scanf("%d",&x);
    printf("2eme nombre \n");
    scanf("%d",&y);
      if (x%y==0)
        printf("il existe au moins une solution entiere. \n");
        else
        printf("il n’existe aucune solution entiere. \n");
    // method d'euclide
    while (y!=0){
        temp=x%y;
        x=y;
        y=temp;

    }
    printf("le pgcd est : %d",x);
    return 0;

}
