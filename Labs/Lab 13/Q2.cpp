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
//    string roll_number, name, subject;
//    int numbers;
//
//    cout << "Enter Roll Number: ";
//    cin >> roll_number;
//    for (char a : roll_number)
//    {
//        if (a < '0' || a > '9')
//        {
//            cout << "Roll Number must be a number." << endl;
//            return;
//        }
//    }
//
//    cout << "Enter Name: ";
//    cin >> name;
//    for (char b : name)
//    {
//        if ((b < 'A' || b > 'Z') && (b < 'a' || b > 'z'))
//        {
//            cout << "Student Name must contain only letters." << endl;
//            return;
//        }
//    }
//
//    cout << "Enter Subject: ";
//    cin >> subject;
//    for (char c : subject)
//    {
//        if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
//        {
//            cout << "Subject must contain only letters." << endl;
//            return;
//        }
//    }
//
//    cout << "Enter number: ";
//    cin >> numbers;
//    if (numbers < 0 || numbers > 100)
//    {
//        cout << "Marks must be between 0 and 100." << endl;
//        return;
//    }
//
//    file << roll_number << " " << name << " " << subject << " " << numbers << " ";
//    file.close();
//}
//
//void getdata(const string& file_name)
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
//void averagemarks(const string& file_name, const string& subject) {
//    ifstream file(file_name);
//    if (!file.is_open())
//    {
//        cout << "No records found in " << file_name << endl;
//        return;
//    }
//
//    string line;
//    int total_marks = 0, count = 0;
//    string current_subject;
//    while (getline(file, line)) {
//        string roll_number = line;
//        getline(file, line);
//        string name = line;
//        getline(file, line);
//        current_subject = line;
//        getline(file, line);
//        int marks = stoi(line);
//
//        if (current_subject == subject)
//        {
//            total_marks += marks;
//            count++;
//        }
//    }
//
//    file.close();
//    if (count == 0) {
//        cout << "No records found for subject " << subject << "." << endl;
//    }
//    else {
//        cout << "Average Marks in " << subject << ": " << static_cast<float>(total_marks) / count << endl;
//    }
//}
//
//int main() {
//    string file_name = "students.txt";
//    int choice;
//    while (true)
//    {
//        cout << "Enter 1 to type student data" << endl;
//        cout << "Enter 2 to read data" << endl;
//        cout << "Enter 3 to append data" << endl;
//        cout << "Enter 4 to calculate marks" << endl;
//        cout << "Enter 5 to exit" << endl;
//        cin >> choice;
//        if (choice==1)
//        {
//            getinput(file_name);
//        }
//        if (choice==2)
//        {
//            getdata(file_name);
//        }
//        if (choice==3)
//        {
//            appenddata(file_name);
//        }
//        if (choice==4)
//        {
//            string subject;
//            cout << "Enter subject";
//            cin >> subject;
//            averagemarks(file_name,subject);
//            break;
//        }
//        if (choice == 5)
//        {
//            cout << "Exit";
//        }
//        if (choice > 5 || choice < 0)
//        {
//            cout << "invalid data";
//            return 0;
//        }
//    }
//
//    return 0;
//}