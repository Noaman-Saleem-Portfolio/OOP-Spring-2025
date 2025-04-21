
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
    StudentTestScores(string name, int numScores)
    {
        studentName = name;
        createTestScoresArray(numScores);
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
};

int main()
{
    StudentTestScores student1 = StudentTestScores("Maria Jones Tucker", 5);
    StudentTestScores student2 = student1;

    cout << "Student 1 Name = " << student1.getStudentName() << endl;
    cout << "Student 2 Name = " << student2.getStudentName() << endl;

    cout << "Student 1 testScores Array address = " << student1.printAddress() << endl;
    cout << "Student 2 testScores Array address = " << student2.printAddress() << endl;

    return 0;
}
