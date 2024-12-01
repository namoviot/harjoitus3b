#include <QCoreApplication>
#include "animal.h"
#include "dog.h"


int main(int argc, char *argv[])
{


    Animal an;
    Dog dog;

    an.callOut();
    dog.callOut();

    return 0;
}
