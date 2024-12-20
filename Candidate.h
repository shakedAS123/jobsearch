

#ifndef JOBSEARCH_CANDIDATE_H
#define JOBSEARCH_CANDIDATE_H
#include "User.h"
#include "string"
#include "vector"
#include "fstream"
#include "iostream"

using namespace std;

class Candidate:public User {
private:
    string my_resume;
public:
    Candidate();
    ~Candidate();
    Candidate(long Id,string first_name,string last_name,string mail,string birth,string phone,long pass);
    char* get_type()const;
    void savetofile(const string&filename)const;
    static vector<Candidate> readfromfile(const string&filename);
    string get_resume()const;
    void edit_resume();
    void preview_resume()const;
    void print_candidate()const;
};


#endif //JOBSEARCH_CANDIDATE_H
