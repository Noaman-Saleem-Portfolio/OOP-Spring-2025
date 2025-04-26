
#include <iostream>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
    string studentName; // The student's name
    double *testScores; // Points to array of test scores
    int numTestScores;  // Number of test scores

    // Private member function to create an
    // array of test scores.
    void createTestScoresArray(int size)
    {
        numTestScores = size;
        testScores = new double[size];
        for (int i = 0; i < size; i++)
            testScores[i] = DEFAULT_SCORE;
    }

public:
    // Constructor
    StudentTestScores()
    {
        // experiment why I initialize attributes here this time
        studentName = "";
        numTestScores = 0;
        testScores = nullptr; // SAFE initialization
    }

    // Constructor
    StudentTestScores(string name, int numScores)
    {
        studentName = name;
        createTestScoresArray(numScores);
    }

    // copy constructor
    StudentTestScores(const StudentTestScores &obj)
    {
        studentName = obj.studentName;
        numTestScores = obj.numTestScores;
        testScores = new double[numTestScores];
        for (int i = 0; i < numTestScores; i++)
            testScores[i] = obj.testScores[i];
    }

    // Destructor
    ~StudentTestScores()
    {
        delete[] testScores;
    }

    // The setTestScore function sets a specific
    // test score's value.
    void setTestScore(double score, int index)
    {
        testScores[index] = score;
    }

    // Set the student's name.
    void setStudentName(string name)
    {
        studentName = name;
    }
    // Get the student's name.
    string getStudentName() const
    {
        return studentName;
    }

    // Get the number of test scores.
    int getNumTestScores() const
    {
        return numTestScores;
    }

    // Get a specific test score.
    double getTestScore(int index) const
    {
        return testScores[index];
    }

    double *printAddress()
    {
        return testScores;
    }

    // Overloaded = operator
    void operator=(const StudentTestScores &right)
    {
        delete[] testScores; // Clean up old array (if any)
        studentName = right.studentName;
        numTestScores = right.numTestScores;
        testScores = new double[numTestScores]; // Allocate new array
        for (int i = 0; i < numTestScores; i++)
            testScores[i] = right.testScores[i];
    }
};

// Function prototype
void displayStudent(StudentTestScores);

int main()
{
    // cout<<"hello";
    StudentTestScores student1 = StudentTestScores("Maria Jones Tucker", 3);
    student1.setTestScore(100.0, 0);
    student1.setTestScore(95.0, 1);
    student1.setTestScore(80, 2);

    // Create another StudentTestScore object
    // with default test scores.
    StudentTestScores student2("Jimmy Griffin", 5);

    // Assign the student1 object to student2
    student2 = student1;

    // can also be written as
    // student2.operator=(student1);

    cout << "Student 1 testScores Array address = " << student1.printAddress() << endl;
    cout << "Student 2 testScores Array address = " << student2.printAddress() << endl;

    // Display both objects. They should
    // contain the same data.
    displayStudent(student1);
    displayStudent(student2);

    return 0;
}

// The displayStudent function accepts a
// StudentTestScores object's data.
void displayStudent(StudentTestScores s)
{
    cout << "Name: " << s.getStudentName() << endl;
    cout << "Test Scores: ";
    for (int i = 0; i < s.getNumTestScores(); i++)
        cout << s.getTestScore(i) << " ";
    cout << endl;
}
