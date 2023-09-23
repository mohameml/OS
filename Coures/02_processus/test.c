#include <stdio.h>
#include <unistd.h>


int main(void)
{

    // on va tester la famille de fonction exce() en partuiclier execl 

    printf("le procesus exécute mnht cette ligne !!!!!! \n");

    // si on appelle la fonction excel() :
    execl("../01_introduction/tst","tst",NULL);

    // la partie qui reste de cette code sera ignoré :
    printf("je sera ignoré !!!!! \n");





    return 0 ;
}