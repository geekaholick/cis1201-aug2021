#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <stdbool.h> // this contains the definition for bool data type contains value true or false

#define MAX_STUDENT 5
#define MAX_PERSON 5

typedef char String[30];

struct name{
    String fname;
    String mname;
    String lname;
};

typedef struct name Name;

typedef struct {
    int student_id;
    Name student_name;
    char sex;
} Student;

typedef struct person {
    Name person_name;
    String person_address;
} Person;

Person create_new_person(Name name, String address);
void init_student(Student *student, int id, Name name, char sex);
Name create_new_name(String first, String middle, String last);

void update_name(struct name *name, String first, String middle, String last);
void display_name(Name name); // display in the format last_name, first_name middle_initial.
void display_student_info(Student student);
void display_person_info(struct person person);

bool add_student(Student students[], int *student_count, Student student);
bool add_person(struct person *people, int *person_count, Person person);

void display_all_females(Student *students, int student_count);
/** \fn struct name* get_names(Person *people, int person_count, String address);
 *  \brief retrieves all the names of the person living in a specified address use a dummy name containing empty strings to append at the last element of your name list.
 *  \param people The list that contains all the person.
 *  \param person_count The current number of person in the list.
 *  \param address The address to look up in the lits. 
*/
struct name* get_names(Person *people, int person_count, String address);

#endif