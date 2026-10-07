#include <iostream>
using namespace std;
int main()
{
    double num,deno,result,x;
    cout<<"Press ALT + Enter to Fullscreen\n";
    cout<<"/*=== Homework Grader ===*\\ \n";
    cout<<"Figure out what grade you got\n";
    cout<<"This will determine the grade you got (A, B, C or D)\n";
    while(true){

        cout<<"Input the NUMERATOR of your mark here: ";
        cin>>num;
        cout<<"\nInput the DENOMINATOR of your mark here: ";
        cin>>deno;
        x=(num/deno)*100;
        if (x>=80 && x<=100){
            cout<<"You got an A.\n";
        }
        else if (x>=70 && x<=79){
            cout<<"You got a B. \n";
        }
        else if (x>=60 && x<=69){
            cout<<"You got a C. \n";
        }
        else if (x>=50 && x<=59){
            cout<<"You got a D. \n";
        }
        else if (x<50){
            cout<<"You got a F. That is a failing grade.\n";
        }
        else if (x > 100){
            cout<<"Those numbers are not valid.\n";
        }

        cout<<"The program will loop. You can close it if you are done.\n";

    }
}
