#include <iostream>
using namespace std;
class employee_id{
    char name[50];
    int id;
    int age;
    int b_salary;
    int c;
    int gross;
    
    public:
    void input(){
        cout << "Enter the name of employee: ";
        cin >> name;
        cout << "Enter the id of the employee: ";
        cin >> id;
        cout << "Enter the age of employee: ";
        cin >> age;
        cout << "Enter the basic salary of the employee: ";
        cin >> b_salary;
        
        int da=0.8 * b_salary;
        int hra=0.1 * b_salary;
        gross=b_salary+da+hra;
    }
    
    void output(){
        cout << endl;
        cout << "-----------------------------------------------------------------------------------------------------" <<endl;
        cout << "Name:" << name << endl;
        cout << "Age: " << age << endl;
        cout << "Id: " << id << endl;
        cout << "Basic Salary: " << b_salary << endl;
        cout << "Gross Salary: " << gross << endl;
        cout << endl;
    }
    
};
int main(){
    int n=0;
    cout << "Enter the number of employees: ";
    cin >> n;
    
    employee_id* arr=new employee_id[n];
    for(int i=0;i<n;i++){
        arr[i].input();
    }
    
    for(int i=0;i<n;i++){
        arr[i].output();
    }
    return 0;
}