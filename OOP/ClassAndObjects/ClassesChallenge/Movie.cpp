#include <iostream>
#include "Movie.h"

// Implemention of the construcor

Movie::Movie(std::string name, std::string rating, int watched, std::string comment) 
    : name(name), rating(rating), watched(watched), comment(comment)  {
}

//Implemention of the copy constructor
Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched, source.comment} {
}

// Implementation of the destructor
Movie::~Movie() {
}

// Implementation of the display method
// should just insert the movie attributes to cout

void Movie::display() const {
    std::cout << name << ", " << rating <<  ", " << watched  <<  ", " << comment << std::endl;
}

void Movie::display_comment() const{
    std::cout << comment << std::endl;
}
