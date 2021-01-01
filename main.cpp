#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <map>
using namespace std;
void to_lower(string& str){
    transform(str.begin(), str.end(), str.begin(), ::tolower); // трансформация
}

void bot(string text)
{
    cout <<"Translation: " << text << endl;
}
string user ()
{
    string question;
    cout << "[USER]:";
    getline(cin, question);
    to_lower(question);
    return question;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int function = 0;
    cout << "1)Translation from English to Russian" << " "<<"2)Translation from Russian to English" << endl;
    cin >> function;
    if (function == 1) {
        cout << "Hello dear User, please Enter a word to translate:" << std::endl;
        string question; // user question

        map<string, string> database = {
                {"guest ",  "гость"},
                {"cat",     "Кот"},
                {"disturb", "мешать"},
                {"provide", "обеспечивать"},
                {"woman",   "женщина"},
                {"exit",   "Прощайте!"},
        };

        while (question != "exit") {

            question = user();

            bool isAnswerFound = false;


            for (auto entry : database) {

                regex pattern = regex(".*" + entry.first + ".*");

                if (regex_match(question, pattern)) {

                    bot(entry.second);

                    isAnswerFound = true;

                }

            }

            if (!isAnswerFound) {

                bot("Sorry I do not understand");

            }

        }

    }
    else if(function==2){
        cout << "Hello dear User, please Enter a word to translate:" << std::endl;
        string question; // user question
        map<string, string> database = {
                {"гость ",  "guest"},
                {"кот",     "cat"},
                {"мешать", "disturb"},
                {"Обсепечивать", "provide"},
                {"женщина",   "woman"},
        };

        while (question != "exit") {

            question = user();

            bool isAnswerFound = false;


            for (auto entry : database) {

                regex pattern = regex(".*" + entry.first + ".*");

                if (regex_match(question, pattern)) {

                    bot(entry.second);

                    isAnswerFound = true;

                }

            }

            if (!isAnswerFound) {

                bot("Sorry I do not understand");

            }

        }

    }
    else cout<<"enter the Function number";

}


















//class CRUD {
//public:
//     char *arr[5][5] = {" ", " ", " ", " ", " ",}; //
//     char *arr1[5][5] ={" "," "," "," "," ",}; //
//     void create(int);
//    void read();
//    void update();
//    void Delete();
//
//
//
//};
//
//void CRUD::create(int i) { // cоздать
//    if (i==1){
//        char tmp;
//        while(cin >> tmp) {
//            *arr[5][5] = tmp;
//        }
//            return;
//    }
//    else {
//        char tmp1;
//        while(cin >> tmp1) {
//            *arr[5][5] = tmp1;
//        }
//            return;
//    }
//}
//void CRUD::read() { // считать
//
//}
//void CRUD::update() { // редактировать
//
//}
//void CRUD::Delete() { // Удалить
//
//}



//    cout <<"Select the function number"<<endl;
//    cout <<"1)Create words"<< "2)Count the words"<<endl;
//    cout <<"3)Update any of the words"<< "4)Delete the words"<<endl;
//    int function=0;
//    int setlocate=0;
//
//    cin >> function;
//
//        if(function==1){
//            cout << "1)Russian worlds"<<"2)English worlds"<<endl;
//            cin >> setlocate;
//            if ((setlocate==1) || (setlocate==2)){
//                CRUD::create(setlocate);
//            }
//            else cout<<"The number you entered is incorrect";
//
//        }
//        else if(function==2){
//
//        }
//        else if(function==3){
//
//        }
//        else if(function==4){
//
//        }
//        else cout << "The number you entered is incorrect"<<endl;
//
//}


