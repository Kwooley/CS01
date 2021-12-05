
#include <iostream>
#include <fstream>
using namespace std;
const int maxCourseAmt = 99;
struct Course
{
	string Course = "";
	int Credit = 0;
	int Score = 0;};
struct Student{
	int ID = 0;
	string Name = "";
	Course arrCourse[maxCourseAmt];
};
int isInArray(Student arr[],  int target)
{
	int i = 0;
	while (arr[i].ID != 0)
	{
		if (arr[i].ID == target)return i;
		i++;
	}
	return -1;
}
int main(){
	fstream inputFile;
	string  fileName = "StudentRecords.txt";
	string token;
	Student arrStu[9];
	inputFile.open(fileName, ios::in);
	if (inputFile.is_open())
	{
		int index = 0;
		int ID;
		string Name;
		string CourseName;
		int Credit;
		int Score;
		while(!inputFile.eof())
		{
			inputFile >> ID >> Name >> CourseName >> Credit >> Score;
			int ii = isInArray(arrStu, ID);
			if (ii == -1) // The student record does not exist
			{
				arrStu[index].ID  = ID;
				arrStu[index].Name = Name;
				arrStu[index].arrCourse[0].Course = CourseName;
				arrStu[index].arrCourse[0].Credit = Credit;
				arrStu[index].arrCourse[0].Score = Score;
				index++;}
			else /// The student exists
			{
			/// Add course and score to the existing student record
			}
		}
		inputFile.close();
		}
	else
		cout << "File cannot be opened.";
	
	int target = 15667;
	int ii = isInArray(arrStu, target);
	if (ii == -1)
		cout << target << " does not exist." << endl;
	else
		cout << "The record is found. The index is " << ii << endl;
	target = 99999;
	ii = isInArray(arrStu, target);
	if (ii == -1)
		cout << target << " does not exist." << endl;
	else
		cout << "The record is found. The index is " << ii << endl;
	return 0;
}