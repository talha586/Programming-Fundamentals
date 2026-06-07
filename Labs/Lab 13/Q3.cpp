#include<iostream>
#include<ctime>
#include<fstream>
#include<string>

using namespace std;

int total, successful, failed;

void writeLog() {
    ofstream writelog("logs.txt");

    writelog << "Date Time IPAddress Type Code\n";

    time_t now = time(nullptr);

    tm localTime;

    string ip, request;
    int code;
    char option;

    do
    {
        cout << "Do you want to enter more data? (Y/N): ";
        cin >> option;
        if (option == 'N')
            break;
        else if (option == 'Y')
        {
            if (localtime_s(&localTime, &now) == 0) {
                int year = 1900 + localTime.tm_year;
                int month = 1 + localTime.tm_mon;
                int day = localTime.tm_mday;

                int hour = localTime.tm_hour;
                int minute = localTime.tm_min;
                int second = localTime.tm_sec;

                writelog << "Date: " << day << "-" << month << "-" << year << " ";
                writelog << "Time: " << hour << ":" << minute << ":" << second << " ";
            }
            else {
                cerr << "Error: Unable to convert time to local time." << endl;
            }
            cout << "Enter IP Address: ";
            cin >> ip;
            cout << "Enter Request Type: ";
            cin >> request;
            cout << "Enter response code: ";
            cin >> code;
            if (code == 200)
                successful++;
            else if (code == 404)
                failed++;
            writelog << ip << " " << request << " " << code << endl;
        }
        else
            cout << "Invalid option.";
    } while (true);

    total = successful + failed;
    writelog.close();
}

void readLog() {

    cout << "Log Entries: " << endl;
    ifstream readlog("logs.txt");
    string line;

    while (getline(readlog, line)) {
        cout << line << endl;
    }
    cout << "Total Requests: " << total << endl;
    cout << "Successful Requests: " << successful << endl;
    cout << "Failed Requests: " << failed << endl;
}

int main() {

    writeLog();
    readLog();

    return 0;
}