#include <iostream>
#include "Movies.h"

// Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched, std::string comment);

/******************************************************************
 * helper function 
 * increment_watched expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
*  displays a success message
*  otherwise the watched count could not be incremented
*  because the name of the movie was not found
 * ***************************************************************/

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

/******************************************************************
* helper function
*  add_movie expects a reference to a Movies object 
 * and the name of the movie, the rating and the watched count
 *
 * If the movie was successfully added to the movies object it
*  displays a success message
*  otherwise the movie was not added 
*  because the name of the movie was already in movies
 * ***************************************************************/
void add_movie(Movies &movies, std::string name, std::string rating, int watched, std::string comment) {
    if (movies.add_movie(name,rating,watched, comment)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2,"amazing comment");                 // OK
    add_movie(my_movies,"Star Wars", "PG",5,"amazing comment");             // OK
    add_movie(my_movies,"Cinderella", "PG",7,"amazing comment");  // OK
    
    my_movies.display_comments();         
     
    my_movies.display();   // Big, Star Wars, Cinderella
    
    add_movie(my_movies,"Cinderella", "PG",7,"amazing comment");            // Already exists
    add_movie(my_movies,"Ice Age", "PG",12,"amazing comment");              // OK
    
    my_movies.display_comments();
    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    increment_watched(my_movies,"Big");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
    my_movies.display_comments();
    my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");         // XXX not found

	return 0;
}