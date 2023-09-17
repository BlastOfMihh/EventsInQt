//
// Created by mihh on 7/12/23.
//

#ifndef PRESTANTA_PERSON_H
#define PRESTANTA_PERSON_H

#include "cmath"
#include "string"
#include "cstring"
#include "vector"

class Person{
    std::string name;
    int x, y;
    bool status=false;

public:
    Person(std::string str){
        char * cstr = strdup(str.c_str());
        std::vector<std::string > words;
        for (char *p=strtok(cstr, ";"); p; p=strtok(0, ";")){
            words.push_back(p);
        }
        name=words[0];
        x=std::stoi(words[1]);
        y=std::stoi(words[2]);
        status=std::stoi(words[3]);
    }
    std::string str(){
        return name+";"+std::to_string(x)+";"+std::to_string(y)+";"+std::to_string(int(status));
    }
    bool getStatus(){
        return status;
    }
    std::pair<int,int> position(){
        return std::make_pair(x,y);
    }
    double distanceTo(std::pair<int,int> p2){
        return sqrt(pow((x-p2.first),2) + pow(y-p2.second, 2));
    }
    std::string getName(){
        return name;
    }
};

#endif //PRESTANTA_PERSON_H
