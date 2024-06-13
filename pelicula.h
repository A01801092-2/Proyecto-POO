#ifndef _PELICULA_H
#define _PELICULA_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <locale>
#include "video.h"
#include "multimedia.h"

using std::string;
using std::ostream;

class Pelicula : public Video, public Multimedia
{
    private:
        string generoPelicula;
    public:
        Pelicula(string,string,float,int,string,string);
        Pelicula();
        void operador_mayorque(float);
        void operador_igual(string);
        friend ostream & guardar_Multimedia(ostream & os, Pelicula peli);
        void filtrarGenero(string);
        void calificarVideo(string, float);
        void operator_mayorque(float);
        string trim(string& str);
};

#endif