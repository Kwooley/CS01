// parallel array 

#include		<iostream>
#include		<iomanip>
#include		<fstream>
using namespace	std;


int		main()
{
	ifstream	ifile;
	const int	NUM=10, W=5;
	int			i;
	int			score1[NUM], score2[NUM], sum[NUM], sumscore1=0, sumscore2=0;
	double		avg[NUM], avgscore1, avgscore2;
	string		name[NUM];

	ifile.open("students.txt");
	for(i=0;i<NUM; i++){
		if (ifile >> name[i] >> score1[i] >> score2[i] ){
			sum[i] = score1[i] + score2[i];
			avg[i] = sum[i] / 2;
			sumscore1 += score1[i];
			sumscore2 += score2[i];
		}
	}
	avgscore1 = static_cast<double>(sumscore1)/ NUM;
	avgscore2 = static_cast<double>(sumscore2) / NUM;


	for(i=0;i<NUM; i++){
		cout << "ID: " << i << " student's name " << name[i] << "\t";
		cout << " score 1 :" << setw(W) << score1[i];
		cout << " score 2 :" << setw(W) << score2[i];
		cout << " sum :" << setw(W) << sum[i];
		cout << " avg :" << setw(W) << avg[i] << endl;
	}
	cout << " Total sum of score1 and average :" << setw(W) << sumscore1 << setw(W) << avgscore1 << endl;
	cout << " Total sum of score2 and average :" << setw(W) << sumscore2 << setw(W) << avgscore2 << endl;


}