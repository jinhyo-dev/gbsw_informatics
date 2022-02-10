#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
    char name[10];
    int Id;
    int ko;
    int en;
    int math;
    int total = ko+en+math;
    int avg = total/3;
public:
    void setStudent(char *stdName, int stdID, int stdKo, int stdEn, int stdMath, int stdTotal, int stdAvg) {
        strcpy(name,stdName);
        Id = stdID;
        ko = stdKo;
        en = stdEn;
        math = stdMath;
        total = stdTotal;
        avg = stdAvg;
    }

    void editStudent (int korean, int english, int Math, int Total, int average) {
        ko = korean;
        en = english;
        math = Math;
        total = Total;
        avg = average;
    }

    void outputGrade () {

        cout<<"이름 : "<<name<<endl;
        cout<<"학번 : "<<Id<<endl;
        cout<<"국어 : "<<ko<<endl;
        cout<<"영어 : "<<en<<endl;
        cout<<"수학 : "<<math<<endl;
        cout<<"총점 : "<<total<< endl;
        cout<<"평균 : "<<avg<<endl;

    }

    int GetId() {
        return Id;
    }
};
Student stdArr[100];
int stdNum = 0;

void ShowMenu();
void stdMake();
void stdEdit();
void stdShow();

int main()
{
 int choice;
    while (1) {
        ShowMenu();
        cout<<"선택 : -> ";
        cin >> choice;
        switch (choice) {
            case 1: stdMake(); break;
            case 2: stdEdit(); break;
            case 3: stdShow(); break;
            case 4: return 0; break;
            default: cout<<"잘못된 입력입니다";
        }
    }
}

void ShowMenu()
{
    cout<<"================"<<endl;
    cout<<"   1. 학생등록"<<endl;
    cout<<"   2. 성적수정"<<endl;
    cout<<"   3. 성적출력"<<endl;
    cout<<"    4. 종료"<<endl;
    cout<<"================"<<endl;
}
void stdMake()
{
    char name[10];
    int Id,ko,en,math;

    cout<<"학생 이름을 입력하시오 : ";
    cin>>name;
    cout<<"학번을 입력하시오 : ";
    cin>>Id;
    cout<<"국어 점수를 입력하시오 : ";
    cin>>ko;
    cout<<"영어 점수를 입력하시오 : ";
    cin>>en;
    cout<<"수학 점수를 입력하시오 : ";
    cin>>math;

    int total = ko+en+math;
    int avg = total/3;
    stdArr[stdNum].setStudent(name, Id, ko, en, math,total,avg);
    stdNum++;
}

void stdEdit()
{
    int Id,ko,en,math;
    cout<<"수정할 학생의 학번을 입력하세요 : ";
    cin>>Id;
    cout<<"수정할 국어 점수를 입력하세요 : ";
    cin>>ko;
    cout<<"수정할 영어 점수를 입력하세요 : ";
    cin>>en;
    cout<<"수정할 수학 점수를 입력하세요 : ";
    cin>>math;

    int total = ko+en+math;
    int avg = total/3;

    for (int i = 0; i < stdNum; i++) {
        if (stdArr[i].GetId() != Id) cout<<"해당 학번이 존재하지 않습니다."<<endl;
        else stdArr[i].editStudent(ko,en,math,total,avg);
    }
}

void stdShow()
{
    for (int i = 0; i < stdNum; i++) {
        stdArr[i].outputGrade();
    }
}

