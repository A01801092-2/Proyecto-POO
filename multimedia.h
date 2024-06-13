#ifndef _MULTIMEDIA_H
#define _MULTIMEDIA_H
#include <iostream>
#include <string>
using std::ostream;
using std::string;

class Multimedia{
    public:
        virtual void operado_mayorque(float) = 0;
        virtual void operador_igual(string) = 0;
        virtual void calificarVideo(string,float) = 0;
        virtual void guardar_Multimedia(ostream) = 0;
};

#endif