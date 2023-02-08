#include<iostream>
using namespace std;

class employee
{
    int employee_sal;
    public : 
    employee(int num1 = 100)
    {
        employee_sal = num1;
    }

    int return_emp_salary()
    {
        return employee_sal;
    }
};

class faculty
{
    int faculty_sal;
    public : 
    faculty(int num2 = 200);
    // {
    //     faculty_sal = 200;
    // }

    int return_faculty_salary()
    {
        return faculty_sal;
    }
    
};

faculty :: faculty(int num2)
{
    faculty_sal = num2;
}


class staff : public employee, public faculty
{
    int staff_sal;

    public :

    staff(employee &obj1, faculty &obj2)
    {
        staff_sal = obj1.return_emp_salary() + obj2.return_faculty_salary();
    }

    int return_staff_sal();
};

int staff :: return_staff_sal()
{
    return staff_sal;
} 

int main(){
    employee obj1(10000);
    faculty obj2(20000);

    staff obj3(obj1, obj2);
    
    cout << obj1.return_emp_salary() << endl;
    cout << obj2.return_faculty_salary() << endl;
    cout << obj3.return_staff_sal() << endl;

    return 0;
}