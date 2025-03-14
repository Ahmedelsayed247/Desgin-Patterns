#include <iostream>
#include <string>
using namespace std;

class StudentBuilder;

class Student {
private:
    string firstName;
    string lastName;
    int age;
    string department;
    double gpa;

    Student(string firstName, string lastName, int age, string department, double gpa)
        : firstName(firstName), lastName(lastName), age(age), department(department), gpa(gpa) {}

public:
    friend class StudentBuilder;


    string getFirstName()  { return firstName; }
    string getLastName()  { return lastName; }
    int getAge()  { return age; }
    string getDepartment()  { return department; }
    double getGpa()  { return gpa; }

    void display()  {
        cout << "Student: " << firstName << " " << lastName
             << "\nAge: " << age
             << "\nDepartment: " << department
             << "\nGPA: " << gpa << "\n";
    }
};

class StudentBuilder {
private:
    string firstName;
    string lastName;
    int age = 0;
    string department = "Unknown";
    double gpa = 0.0;

public:
    StudentBuilder(string firstName, string lastName) : firstName(firstName), lastName(lastName) {}

    StudentBuilder& setAge(int age) {
        this->age = age;
        return *this;
    }

    StudentBuilder& setDepartment(string department) {
        this->department = department;
        return *this;
    }

    StudentBuilder& setGpa(double gpa) {
        this->gpa = gpa;
        return *this;
    }

    Student build() {
        return Student(firstName, lastName, age, department, gpa);
    }
};

int main() {
    Student student = StudentBuilder("Ahmed","El Sayed")
                          .setAge(23)
                          .setDepartment("Computer Science")
                          .setGpa(3.15)
                          .build();

    student.display();

    return 0;
}
