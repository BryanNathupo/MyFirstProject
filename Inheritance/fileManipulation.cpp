#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

int countVowels(const string& data) 
{
    int vowel_manipulation = 0;
    for (char letter : data) 
    {
        if (tolower(letter) == 'a' || tolower(letter) == 'e' || tolower(letter) == 'i' || tolower(letter) == 'o' || tolower(letter) == 'u') {
            vowel_manipulation++;
        }
    }
    return vowel_manipulation;
}

int countWords(const string& data) 
{
    //IT COUNTS SPACES BETWEEN THE WORDS
    int word_manipulation= 1;      
    for (char c : data) {
        if (c == ' ') {
            word_manipulation++;
        }
    }
    return word_manipulation;
}

// To GET THE REVERSE ORDER OF THE STRING
string reverse(string data) 
{
    reverse(data.begin(), data.end());
    return data;
}

string upperCase2L(string data)
{   
    int y;
    
    for (y = 0; y < data.length(); y++)
    {
        if(y == 0 && data[y] != ' ')
        {
            data[y+1] = toupper(data[y+1]);
            data[y] = tolower(data[y]);
        }
        else if((data[y]) == ' ' && data[y+1] != ' ')
        {
            data[y+2] = toupper(data[y+2]);
            data[y+1] = tolower (data[y+1]);
        }
    }
    return data;

}

int main() 
{
    string fileData;
    int vowel_manipulation = 0;
    int word_manipulation = 1;

    ifstream myFile("advancedProgramming.txt");

    if (myFile.is_open()) 
    {
        while (getline(myFile, fileData)) 
        {
            vowel_manipulation = countVowels(fileData);
            word_manipulation = countWords(fileData);
            string reversedData = reverse(fileData);
            string capitalizedSecondLetters = upperCase2L(fileData);

            cout << "The total number of vowels is " << vowel_manipulation << endl;
            cout << "The total number of words is " << word_manipulation << endl;
            cout << "The reversed statement would be: " << reversedData << endl;
            cout << "The Statement with capitalized second word character would be: " << capitalizedSecondLetters <<endl;
        }
        myFile.close();
    } 
    else 
    {
        cout << "Unable to open file"; 
    }
    
    return 0;
}
