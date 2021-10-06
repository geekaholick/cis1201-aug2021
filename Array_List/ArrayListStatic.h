#ifndef ARRAYLISTSTATIC_H
#define ARRAYLISTSTATIC_H

#include "Data.h"

#define MAX_SIZE 8

typedef struct {
    Name names[MAX_SIZE];
    int count;
} NameList, *NameListPtr;

typedef struct {
    Person people[MAX_SIZE];
    int count;
} PersonList, *PersonListPtr;

typedef struct {
    Student students[MAX_SIZE];
    int count;
} StudentList, *StudentListPtr;

/*! \fn void init_name_list(NameListPtr list);
 *  \brief Initialize the list into an empty list.
 *  \param list The current name list.
*/
void init_name_list(NameListPtr list);

/*! \fn PersonList create_person_list();
 *  \brief Create an empty person list.
*/
PersonList create_person_list();

/*! \fn StudentList create_student_list();
 *  \brief Create an empty student list.
*/
StudentList create_student_list();

/*! \fn bool add_student(StudentList *list, Student student);
 *  \brief Adds the student at the last available space in the list return true for a successful operation otherwise false.
 *  \param list The current list.
 *  \param student The student information.
*/
bool add_student(StudentList *list, Student student);

/*! \fn Student remove_student(StudentList *list);
 *  \brief Returens the remove student that is in the last position of the list. Returns a dummy data containing -1 as ID number if the list is empty.
 *  \param list The current list.
*/
Student remove_student(StudentList *list);

/*! \fn bool add_person(PersonList *list, Person person);
 *  \brief Adds the person at the first in the list return true for a successful operation otherwise false.
 *  \param list The current list.
 *  \param student The person information.
*/
bool add_person(PersonList *list, Person person);

/*! \fn Student remove_student(StudentList *list);
 *  \brief Returens the remove student that is in the first position of the list. Returns a dummy data containing empty string for the name if empty.
 *  \param list The current list.
*/
Person remove_person(PersonList *list);

/*! \fn bool add_name(NameListPtr list, Name name);
 *  \brief Adds the person in sorted order base on last name, first name and middle name returns true for a successful operation otherwise false.
 *  \param list The current list.
 *  \param student The name information.
*/
bool add_name(NameListPtr list, Name name);

/*! \fn Person remove_name(NameList *list, String last_name);
 *  \brief Returns the remove name of the first match of last name. Returns a dummy data containing empty string for the name if empty.
 *  \param list The current list.
 *  \param last_name The matching keyword.
*/
Person remove_name(NameList *list, String last_name);

void display_names(NameList list);
void display_person(PersonList list);
void display_student(StudentList list);

/*! \fn NameList get_people_living(PersonList list, String city);
 *  \brief Returns the list of names where living in the exact match with the city specified.
 *  \param list The current list.
 *  \param last_name The matching keyword.
*/
NameList get_people_living(PersonList list, String city);

/*! \fn NameList get_students_with(StudentList list, String keyword);
 *  \brief Returns the list of names where name contains the specified keyword in their name.
 *  \param list The current list.
 *  \param keyword The keyword.
*/
NameList get_students_with(StudentList list, String keyword);
#endif