#include<iostream>
#include <fstream>
using namespace std;
/// یک شی از نوع فایل خروجی برای ذخیره سازی داده های دانشجویان
ofstream MyFile("students_data.txt");
/// @brief این ساختار دیتای یک دانشجو در کد برنامه است
struct student
{
    string name,family;
    int id;// شماره دانشجویی
    float math,phy,fa,mid;
    int ststus; //0 ststus<12 mashrot //1 12<=ststus<19 ghabool //2 ststus<=19 derakhshan   
};
/// @brief این تابع برای گرفتن داده های یک دانشجوی جدید از کاربر طراحی شده است
/// @return اطلاعات یک دانشجوی جدید
student get_student_data()
{
    student New;
    cout<<"inter ID number:";
    cin>>New.id;
    MyFile<<New.id<<endl;
    cout<<"inter name:";
    cin>>New.name;
    MyFile<<New.name<<endl;
    cout<<"inter family:";
    cin>>New.family;
    MyFile<<New.family<<endl;

    cout<<"inter physics number:";
    cin>>New.phy;
    MyFile<<New.phy<<endl;
    cout<<"inter math number:";
    cin>>New.math;
    MyFile<<New.math<<endl;
    cout<<"inter farsi number:";
    cin>>New.fa;
    MyFile<<New.fa<<endl;
    MyFile<<endl;

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
/// @brief این تابع مقدار معدل دانشجو را محاسبه میکند
/// @param data 
/// @return مقدار خروجی معدل دانشجویی است که به عنوان ورودی به تابع داده شده است
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
    new_students[1]=get_student_data();
    new_students[2]=get_student_data();
    print_studen_data(new_students[0]);
    float a=hesab_mid(new_students[0]);
    cout<<new_students[0].mid<<endl;
    
}