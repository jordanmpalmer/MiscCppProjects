#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <string>
#include <vector> 
#include "Movie.h"


class Movies {
public:
    //constructor
    Movies();
    //destructor
    ~Movies();
    
    bool add_movie(std::string name, std::string rating, int watched);
    
    bool increment_watched(std::string name);
    
    void display() const;
private:
    std::vector<Movie> movies;
};


#endif // _MOVIES_H_
