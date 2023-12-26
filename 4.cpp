//give that emplyee class contents following member:data member, employeename, basic salary,da,net salary and print data member
//employee desigantion principle ,hod ,professor and lab assistant
#include <iostream>
using namespace std;

class Employee
{
    public:
        string name;
        int employeeid;
        double basic,daily,net_salary_amt;

        Employee(){}

        void getData()
        {
            cout << "Name of the employee     : " << name << endl;
            cout << "Employee ID              : " << employeeid << endl;
            cout << "Basic Salary             : $"<< basic << endl;
            cout << "Daily Allowance          : $"<< daily << endl;
            cout << "Net Salary               : $"<< net_salary_amt << endl;
        }

        int net_salary(double basic,double daily){
            net_salary_amt  =  daily+basic;
            return net_salary_amt;
        }
};

class HOD : public Employee{
    public:
        HOD(){}

        double calculateSalaries(double basic){
            double daily = 0.2*basic;
            return daily;
        }
};

class Principal : public Employee{
    public:
        Principal(){}

        double calculateSalaries(double basic){
            double daily = 0.1*basic;
            return daily;
        }
};

class Professor : public Employee{
    public:
        Professor(){}

        double calculateSalaries(double basic){
            double daily = 0.07*basic;
            return daily;
        }
};

class Lab : public Employee{
    public:
        Lab(){}

        double calculateSalaries(double basic){
            double daily = 0.02*basic;
            return daily;
        }
};

int main(){
    string name;
    int id;
    long double basic,da,net;

    cout <<  "Name : ";
    cin >>    name;
    cout <<  "Employee ID : #";
    cin >>    id;
    cout <<  "Basic Salary : $";
    cin >>    basic;

    Employee e1;
    if(basic>=90000){
        HOD h1;
        cout << "Designation     : Head of Department\n";
        da = h1.calculateSalaries(basic);
    }
    else if(basic>=50000 && basic<90000){
        Principal p1;
        cout << "Designation     : Principal\n";
        da = p1.calculateSalaries(basic);
    }
    else if(basic>=20000 && basic < 50000){
        Professor t1;
        cout << "Designation     : Professor\n";
        da = t1.calculateSalaries(basic);
    }
    else if(basic < 20000){
        Lab l1;
        cout << "Designation     : Lab Assistant\n";
        da = l1.calculateSalaries(basic);
    }

    net = e1.net_salary(basic, da);
    e1.name = name;
    e1.employeeid = id;
    e1.basic = basic;
    e1.daily = da;
    e1.getData();
    return 0;
}