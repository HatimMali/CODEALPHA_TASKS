#include <iostream>
#include <vector>

using namespace std;

struct Course {
    string courseCode;
    double creditHours;
    double gradePoints;
};

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<Course> courses(numCourses);

    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter details for Course " << i + 1 << endl;
        cout << "Course Code: ";
        cin >> courses[i].courseCode;
        cout << "Credit Hours: ";
        cin >> courses[i].creditHours;
        cout << "Grade Points: ";
        cin >> courses[i].gradePoints;
    }

    double totalCreditHours = 0.0;
    double totalGradePoints = 0.0;

    for (const auto& course : courses) {
        totalCreditHours += course.creditHours;
        totalGradePoints += course.creditHours * course.gradePoints;
    }

    double cgpa = totalGradePoints / totalCreditHours;

    cout << "\nCGPA: " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
