#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
        // 3 Students :
        // math score, geometry score, english score;
        // ask for student's name, phone number, 3 score
        //  print the student's name, all scores, sum, avg;

        float math, geo, eng, sum, avg;
        string lastname;
        string phone;

        cout << "Enter Your Last name: " << endl;
        cin >> lastname;

        cin.ignore();
        cout << "Enter Phone Number: " << endl;
        getline(cin, phone);

        cout << "Enter Math, Geo, and Eng score: ";
        cin >> math >> geo >> eng;

        sum = (math + geo + eng);

        avg = sum / 3;

        cout << "Last name: " << lastname << endl;
        cout << "Phone number: " << phone << endl;
        cout << "Math score: " << math << " "
             << "Geometry score: " << geo << " "
             << "English score: " << eng << endl;
        cout << "Sum: " << sum << endl;
        cout << " Average: " << avg << endl;
}
