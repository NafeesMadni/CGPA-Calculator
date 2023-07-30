#include <iostream> 
#include <stdlib.h> 
#include <string> 
#include <iomanip>
#include <cstdlib>
using namespace std;

const int Size = 5;

class CGPA_Calculator
{
        float Grade[Size], tot_g, CGPA;
        int marks[Size], credit_h[Size], tot_c;
        string sub[Size];
    public:
        CGPA_Calculator();
        void Set_Data();
        void display();
        void Cal_Grades();
        void t_grades();
        void t_credit();
        void Grand_total();
};

CGPA_Calculator ::CGPA_Calculator(){
    tot_g = 0.0;
    CGPA = 0.0;
    tot_c = 0;
    for (int i = 0; i < Size; i++){
        Grade[i] = 0.0;
        marks[i] = 0;
        credit_h[i] = 0;
        sub[i] = "";
    }            
}

void CGPA_Calculator :: display(){
        cout<<" ------------- ---------- ------------ "<<endl;
        cout<<"|    Course   |  Grades  |   Credit   |"<<endl;
        cout<<"|-------------|----------|------------|"<<endl;
    for (int i = 0; i < Size; i++){
        cout<<"|     "<<sub[i].substr(0, 3)<<"     |    "<<Grade[i]<<"     |     "<<credit_h[i]<<"    |"<<endl;
        cout<<"|-------------|----------|------------|"<<endl;
    }
        cout<<"|    Total    |   "<<tot_g<<"   |     "<<tot_c<<"     |"<<endl;
        cout<<" ------------- ---------- ------------ "<<endl;
        cout<<"Your CGPA is "<<CGPA<<endl;
}

void CGPA_Calculator :: Set_Data(){
    for (int i = 0; i < Size; i++){
        cout<<" Subject ["<<(i+1)<<"] Name: ";    cin>>sub[i];
        cout<<" Marks ["<<(i+1)<<"]: ";  cin>>marks[i];
        cout<<" Credit Hours ["<<(i+1)<<"]: ";  cin>>credit_h[i];
    }cout<<endl; 
}

void CGPA_Calculator :: t_grades(){
    float tot = 0.0;   
    for(int i = 0; i <= Size; i++){
        if(i == Size){
            tot_g = tot;
            break;
        }  
        tot += Grade[i];
    }
}

void CGPA_Calculator :: t_credit(){
    int tot = 0;
    for(int i = 0; i <= Size; i++){
        if(i == Size){
            tot_c = tot;
            break;
        }  tot += credit_h[i];
    }
}

void CGPA_Calculator :: Grand_total(){
    float tot_Grad_point = 0.0;  int tot_Credits = 0;
    for (int i = 0; i < Size; i++){
        tot_Grad_point += (Grade[i] * credit_h[i]);
        tot_Credits += credit_h[i]; 
    }   CGPA = tot_Grad_point / float(tot_Credits);
}

void CGPA_Calculator :: Cal_Grades(){
    for (int i = 0; i < Size; i++){
    if(marks[i] >= 80 && marks[i] <= 100)
        Grade[i] = 4.0;
    else if(marks[i] <= 79 && marks[i] >= 78)
        Grade[i] = 3.90;
    else if(marks[i] == 77)
        Grade[i] = 3.80;
    else if(marks[i] <= 76 && marks[i] >= 75)
        Grade[i] = 3.70;
    else if(marks[i] == 74)
        Grade[i] = 3.60;
    else if(marks[i] <= 73 && marks[i] >= 72)
        Grade[i] = 3.50;
    else if(marks[i] == 71)
        Grade[i] = 3.40;
    else if(marks[i] <= 70 && marks[i] >= 69)
        Grade[i] = 3.30;
    else if(marks[i] == 68)
        Grade[i] = 3.20;
    else if(marks[i] <= 67 && marks[i] >= 66)
        Grade[i] = 3.10;
    else if(marks[i] == 65)
        Grade[i] = 3.00;
    else if(marks[i] <= 64 && marks[i] >= 63)
        Grade[i] = 2.90;
    else if(marks[i] == 62)
        Grade[i] = 2.80;
    else if(marks[i] <= 61 && marks[i] >= 60)
        Grade[i] = 2.70;
    else if(marks[i] == 59)
        Grade[i] = 2.60;
    else if(marks[i] <= 58 && marks[i] >= 57)
        Grade[i] = 2.50;
    else if(marks[i] <= 58 && marks[i] >= 57)
        Grade[i] = 2.50;
    else if(marks[i] == 56)
        Grade[i] = 2.40;
    else if(marks[i] <= 55 && marks[i] >= 54)
        Grade[i] = 2.30;
    else if(marks[i] == 53)
        Grade[i] = 2.20;
    else if(marks[i] <= 52 && marks[i] >= 51)
        Grade[i] = 2.10;
    else if(marks[i] == 50)
        Grade[i] = 2.0;
    else
        Grade[i] = 0;
    }
}

int main()
{
    system("pause");
    cout << setprecision(3);
    CGPA_Calculator g;
    g.Set_Data();
    g.Cal_Grades();
    g.t_grades();
    g.t_credit();
    g.Grand_total();
    g.display();
}
