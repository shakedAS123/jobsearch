#include <iostream>
using namespace std;
#include "Candidate.h"
#include "Employer.h"
#include <vector>


void checkFile();
void candidate_menu();
void employees_menu();
using namespace std;
int main()
{
    char c,t;
    long id,password;
    string firstname,lastname,mail,birth,phone;
    vector<Candidate>candidates;
    vector<Employer>employers;
    vector<Job>jobs;





    cout<<"                                                     "<<endl;
    cout <<"                     ------WELCOME TO JOB MASTER-----"<<endl;
    cout<<"                                                     "<<endl;

    cout<<"        Do you have an account,if you have press Y else press N ?"<<endl;
    cin>>c;
    switch (c)
    {
        case 'Y'://קולטת תעודת זהות וסיסמא ובודקת אם קיים אובייקט בכל אחד במערכים

            break;
        case 'N'://לבדוק אם הID שמוזן כבר קיים במערך של המועמדים או של המעסיקים(תלוי לפי מה הוא בחר)
            cout<<"You are employer or candidate?  e-employer | c-candidate "<<endl;
            cin>>t;
            cout<<"Please insert your details id,first name,last name,mail,birth,phone,password"<<endl;
            cin>>id>>firstname>>lastname>>mail>>birth>>phone>>password;
            if (t=='c')
            {
                Candidate C (id,firstname,lastname,mail,birth,phone,password);
                candidates.push_back(C);
                candidate_menu();

            } else
            {
                Employer e(id,firstname,lastname,mail,birth,phone,password);
                employers.push_back(e);
                employees_menu();
            }
            break;
    }


    return 0;
}

void checkFile()
{
    std::string filename = "example.txt";

    // Check if the file exists
    std::ifstream file_check(filename);
    if (file_check) {
        std::cout << "The file exists. Opening it..." << std::endl;
        file_check.close(); // Close the file in read mode
    } else {
        std::cout << "The file does not exist. Creating it..." << std::endl;
        std::ofstream new_file(filename);
        if (new_file) {
            new_file.close(); // Close the file after writing
            std::cout << "File created successfully." << std::endl;
        } else {
            std::cerr << "Error: Unable to create the file." << std::endl;
        }
    }
}
void candidate_menu()
{
    cout<<"Choose an option "<<endl;
    cout <<"1.create profile"<<endl;
    cout<<"2.watch all jobs"<<endl;//HERER OPTIONS OF FILTERS- eden wrote
    cout<<"3.watch submissions"<<endl;


}

void employees_menu()
{
    cout<<"1.Publish a new job "<<endl;
    cout<<"2.Watch published job "<<endl;//eden wrote
    cout<<"3.Watch candidates applications"<<endl;
    cout<<"4.Search relevant candidates"<<endl;//show all the candidates and then filter
    cout<<"5.Search similar jobs "<<endl;
}