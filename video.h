#ifndef _VIDEO_H
#define _VIDEO_H
#include <iostream>
#include <string>

using std::string;

class Video
{
    private:
        string id;
        string nombre;
        float calificacion;
        int duracion;
        string fechaEstreno;
    public:
        Video(string,string,float,int,string);
        Video();
        void imprimirVideo();
        void calificarVideo(string, float);

};

#endif