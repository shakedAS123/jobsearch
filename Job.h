
#ifndef JOBSEARCH_JOB_H
#define JOBSEARCH_JOB_H
#include "string"
#include "vector"
using namespace std;

class Job {
private:
    string name;
    float salary;
    string area;
    float expirence;
    string degree;
    string time;
    //string published;
public:
    Job();
    Job(string name,float salary,string area,float expirence,string degree,string time);
    ~Job();
    void savetofile(const string&filename)const;
    static vector<Job> readfromfile(const string&filename);
    string get_name()const;
    float get_salary()const;
    string get_area()const;
    float get_exp()const;
    string get_degree()const;
    string get_time()const;
    string get_publish()const;
    void set_name(const string name);
    void set_salary(const float salary);
    void set_area(const string area);
    void set_exp(const float exp);
    void set_degree(const string  degree);
    void set_time(const string time);
    void set_publish(const string publish);
    Job& operator=(const Job& other);

};


#endif //JOBSEARCH_JOB_H
