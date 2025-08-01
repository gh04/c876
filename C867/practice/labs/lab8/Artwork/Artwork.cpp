#include "Artwork.h"
#include <iostream>

Artwork::Artwork() : title("unknown"), yearCreated(-1) {}

Artwork::Artwork(string title, int yearCreated, Artist artist) {
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

string Artwork::GetTitle() const { return title; }

int Artwork::GetYearCreated() const { return yearCreated; }

void Artwork::PrintInfo() const {
    artist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated << endl;
}