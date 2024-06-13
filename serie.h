#ifndef _SERIE_H
#define _SERIE_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>
#include "episodio.h"
#include "multimedia.h"
#include <vector>

using std::string;

class Serie : public Multimedia
{
    private:
        string idSerie;
        string nombreSerie;
        string generoSerie;
        std::vector <Episodio> episodio;
    public:
        Serie(string,string,string);
        ~Serie();
        void agregarEpisodios(Episodio);
        void operator >=(float);//Episodios
        void operator == (string);//Serie
        void operator > (float);//Episodios
        friend ostream & operator << (ostream & os, Serie se);//ambos
        void calificarVideo(string,float);//episodios
        void filtrarGenero(string);//Serie
        void mostrarSerie();//serie
        void flitarNombreEpi(string);
        string trim(string& str);
};

#endif