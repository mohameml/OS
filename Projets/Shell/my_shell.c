#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{


    char* ptr_chaine =  NULL ;
    ptr_chaine = malloc(sizeof(char)*100) ;


    scanf(ptr_chaine,"%s");

    if(strcmp(ptr_chaine,"ls"))
    {
        system("ls");
    }



    return 0 ;
}