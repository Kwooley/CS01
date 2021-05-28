#include <iostream>
using namespace std;

int wordcount(string , string);
int main()
{
    string  userinput;
    string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

    cout << "Enter user string ";
    cin >> userinput;
    wordcount(userinput, words);
}

int wordcount(string userinput, string words)
{
    int pos, start=0, cnt=0;
    while( (pos = words.find(userinput, start)) != string::npos )
    {
        cout << "Found at " << pos << " in " << words.substr(words.rfind(" ",pos), words.find(" ",pos)-words.rfind(" ",pos)+1 ) <<endl;
        start = pos + 1;
        cnt++;
    }
    return cnt;
}