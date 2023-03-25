#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <cstdlib>
//
// Created by DELL on 10/10/2021.
//


class GradeBook{
public:

    static const int column{3};
    static const int row{10};

    // declare the constructtor
    GradeBook(std::array<std::array<int ,column>, row>& array , std::string& name):
                courseName{name} , marks{array} {
        // this is the empty array
    }

    const std::string& getCourseName(){
        return courseName;
    }

    void setCourseName(std::string& name){
        courseName = name;
    }

    // declare the display report methos
    void displayReport() const{
        std::cout << "Welcome to Grade Book Report for" << std::endl;
        std::cout << courseName << "!" << std::endl;

        displayMarks();
        // display the min and max of the marks
        std::cout << "the maximum mark : " << maximum() << std::endl;
        std::cout << "the minimum mark : " << minimum() << std::endl;

        displayBarChart();
    }

    int minimum() const{
        // loop through the  marks array
        int min{marks[0][0]};

        for (int i = 0; i < marks.size(); i++){
            for (int j = 0; j < marks[0].size() ;j++){
                if (min > marks[i][j]){
                    min = marks[i][j];
                }
            }
        }
        return min;
    }

    int maximum() const{
        int max{marks[0][0]};

        for (int i = 0; i < marks.size(); i++){
            for (int j = 0; j < marks[0].size(); j++){
                if (max < marks[i][j]){
                    max = marks[i][j];
                }
            }
        }
        return max;
    }

    void displayMarks() const{
        // first calculate the averages of the students
        // declare the new array
        std::array<double ,row> averages;
        for (int i = 0; i < marks.size(); i++){
            int total{0};
            for (int j = 0; j < marks[0].size(); j++){
                total += marks[i][j];
            }

            averages[i] = static_cast<double>(total) / column;
        }

        // display the students marks as the table
        std::cout << std::right << std::setw(12) << " " << std::setw(7) << "exam 1" << std::setw(7) << "exam 2" <<
        std::setw(7) << "exam 3" << std::setw(10) << "Average" << std::endl;

        std::cout << std::endl;

        std::cout << std::setprecision(2) << std::fixed;
        for (int i = 0; i < marks.size(); i++){
            std::cout << std::setw(10) << "Student " << std::setw(2) << i << std::setw(7) << marks[i][0] << std::setw(7) <<
            marks[i][1] << std::setw(7) << marks[i][2] << std::setw(10) << averages[i] << std::endl;
        }

        std::cout << std::endl;

    }

    void displayBarChart() const{
        // first calculate the frequencies
        // declare the new array for store theh frequencies
        std::array<int , 11> frequencies{};
        // loop the marks array
        for (int i = 0; i < marks.size() ; i++){
            for (int j = 0; j < marks[0].size(); j++){
                // use the division for this
                frequencies[marks[i][j] / 10] += 1; 
            }
        }
        // now display the bar chart
        std::cout << "Bar Chart : " << std::endl;
        std::cout << std::endl;

        for (int i = 0; i < frequencies.size(); i++){
            if (i == 10){
                std::cout << std::setw(8) << "100"; 
            }
            else{
                std::cout << std::setw(8) << i * 10 << "-" << (i * 10 + 9) << " ";
            }

            // print the astreix for bar
            for (int k{0}; k < frequencies[i]; k++){
                std::cout << "*";
            }

            std::cout << std::endl;


        }
    }

private:
    // declare the data members
    std::string courseName;
    std::array<std::array<int, column>, row> marks;
};

#ifndef C___BASICS_GRADEBOOK_H
#define C___BASICS_GRADEBOOK_H

#endif //C___BASICS_GRADEBOOK_H
