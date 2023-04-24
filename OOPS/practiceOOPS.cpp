#include<iostream>
using namespace std;

class Student
{
    private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

    public:
    Student(int r,string n,int m,int p,int c){
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }
    int total(){
        return mathMarks + phyMarks + chemMarks;
    }
    char grade(){
        int totalMarks = total();
        float average = totalMarks/3;
        if(average > 60){
            return 'A';
        }
        else if(average>=40 && average<60){
            return 'B';
        }
        else{
            return 'C';
        }
    }
};
int main(){
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter roll number of Student: ";
    cin>>roll;
    cout<<"Enter name of Student: ";
    cin>>name;
    cout<<"Enter marks in three subjects: ";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total marks: "<<s.total()<<endl;
    cout<<"Grade is: "<<s.grade()<<endl;
}