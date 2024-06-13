#ifndef _EPISODIO_H
#define _EPISODIO_H
#include <iostream>
#include "video.h"

using std::string;
using std::ostream;

class Episodio : public Video
{
    private:
        int temporada;
        int numeroEpisodio;
    public:
        Episodio(string,string,float,int,string,int,int);
        Episodio();
        friend ostream & operator << (ostream & os, Episodio episo);
        void operator >=(float);
        void operator == (string);
        void operator > (float);
};

#endif