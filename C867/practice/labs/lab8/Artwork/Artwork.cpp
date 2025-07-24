#include "Artwork.h"
#include <iostream>

Artwork::Artwork() : title("unkown"), yearCreated(-1) {}

Artwork::Artwork(string title, int yearCreated, Artist Artist) {
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

string Artwork::GetTitle() const { return title; }

int Artwork::GetYearCreated() const { return yearCreated; }

void Artwork::PrintInfo() const {
    artist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated;
}