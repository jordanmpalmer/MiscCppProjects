#include <iostream> 
#include "Movies.h"

void add_movie(Movies& movies, std::string name, std::string rating, int watched);
void increment_watched(Movies& movies,std::string name);

int main() {
    Movies my_movies;
    
    add_movie(my_movies,"Star Wars","PG",2);
    add_movie(my_movies,"Star Wars","PG",2);
    my_movies.display();
    add_movie(my_movies,"Top Gun","PG-13",3);
    add_movie(my_movies,"Now You See Me","PG-13",17);
    increment_watched(my_movies,"Star Wars");
    my_movies.display();
    increment_watched(my_movies,"Big");
    
    add_movie(my_movies,"Big","PG",2);
    increment_watched(my_movies,"Big");
    
    my_movies.display();

}

void add_movie(Movies& movies,std::string name, std::string rating, int watched) {
    if(movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already added" <<std::endl;
    }
}

void increment_watched(Movies& movies,std::string name) {
    if(movies.increment_watched(name)) {
        std::cout << name << " watches incremented" << std::endl;
    } else {
        std::cout << name << " not found" << std::endl;
    }
}