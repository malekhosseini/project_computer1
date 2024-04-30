#include<iostream>
#include <fstream>
using namespace std;
/// یک شی از نوع فایل خروجی برای ذخیره سازی داده های دانشجویان
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
student get_student_data(ofstream& File)
{
    student New;
    cout<<"inter ID number:";
    cin>>New.id;
    File<<New.id<<endl;
    cout<<"inter name:";
    cin>>New.name;
    File<<New.name<<endl;
    cout<<"inter family:";
    cin>>New.family;
    File<<New.family<<endl;

    cout<<"inter physics number:";
    cin>>New.phy;
    File<<New.phy<<endl;
    cout<<"inter math number:";
    cin>>New.math;
    File<<New.math<<endl;
    cout<<"inter farsi number:";
    cin>>New.fa;
    File<<New.fa<<endl;
    File<<endl;

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
int menue()
{
    int sel=0;
    system("clear"); 
    cout<<"Please select a number: "<<endl;
    cout<<"1  get new data for 10 new student "<<endl;
    cout<<"2  print mid for students"<<endl;
    cout<<"3  exit program"<<endl;
    cin>>sel;
    return sel;
}
void get_save_10_new_data( student data[10])
{
    cout<<"Please inter name for a file to store new data:"<<endl;
    string file_name;
    cin>>file_name;
    ofstream MyFile(file_name);

    for(int i=0;i<10;i++)
    {
        data[i]=get_student_data(MyFile);
    }
    MyFile.close();
}
int main()
{
    system("clear"); 
    student new_students[10];
    int sel_men=menue();
    if(sel_men==1) get_save_10_new_data(new_students);
    if(sel_men==2){};
    if(sel_men==3){};
    
}