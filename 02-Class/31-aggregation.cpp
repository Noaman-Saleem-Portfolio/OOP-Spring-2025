#include <iostream>
using namespace std;

// Instructor class
class Instructor
{
private:
    string lastName;     // Last name
    string firstName;    // First name
    string officeNumber; // Office number
public:
    // The default constructor stores empty strings
    // in the string objects.
    Instructor()
    {
        set("", "", "");
    }

    // Constructor
    Instructor(string lname, string fname, string office)
    {
        set(lname, fname, office);
    }

    // set function
    void set(string lname, string fname, string office)
    {
        lastName = lname;
        firstName = fname;
        officeNumber = office;
    }

    // print function
    void print() const
    {
        cout << "Last name: " << lastName << endl;
        cout << "First name: " << firstName << endl;
        cout << "Office number: " << officeNumber << endl;
    }
};

// TextBook class
class TextBook
{
private:
    string title;     // Book title
    string author;    // Author name
    string publisher; // Publisher name
public:
    // The default constructor stores empty strings
    // in the string objects.
    TextBook()
    {
        set("", "", "");
    }

    // Constructor
    TextBook(string textTitle, string auth, string pub)
    {
        set(textTitle, auth, pub);
    }

    // set function
    void set(string textTitle, string auth, string pub)
    {
        title = textTitle;
        author = auth;
        publisher = pub;
    }

    // print function
    void print() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class Course
{
private:
    string courseName;     // Course name
    Instructor instructor; // Instructor
    TextBook textbook;     // Textbook
public:
    // Constructor
    Course(string course, string instrLastName,
           string instrFirstName, string instrOffice,
           string textTitle, string author,
           string publisher)
    { // Assign the course name.
        courseName = course;

        // Assign the instructor.
        instructor.set(instrLastName, instrFirstName, instrOffice);

        // Assign the textbook.
        textbook.set(textTitle, author, publisher);
    }

    // print function
    void print() const
    {
        cout << "Course name: " << courseName << endl
             << endl;
        cout << "Instructor Information:\n";
        instructor.print();
        cout << "\nTextbook Information:\n";
        textbook.print();
        cout << endl;
    }
};

int main()
{
    // Create a Course object.
    Course myCourse("Intro to Computer Science",       // Course name
                    "Saleem", "Noaman", "STD-504",     // Instructor info
                    "Starting Out with C++", "Gaddis", // Textbook title and author
                    "Addison-Wesley");                 // Textbook publisher
    // Display the course info.
    myCourse.print();

    return 0;
}