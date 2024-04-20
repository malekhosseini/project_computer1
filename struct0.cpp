#include<iostream>
using namespace std;
struct student
{
    string name,family;
    int id;
    float math,phy,fa,mid;
    int ststus; //0 ststus<12 mashrot //1 12<=ststus<19 ghabool //2 ststus<=19 derakhshan   
};
student get_student_data()
{
    student New;
    cout<<"inter ID number:";
    cin>>New.id;
    cout<<"inter name:";
    cin>>New.name;
    cout<<"inter family:";
    cin>>New.family;

    cout<<"inter physics number:";
    cin>>New.phy;
    cout<<"inter math number:";
    cin>>New.math;
    cout<<"inter farsi number:";
    cin>>New.fa;

    return New;
}
void print_studen_data(student data)
{
    cout<<"student name is: "<< data.name<<endl;
    cout<<"student family is: "<< data.family<<endl;
    cout<<"student ID is: "<< data.id<<endl;
    cout<<"student physics number is: "<< data.phy<<endl;
    cout<<"student math is: "<< data.math<<endl;
    cout<<"student farsi numner is: "<< data.fa<<endl;
    cout<<"student middel is: "<< data.mid<<endl;
}
float hesab_mid(student data)
{
    data.mid=(data.fa+data.math+data.phy)/3;
    if(data.mid<12.0)    data.ststus=0;
    if(data.mid<=12.0 && data.mid<19)    data.ststus=1;
    if(data.mid>=19.0)    data.ststus=2;
    return data.mid;
}
int main()
{
    student new_students[10];
    new_students[0]=get_student_data();
    print_studen_data(new_students[0]);
    float a=hesab_mid(new_students[0]);
    cout<<new_students[0].mid<<endl;
    
}