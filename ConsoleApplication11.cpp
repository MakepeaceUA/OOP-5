#include<iostream>
using namespace std;

////Задание 1
//class Contact
//{
//    char* FullName;
//    char* sex;
//    int HomePhone, WorkPhone, MobilePhone;
//    int age;
//
//
//public:
//    Contact() : Contact(" ", " ", 0, 0, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex) : Contact(Fl_Name, Sex, 0, 0, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex, int Age) : Contact(Fl_Name, Sex, Age, 0, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex, int Age, int HmPhone) : Contact(Fl_Name, Sex, Age, HmPhone, 0, 0) {}
//    Contact(const char* Fl_Name, const char* Sex, int Age, int HmPhone, int WrPhone) : Contact(Fl_Name, Sex, Age, HmPhone, WrPhone, 0) {}
//
//
//    Contact(const Contact& copy)
//    {
//        FullName = new char[strlen(copy.FullName) + 1];
//        sex = new char[strlen(copy.sex) + 1];
//        strcpy_s(FullName, strlen(copy.FullName) + 1, copy.FullName);
//        strcpy_s(sex, strlen(copy.sex) + 1, copy.sex);
//
//        age = copy.age;
//        HomePhone = copy.HomePhone;
//        WorkPhone = copy.WorkPhone;
//        MobilePhone = copy.MobilePhone;
//    }
//
//    Contact(const char* Fl_Name, const char* Sex, int Age, int HmPhone, int WrPhone, int MbPhone)
//    {
//        FullName = new char[strlen(Fl_Name) + 1];
//        sex = new char[strlen(Sex) + 1];
//        strcpy_s(FullName, strlen(Fl_Name) + 1, Fl_Name);
//        strcpy_s(sex, strlen(Sex) + 1, Sex);
//
//        age = Age;
//        HomePhone = HmPhone;
//        WorkPhone = WrPhone;
//        MobilePhone = MbPhone;
//    }
//
//
//    void Set_FullName(const char* Fl_Name)
//    {
//        if (FullName != nullptr)
//            delete[] FullName;
//        FullName = new char[strlen(Fl_Name) + 1];
//        strcpy_s(FullName, strlen(Fl_Name) + 1, Fl_Name);
//    }
//    void Set_AdditInfo(const char* Sex, int Age)
//    {
//        if (sex != nullptr)
//            delete[] sex;
//        sex = new char[strlen(Sex) + 1];
//        strcpy_s(sex, strlen(Sex) + 1, Sex);
//        age = Age;
//    }
//    void Set_PhoneNumber(int HmPhone, int WrPhone, int MbPhone)
//    {
//        HomePhone = HmPhone;
//        WorkPhone = WrPhone;
//        MobilePhone = MbPhone;
//    }
//
//
//    void Output()
//    {
//        if (FullName == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "Full Name: " << FullName << "\n";
//        cout << "Sex: " << sex << "\n";
//        cout << "Age: " << age << "\n\n";
//        cout << "Home Phone: " << HomePhone << "\n";
//        cout << "Work Phone: " << WorkPhone << "\n";
//        cout << "Mobile Phone: " << MobilePhone << "\n\n\n";
//    }
//    //    //~Contact()
//    //    //{
//    //    //    cout << "Destruct\n";
//    //    //    delete[] FullName;
//    //    //    delete[] sex;
//    //    //}*/ Если деструктор не будет в комментарии,будет ошибка.
//    };
//    void iteration(Contact* arr, int size)
//    {
//        for (int i = 0; i < size; i++)
//        {
//            arr[i].Output();
//        }
//        cout << "\n\n\n\n";
//    }
//
//    void AddContact(Contact*& arr, int size, Contact& NewArr)
//    {
//        Contact* temp = new Contact[size + 1];
//
//        for (int i = 0; i < size; i++)
//        {
//            temp[i] = arr[i];
//        }
//
//        temp[size] = NewArr;
//        delete[] arr;
//        arr = temp;
//
//        iteration(arr, size + 1);
//    }
//
//    void RemoveContact(Contact*& arr, int size, int index)
//    {
//        size--;
//        Contact* temp = new Contact[size];
//
//        for (int i = 0; i < size; i++)
//        {
//            if (i != index)
//            {
//                temp[i] = arr[i];
//                continue;
//
//            }
//        }
//        delete[] arr;
//        arr = temp;
//        iteration(arr, size);
//    }
//
//    int main()
//    {
//        int size = 3;
//        Contact* mas = new Contact[size]
//        {
//            {"Konstantin Ghenadii Dmitrievich ", "Male", 34, 350055019, 907100905, 660690345},
//            {"Arsen Sevastianov Ruslanovich", "Male", 16, 340069590, 340010090, 690325859},
//            {"Anastasia Maksimenko Alekseevna", "Female", 56, 551010452, 677641356, 760400561}
//        };
//
//        iteration(mas, size);
//
//        /*Contact newContact("Alexhsander Bondari Nickolaevich", "Male", 44, 67893123, 67894020, 700862121);
//        AddContact(mas, size, newContact);
//        RemoveContact(newContact, size, 3);*/
//
//        Contact* newContact = mas;
//        iteration(newContact, size);
//
//        Contact* NewCont(mas);
//        iteration(NewCont, size);
//    }



//Задание 2
//class MyString
//{
//    char* str;
//    int size;
//    static int count;
//
//public:
//    MyString()
//    {
//        size = 80;
//        str = new char[size + 1];
//        count++;
//    }
//
//    MyString(const MyString& copy)
//    {
//        size = copy.size;
//        str = copy.str;
//        count++;
//    }
//
//    MyString(int Size)
//    {
//        size = Size;
//        str = new char[size + 1];
//        count++;
//    }
//
//    MyString(const char* arr)
//    {
//        size = strlen(arr);
//        str = new char[size + 1];
//        strcpy_s(str, size + 1, arr);
//        count++;
//    }
//
//    void Input()
//    {
//        cout << "Input string:";
//        cin.getline(str, size + 1);
//    }
//
//    void Output()
//    {
//        if (str == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "String: " << str << "\n\n\n";
//    }
//
//    static int GetCount()
//    {
//        return count;
//    }
//
//    /* ~MyString()
//     {
//         delete[] str;
//         count--;
//     }*/
//};
//
//int MyString::count = 0;
//
//int main()
//{
//    MyString obj1;
//    MyString obj2(20);
//    MyString obj3("Hello");
//    MyString obj4 = obj3;
//    MyString obj5(obj3);
//
//    obj1.Input();
//    obj1.Output();
//    obj2.Input();
//    obj2.Output();
//    obj3.Output();
//    
//    obj4.Output();
//    obj5.Output();
//
//    cout << "Count: " << MyString::GetCount();
//}