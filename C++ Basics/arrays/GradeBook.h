#include <iomanip>
#include <iostream>
#include <cstddef>
#include <array>

class GradeBook{

    static const unsigned int students{10};

public:

    GradeBook(std::string& courseName , std::array<int , students>& array) 
        : courseName{courseName} , grades{array} {
            // pass
        } 

    void setCourseName(std::string& name){
        courseName = name;
    }

    const std::string& getCourseName() const{
        return courseName;
    }

    void displayMessage() const{
        // display the welcome message
        std::cout << "Welcome to the Grade Book for\n" << courseName << "!" << std::endl;
        processGrades();
    }

    void processGrades() const{
        // display te grades
        displayGrades();

        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "\nMaximum Grade : " << getMaximum() << std::endl;
        std::cout << "Miniumum Grade : " << getMinimum() << std::endl;
        std::cout << "Class Avarege : "<< getAverage() << std::endl;

        displayBarChart();
    }

    int getMaximum() const{
        // declare hte int varaible
        int maximum{grades[0]};

        for (unsigned int i = 1 ; i < grades.size(); i++){
            if (grades[i] > maximum){
                maximum = grades[i];
            }
        }

        return maximum;
    }

    int getMinimum() const{

        int minimum{grades[0]};

        for (unsigned int i = 1;  i < grades.size(); i++){
            if (minimum  > grades[i]){
                minimum = grades[i];
            }
        }

        return minimum;
    }

    double getAverage() const{
        // return the double tyoe average
        int sum{0};

        for (int i : grades){
            sum += i;
        }

        return static_cast<double>(sum) / students;
    }


    void displayGrades() const{
        std::cout << "Grades of the Students : " << std::endl;
        std::cout << std::endl;
        // dispplay the grades of the students with the index number
        std::cout << "Student" << std::setw(10) << "Grade" << std::endl;

        for (unsigned int i = 0; i < grades.size(); i++){
            std::cout << "Student " << std::setw(2) << i + 1 << " : " << std::setw(3) << grades[i] << std::endl;
        }
    }

    void displayBarChart() const{

         // display the bar chart
        std::cout << "Grades Bar Chart : " << std::endl;
        // calculate the frequenycy of the grades 
        // deckare the integer array
        const unsigned int freSize{11};
        std::array<int , freSize> frequency{};

        // loop throught the grades array
        for (int i : grades){
            int div = i / 10;
            // add to the fre array
            frequency[div] += 1;
        }

       

        for (int i = 0; i < freSize; i++){
            if (i == 10){
                std::cout << "100 : ";
            }
            else{
                std::cout << i * 10 << ":" << ((i + 1) * 10) - 1 << " - ";
            }

            // draw the asterixes
            for (int j = 0; j < frequency[i]; j++){
                std::cout << "*";
            }
            std::cout << std::endl;


        }


    }



private:
    std::string courseName;
    std::array<int, students> grades;
};