//
// Created by benbu on 12/12/2024.
//

#include "Job.h"
using namespace std;
Job::Job() {}
Job::Job(string name, float salary,string area, float expirence,string degree,string time) {
    this->name=name;
    this->salary=salary;
    this->area=area;
    this->expirence=expirence;
    this->degree=degree;
    this->time=time;
    //this->published=publish;
}
Job::~Job() {
}


//Date Job::get_publish() const {
//    return published;
//}

string Job::get_area() const {
    return area;
}

string Job::get_name() const {
    return name;
}

float Job::get_exp() const {
    return expirence;
}

string Job::get_time() const {
    return time;
}

string Job::get_degree() const {
    return degree;
}

float Job::get_salary() const {
    return salary;
}

void Job::set_name(const string name) {
this->name=name;
}

void Job::set_area(const string area) {
    this->area=area;
}

void Job::set_degree(const string degree) {
    this->degree=degree;
}

void Job::set_exp(const float exp) {
    expirence=exp;
}

//void Job::set_publish(const string publish) {
//    published=publish;
//}

void Job::set_salary(const float salary) {
    this->salary=salary;
}

void Job::set_time(const string time) {
    this->time=time;
}

Job &Job::operator=(const Job &other) {
    name=other.name;
    salary=other.salary;
    area=other.area;
    expirence=other.expirence;
    degree=other.degree;
    time=other.time;
    return *this;
}