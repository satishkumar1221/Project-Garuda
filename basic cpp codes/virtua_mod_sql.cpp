#include <iostream>
//#include<stdlib>
#include <list>
#include <map>
#include<fstream>
#include<string>
using namespace std;
//implementation using structures and then implement them using classes// // // //
struct student
{
  int rollnumber;
  int math,eng;
  string name;
};
/*struct professor
{
  struct student s1;

};*/
typedef student Student;
//typedef professor Professor;

Student enterdetails(string name, Student *s1,int rollnumber,int math,int eng,list<Student>stu)
{
  s1->rollnumber = rollnumber;
  s1-> math= math;
  s1->eng = eng;
  s1->name = name;
  //stu.push_back(*s1);
  // let us use reinterpret cas t to onvert from student* to student>

  return(*s1);
}

void Keyword(ifstream & stream, string token) {
    string line;
    while (getline(stream, line)) {
        if (line.find(token) != string::npos) {
            cout << line << endl;
        }
    }
    cout << token << " not found" << endl;
    stream.close();
}
/*void print(list<Student>stu)
{
  list<Student>::iterator itr;
  for(itr = stu.begin();itr!=stu.end();itr++)
  {
    //std::cout <"rollom"<< itr->rollnumber<< '\n';
    std::cout<<"math is"<< itr->math << std::endl;
    std::cout<<"eng si"<<itr->eng<<std::endl;
  }*/
//}
int main()
{
  cout<<"hello world !!! This is my first program"<<endl;
  std::cout << "select the required option for professor 1.enter 2.find 3. modify" << '\n';
  int sel,math,eng,rollnumber;
  ofstream myfile;
  myfile.open ("example.txt",std::ios_base::app);//append to  the file /////
  myfile<<"name ,"<<"roll no," <<"math , "<<"eng ,"<<endl;
  string name;
  cin>>sel;
  list<Student> stu;
  list<student>::iterator itr;

  switch (sel)
  {
    case 1 : std::cout<<"first enter number of students to enter marks"<<endl;
              int num;
              cin>>num;
             std::cout << "Enter the student details including marks of math and eng " << '\n';
             for(int i=0;i<num;i++)
             {
             std::cin>>name>>rollnumber>>math>>eng;
             student *s1;
             s1 = new student;
             stu.push_back(enterdetails(name,s1,rollnumber,math,eng,stu));
             delete(s1);
            // print(stu);
            }
             break;
    case 2 : {
             std::cout << "Enter the option to find student record " << '\n';
             cout<<"enter the roll number or name of the students preferrbly rollnumber for easier search"<<endl;
             string namepop;
              cin>>namepop;
             ifstream fin;
             fin.open("example.txt");
             if(fin.fail())
             {
               cout<<"file opening failed or file not present"<<endl;
                //exit(100);
             }
            Keyword(fin,namepop);
          }
            break;
   case 3 : {
             std::cout << "Enter the rollnumber to mopdify the records" << '\n';
            }
             break;


   case 4 :{
     std::cout<<"print everything in a document"<<endl;
     ifstream fin;
     fin.open("example.txt");
     string chkword;
     while(getline(fin,chkword))
     {
       std::cout<<chkword;
     }

            // print(stu);
          }
             break;
    default : std::cout << "Not a valid option" << '\n';

  }

  for(itr = stu.begin();itr!=stu.end();itr++)
  {
  //  std::cout <"rollom"<< itr->rollnumber<< '\n';
    std::cout<<"math is "<< itr->math << std::endl;
    std::cout<<"eng si "<<itr->eng<<std::endl;
    myfile<< itr->name<<"," << itr->rollnumber<<"," << itr->math<<"," << itr->eng <<endl;
  }
  myfile.close();
   // cout<<stu.size()<<endl;
 return 0;
}
