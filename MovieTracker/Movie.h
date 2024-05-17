#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

//class declaration here
class Movie {
public:
    //constructor
    Movie(std::string name, std::string rating, int watched);
    //copy constructor
    Movie(const Movie& source);
    //destructor
    ~Movie();
    
    void display() const;
    void increment_watched() {++watched;}
    
    std::string get_name() const {return name;}
    std::string get_rating() const {return rating;}
    int get_watched() const {return watched;}

private:
    std::string name;
    std::string rating;
    int watched;
};

#endif // _MOVIE_H_
