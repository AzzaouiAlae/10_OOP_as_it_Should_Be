#include <iostream>
#include <vector>
#include "clsString.h"

using namespace std;

int main()
{
    clsString str;

    str.Value = " ;; Alae Azzaoui ;; ";
    cout << "Print First Letter In Each Word\n";
    cout << "==========================================\n";
    str.PrintFirstLetterInEachWord();
    cout << "------------------------------------------\n";

    cout << "\nLower First Letter\n";
    cout << "==========================================\n";
    str.Value = str.LowerFirstLetter();
    cout << str.Value << endl;
    cout << "------------------------------------------\n";
    
    cout << "\nUpper First Letter Words\n";
    cout << "==========================================\n";
    str.UpperFirstLetterWords();
    cout << str.Value << endl;
    cout << "------------------------------------------\n";

    cout << "\nInvert Text Letters Case\n";
    cout << "==========================================\n";    
    cout << str.InvertTextLettersCase() << endl;
    cout << "------------------------------------------\n";

    cout << "\nCount Letters Case (Capital)\n";
    cout << "==========================================\n";
    cout << str.CountLettersCase(clsString::Capital) << endl;
    cout << "------------------------------------------\n";

    cout << "\nLetter Counter\n";
    cout << "==========================================\n";
    cout << str.LetterCounter('A') << endl;
    cout << "------------------------------------------\n";

    cout << "\nLetter Counter All Case\n";
    cout << "==========================================\n";
    cout << str.LetterCounterAllCase('A', false) << endl;
    cout << "------------------------------------------\n";

    cout << "\nVowel Count\n";
    cout << "==========================================\n";
    cout << str.VowelCount() << endl;
    cout << "------------------------------------------\n";

    cout << "\nPrint Words In Line\n";
    cout << "==========================================\n";
    str.PrintWordsInLine();
    cout << "------------------------------------------\n";

    cout << "\nCount Each Word In Text\n";
    cout << "==========================================\n";
    cout << str.CountEachWordInText() << endl;
    cout << "------------------------------------------\n";

    cout << "\nSplit String\n";
    cout << "==========================================\n";
    vector <string> vName = str.SplitString(" ");
    cout << vName[0] << endl << vName[1] << endl;
    cout << "------------------------------------------\n";

    cout << "\nTrim Left\n";
    cout << "==========================================\n";    
    cout << str.TrimLeft() << "." << endl;
    cout << "------------------------------------------\n";

    cout << "\nTrim Right\n";
    cout << "==========================================\n";
    cout << str.TrimRight() << "." << endl;
    cout << "------------------------------------------\n";

    cout << "\nTrim\n";
    cout << "==========================================\n";
    cout << str.Trim() << "." << endl;
    cout << "------------------------------------------\n";

    cout << "\nReverse Words\n";
    cout << "==========================================\n";
    cout << str.ReverseWords() << "." << endl;
    cout << "------------------------------------------\n";

    cout << "\nTo Upper\n";
    cout << "==========================================\n";
    cout << str.ToUpper() << "." << endl;
    cout << "------------------------------------------\n";

    cout << "\nTo Lower\n";
    cout << "==========================================\n";
    cout << str.ToLower() << "." << endl;
    cout << "------------------------------------------\n";

    cout << "\nReplace Text\n";
    cout << "==========================================\n";
    cout << str.ReplaceText(";", ".") << endl;
    cout << "------------------------------------------\n";

    cout << "\nRemove Punct\n";
    cout << "==========================================\n";
    cout << str.RemovePunct() << endl;
    cout << "------------------------------------------\n";
}