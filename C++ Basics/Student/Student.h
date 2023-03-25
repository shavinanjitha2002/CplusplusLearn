#include <string>

class Student{

public:
    // create the constructor
    Student(std::string std_name, int mark) : name{std_name} {

        // set the marks
        if (marks <= 100){
            marks = mark;
        }
    }

    void setName(std::string std_name){
        name = std_name;
    }

    std::string getName() const{
        return name;
    }

    void setGrade(int mark){
        marks = mark;
    }

    int getMarks() const{
        return marks;
    }

    std::string getGrade(){
        
        if (marks >= 75){
            return "A";
        }   
        else if (marks >= 65){
            return "B";
        }
        else if (marks >= 55){
            return "C";
        }
        else{
            return "D";
        }
    }


private:
    std::string name;
    unsigned int marks{0};


};