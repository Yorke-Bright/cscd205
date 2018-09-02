#include<iostream>
using namespace std;
int ExamScore;
int main()
{
cout<<"enter exam score";
cin>>ExamScore;
if(ExamScore>=0&&ExamScore<=49)
cout<<"grade F";
else if(ExamScore>=50&&ExamScore<=54)
cout<<"grade D";
else if(ExamScore>=55&&ExamScore<=59)
cout<<"grade D+";
else if(ExamScore>=60&&ExamScore<=64)
cout<<"grade C";
else if(ExamScore>=65&&ExamScore<=69)
cout<<"grade C+";
else if(ExamScore>=70&&ExamScore<=74)
cout<<"grade B";
else if(ExamScore>=75&&ExamScore<=79)
cout<<"grade B+";
else if(ExamScore>=80&&ExamScore<=100)
cout<<"grade A";
else
cout<<"exam score must be between 0 and 100";
return 0;
}
