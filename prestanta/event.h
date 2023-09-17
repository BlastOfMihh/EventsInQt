//
// Created by mihh on 7/12/23.
//

#ifndef PRESTANTA_EVENT_H
#define PRESTANTA_EVENT_H

#include "string"
#include"vector"
#include "cstring"
#include "person.h"

class Event{
    std::string organiser, name, description;
    int x, y;
    std::string date;
    std::vector<std::string> atendees;
public:

    std::string getOrganiser(){
        return organiser;
    }
    std::string getDescription(){
        return description;
    }
    std::string getDate(){
        return date;
    }
    std::string getName(){
        return name;
    }
    Event(std::string str){
        char * cstr = strdup(str.c_str());
        std::vector<std::string > words;
        for (char *p=strtok(cstr, ";"); p; p=strtok(0, ";")){
            words.push_back(p);
        }
        organiser=words[0];
        name=words[1];
        description=words[2];
        x=std::stoi(words[3]);
        y=std::stoi(words[4]);
        date=words[5];
    }
    std::pair<int,int> position(){
        return std::make_pair(x,y);
    }
    std::string str(){
        return organiser+";"+name+";"+description+";"+std::to_string(x)+";"
                + std::to_string(y)+";"+date;
    }
    std::string strNoDesc(){
        return organiser+";"+name+";"+std::to_string(x)+";"
               + std::to_string(y)+";"+date;
    }
    void attend(std::string name){
        atendees.push_back(name);
    }
    bool attends(std::string name){
        for (auto str:atendees){
            if (str==name)
                return true;
        }
        return false;
    }
    std::vector<std::string> getAttendees(){
        return atendees;
    }
    void setDescription(std::string str){
        description=str;
    }
    void setDate(std::string str){
        date=str;
    }
};



#endif //PRESTANTA_EVENT_H
