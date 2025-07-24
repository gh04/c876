#ifndef ARTWORK_H
#define ARTWORK_H

#include "Artist.h"

class Artwork {
    public:
        // Construtors
        Artwork();
        Artwork(string title, int yearCreated, Artist artist);
        
        // Getters
        string GetTitle() const;
        int GetYearCreated() const;

        // Other
        void PrintInfo() const;

    private:
        string title;
        int yearCreated;
        Artist artist;
};

#endif