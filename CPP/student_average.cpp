#include<iostream>
#include<vector>
using namespace std;


class Student
{
private:
    string name;
    vector<int> grades;
public:
   Student(string n){
    name=n;
   }

void addGrade(int g){
  grades.push_back(g);
}
  double getAverage(){
   int total=0;

   for(int grade:grades){

     total+=grade;
   }

   return (double)total/ grades.size();

  }

    void printInfo(){

        cout<<name<<endl;
        cout<<getAverage()<<endl;
    }





};

int main(){

Student s("Elif");
s.addGrade(80);
s.addGrade(90);

s.printInfo();

return 0;

}












