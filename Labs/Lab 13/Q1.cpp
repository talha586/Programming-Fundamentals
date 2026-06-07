//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//void getinput(const string& file_name)
//{
//    ofstream file(file_name, ios::app);
//    if (!file.is_open())
//    {
//        cout << "Error opening file." << endl;
//        return;
//    }
//
//    string id, name, department;
//    int salary;
//
//    cout << "Enter Employee ID: ";
//    cin >> id;
//    for (char a : id)
//    {
//        if (a < '0' || a > '9')
//        {
//            cout << "Employee ID must be a number." << endl;
//            return;
//        }
//    }
//
//    cout << "Enter Employee Name: ";
//    cin >> name;
//    for (char b : name)
//    {
//        if ((b < 'A' || b > 'Z') && (b < 'a' || b > 'z'))
//        {
//            cout << "Employee Name must contain only letters." << endl;
//            return;
//        }
//    }
//
//    cout << "Enter Department: ";
//    cin >> department;
//    for (char c : department)
//    {
//        if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
//        {
//            cout << "Department must contain only letters." << endl;
//            return;
//        }
//    }
//
//    cout << "Enter Monthly Salary: ";
//    cin >> salary;
//    if (salary <= 0)
//    {
//        cout << "Monthly Salary must be a positive number." << endl;
//        return;
//    }
//
//    file << id << " " << name << " " << department << " " << salary << "\n";
//    file.close();
//}
//
//void readdata(const string& file_name)
//{
//    ifstream file(file_name);
//    if (!file.is_open())
//    {
//        cout << "No records found in " << file_name << endl;
//        return;
//    }
//
//    string line;
//    while (getline(file, line))
//    {
//        cout << line << endl;
//    }
//    file.close();
//}
//
//void appenddata(const string& file_name)
//{
//    getinput(file_name);
//}
//
//void salary(const string& file_name)
//{
//    ifstream file(file_name);
//    if (!file.is_open())
//    {
//        cout << "No records found in " << file_name << endl;
//        return;
//    }
//
//    string line;
//    int total_payroll = 0;
//    while (getline(file, line))
//    {
//        int pos = 0, field_counter = 0;
//        string token;
//        for (int i = 0; i < line.length(); i++)
//        {
//            if (line[i] == ',')
//            {
//                field_counter++;
//                if (field_counter == 3)
//                {  // Salary field
//                    token = line.substr(pos + 1, i - pos - 1);
//                    total_payroll += stoi(token) * 12;
//                    break;
//                }
//                pos = i;
//            }
//        }
//    }
//
//    file.close();
//    cout << "Total Annual Payroll: " << total_payroll << endl;
//}
//
//
//int main()
//{
//    int choice;
//    string file = "employees.txt";
//    while (true)
//    {
//        cout << "Enter 1 to write employe detail" << endl;
//        cout << "Enter 2 to read all employee details" << endl;
//        cout << "Enter 3 to append new employe detail" << endl;
//        cout << "Enter 4 to calculate and diplay annual payroll" << endl;
//        cout << "Enter 5 for exit" << endl;
//        cin >> choice;
//if (choice == 1)
//{
//    getinput(file);
//}
//if (choice == 2)
//{
//    readdata(file);
//}
//if (choice == 3)
//{
//    appenddata(file);
//}
//if (choice == 4)
//{
//    string subject;
//    cout << "Enter subject";
//    cin >> subject;
//    salary(file);
//    break;
//}
//if (choice == 5)
//{
//    cout << "Exit";
//}
//if (choice > 5 || choice < 0)
//{
//    cout << "invalid data";
//    return 0;
//}
//    }
//
//    return 0;
//}