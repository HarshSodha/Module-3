#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void setDetails(const string& n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    string studentID;

public:
    void setStudentDetails(const string& n, int a, const string& id) {
        setDetails(n, a);         
        studentID = id;
    }

    void displayStudentDetails() const {
        cout << "\n--- Student Details ---\n";
        displayDetails();         
        cout << "Student ID: " << studentID << endl;
    }
};


class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(const string& n, int a, const string& subj) {
        setDetails(n, a);         
        subject = subj;
    }

    void displayTeacherDetails() const {
        cout << "\n Teacher Details \n";
        displayDetails();        
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    
    Student s1;
    s1.setStudentDetails("Harsh", 20, "S123");
    s1.displayStudentDetails();

    
    Teacher t1;
    t1.setTeacherDetails("Amit Sir", 40, "Mathematics");
    t1.displayTeacherDetails();

    return 0;
}

