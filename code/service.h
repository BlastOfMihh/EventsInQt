//
// Created by mihh on 7/12/23.
//

#ifndef PRESTANTA_SERVICE_H
#define PRESTANTA_SERVICE_H

#include "algorithm"
#include "Repo.h"
#include "person.h"
#include "event.h"
#include "observer.h"


class Service : public Subject{
    Repo<Person> * repoPeople;
    Repo<Event> * repoEvents;

public:

    Service(Repo<Person>* repoPeople_,  Repo<Event>* RepoEvents_)
        : repoEvents(RepoEvents_), repoPeople(repoPeople_)
    {}

    std::vector<Person>& getPeople(){
        return repoPeople->getAll();
    }
    std::vector<Event>& getEvents(){
        std::sort(repoEvents->getAll().begin(), repoEvents->getAll().end(), [&](Event & e1, Event & e2){
            return e1.getDate()<e2.getDate();
        });
        return repoEvents->getAll();
    }
    bool addEvent( std::string organiser, std::string name, std::string description, int x,int y, std::string date){
        Event newEvent (organiser+";"+ name+";"+description+";"+std::to_string(x)+";"+
            std::to_string(y)+";"+date
        );
        for (auto & event:repoEvents->getAll()){
            if (event.getName()==newEvent.getName() or (event.position()==newEvent.position())){
                return false;
            }
        }
        repoEvents->getAll().push_back(newEvent);
        return true;
    }
    Event & getEvent(std::string str){
        for (auto & event:repoEvents->getAll()){
            if (event.strNoDesc()==str or event.str()==str){
                return event;
            }
        }
    }
    std::vector<Event> getSortedPop(){
        std::vector<Event> events;
        for (auto event:repoEvents->getAll()){
            events.push_back(event);
        }
        std::sort(events.begin(), events.end(), [&](Event one, Event two){
            return one.getAttendees()>two.getAttendees();
        });
        return events;
    }
};

#endif //PRESTANTA_SERVICE_H
