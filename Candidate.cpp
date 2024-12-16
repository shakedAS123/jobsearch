//
// Created by benbu on 12/12/2024.
//

#include "Candidate.h"
Candidate::Candidate() :User(){}
Candidate::~Candidate(){}
Candidate::Candidate(long Id,string first_name,string last_name,string mail,string birth,string phone,long pass): User(Id,first_name,last_name,mail,birth,phone,pass) {}

char *Candidate::get_type() const
{
    return "Candidate";
}
void Candidate::savetofile(const string &filename) const {
    ofstream file(filename,ios::app);
    if(file.is_open()){
        file<<first_name<<endl;
        file<<Id<<endl;
        file<<last_name<<endl;
        file<<mail<<endl;
        file<<birth<<endl;
        file<<phone<<endl;
        file<<password<<endl;
        file<<"**********************"<<endl;
        file.close();
    }
    else{
        cout<<"no matching file to open"<<endl;
    }
}

vector<Candidate> Candidate::readfromfile(const std::string &filename) {
    ifstream file(filename);
    vector<Candidate> candidate;
    if(file.is_open())
    {
        long Id,password;
        string first_name,last_name,mail,birth,phone;
        while(getline(file,first_name))
        {
            if(first_name=="**********************")
                continue;
            file>>Id;
            file.ignore();
            getline(file,last_name);
            getline(file,mail);
            getline(file,birth);
            getline(file,phone);
            file>>password;
            file.ignore();
            candidate.push_back(Candidate(Id,first_name,last_name,mail,birth,phone,password));
        }
        file.close();
    }
    else{
        cout<<"no matching file to read"<<endl;
    }
}

void Candidate::print_candidate() const
{
    cout << "Candidate Information:" << endl;
    cout << "ID: " << Id << endl;
    cout << "Name: " << first_name << " " << last_name << endl;
    cout << "Email: " << mail << endl;
    cout << "Birth Date: " << birth << endl;
    cout << "Phone: " << phone << endl;
    cout << "Password: " << password << endl;

}
