#include <iostream>
#include "Movies.h"

Movies::Movies() {
}

Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(Movie &movie: movies) {
        if(movie.get_name() == name) {
            return false;
        }
    }
    movies.push_back(Movie{name, rating, watched});
    return true;
};

bool Movies::increment_watched(std::string name) {
    for(Movie& movie: movies) {
        if(movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    std::cout << "\n====================================================" << std::endl;
    for(const Movie& movie: movies) {
        movie.display();
    }
    std::cout << "====================================================\n" << std::endl;
}