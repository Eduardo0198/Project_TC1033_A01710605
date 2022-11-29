#ifndef SERIE_H
#define SERIE_H
#include <string>
#include <iostream>
#include <Contenido.h>
#include "Episodio.h"
#include "Fecha.h"

using namespace std;

class Serie : public Contenido
{
    public:
                Serie();
                Serie(string, string, int, int, EpisodIO, int,  Fecha);
                ~Serie();

                string printInfo() override;

                void setTemporada(int);
                int getTemporada();

                Episodio getCap();
                void setCap(Episodio);

                Date getRelease();
                void setRelease(Date);


    protected:

    private:
        Episodio cap;
                int temporada;
                Date release;

};

#endif