//
// Created by mihh on 7/12/23.
//

#ifndef PRESTANTA_OBSERVER_H
#define PRESTANTA_OBSERVER_H

#include "vector"

class Observer{

public:
    virtual void update()=0;
};


class Subject{
public:
    std::vector<Observer*> observers;
    void registerObs(Observer * obs){
        observers.push_back(obs);
    }
    void notify(){
        for (auto obs:observers){
            obs->update();
        }
    }
};


#endif //PRESTANTA_OBSERVER_H
