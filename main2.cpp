#include <iostream>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Enter the number of books in the library ";
    int kolvoknig;
    cin >> kolvoknig;
    cin.ignore();
    string **library = new string* [kolvoknig];
    for (int i = 0; i < kolvoknig; i++)
        library[i] = new string[4];
    for (int cnt = 1; cnt <= kolvoknig; cnt++)
    {
        cout << "Enter the name of the book " << cnt << ": ";
        getline(cin, library[cnt - 1][0]);
        cout << "Enter the author of the book " << cnt << ": ";
        getline(cin, library[cnt - 1][1]);
        cout << "Enter the year of publication of the book " << cnt << ": ";
        getline(cin, library[cnt - 1][2]);
        cout << "Enter the number of copies of the book " << cnt << ": ";
        getline(cin, library[cnt - 1][3]);
    } 
    for (int i = 0; i < kolvoknig; i++)  // сортировка пузырьком
    {
        int minIndex = i;
        for (int j = i + 1; j < kolvoknig; j++)
        {    
            if (library[j][0] < library[minIndex][0])
                minIndex = j;
        }

        string temp[4];
        for(int cnt = 0; cnt < 4; cnt++)
            temp[cnt] = library[i][cnt];
        for(int cnt = 0; cnt < 4; cnt++)
            library[i][cnt] = library[minIndex][cnt];
        for(int cnt = 0; cnt < 4; cnt++)
            library[minIndex][cnt] = temp[cnt];
    }
    for (int cnt = 0; cnt < kolvoknig; cnt++)
    {
        cout << cnt + 1 << ". " << library[cnt][0] << " - Author: " << library[cnt][1] << ", Year of publication: " << library[cnt][2] << ", Number of copies: " << library[cnt][3] << endl;
    }
    for (int i = 0; i < kolvoknig; i++)
        delete[] library[i];
    delete[] library;
}