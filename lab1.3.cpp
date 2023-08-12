#include<iostream>
using namespace std;

int main(){
    struct employee{
        int Emp_id;
        string name;
        string designation;
        int basic_salary;
        int hra;
        int da;
    };
    cout<<"enter the number of employees"<<endl;
    int n;
    cin>>n;

    struct employee emp[n];

    for(int i=0;i<n;i++){
        cout<<"enter employee "<<i+1<<" information"<<endl;
        cout<<"Name:"<<endl;
        cin>>emp[i].name;
        cout<<"Designation:"<<endl;
        cin>>emp[i].designation;
        cout<<"basic salary:"<<endl;
        cin>>emp[i].basic_salary;
        cout<<"hra_%:"<<endl;
        cin>>emp[i].hra;
        cout<<"da_%"<<endl;
        cin>>emp[i].da;


    }
    

    for(int i=0;i<n;i++){
        cout<<"Employee "<<i+1<<" Information"<<endl;
        cout<<"Name: "<<emp[i].name<<endl;
        cout<<"Designation: "<<emp[i].designation<<endl;
        cout<<"Baisc Salary: "<<emp[i].basic_salary<<endl;
        cout<<"HRA%: "<<emp[i].hra<<endl;
        cout<<"DA%: "<<emp[i].da<<endl;
        int gs= emp[i].basic_salary+emp[i].basic_salary*emp[i].hra/100+emp[i].basic_salary*emp[i].da/100;
        cout<<"Gross Salary: "<<gs<<endl;
    }

    

    return 0;
}