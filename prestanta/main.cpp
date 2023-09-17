#include <QApplication>
#include "Repo.h"
#include "service.h"
#include "person.h"
#include "personwindow.h"
#include "event.h"
#include "bestwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Repo<Event> * repoEvent= new Repo<Event> ("events.in");
    Repo<Person> * repoPeople= new Repo<Person> ("people.in");
    Service * service= new Service( repoPeople,repoEvent);
    for (auto &person : service->getPeople()){
        auto window=new personwindow(person,service);
        window->setWindowTitle(QString::fromStdString(person.getName()));
        window->show();
        service->registerObs(window);
    }
    auto best=new bestwindow(service);
    (best)->show();
    service->registerObs(best);

    int ret=QApplication::exec();
    delete service;
    delete repoPeople;
    delete repoEvent;
    return ret;
}
