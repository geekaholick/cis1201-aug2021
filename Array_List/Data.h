#ifndef DATA_H
#define DATA_H

#define MAX_STUDENT 5
#define MAX_PERSON 5

typedef char String[30];

typedef struct {
    String fname;
    String mname;
    String lname;
} Name;

typedef struct {
    int student_id;
    Name student_name;
    char sex;
} Student;

typedef struct {
    Name person_name;
    String person_address;
} Person;

Person create_new_person(Name name, String address);
Student create_new_student(int id, Name name, char sex);
Name create_new_name(String first, String middle, String last);

#endif