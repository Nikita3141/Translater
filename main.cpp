#include <iostream>
#include <vector>

using namespace std;
struct pairOfTranslator{
    std::vector<pairOfTranslator> pairs;
    string englishWord;
    string russianWord;
    void create();
    void read();
    void update();
    void Delete();
};

void pairOfTranslator::create() {
    pairOfTranslator pair;


    for(int i=0;i<pairs.size();i++){

        cin >> russianWord;
        cin >> englishWord;
        pairs.push_back(pair);
    }
}
void pairOfTranslator:: read() {
    string find_value;
    cin >> find_value;
    for (int i = 0; i < pairs.size(); i++) {
        if (pairs[i].russianWord == find_value) {
            cout << pairs[i].englishWord << endl;
        }
        else if (pairs[i].englishWord == find_value) {
            cout << pairs[i].russianWord << endl;
        }
    }
}
void pairOfTranslator::update() {
    pairOfTranslator pair;


    for (int i = 0; i < pairs.size(); i++) {

        cin >> russianWord;
        cin >> englishWord;
        pairs.push_back(pair);

    }
}
void pairOfTranslator::Delete() {
    pairs.clear();
}






int main() {
    int function=0;
    cout<< "Hi! Choose a function:"<<endl;
    cout<< "1)Create"<< " "<<"2)Read"<<endl;
    cout<< "3)Update"<< " "<<"3)Delete"<<endl;
    cin>> function;
    if(function==1){

    }




















    //1
//    std::vector<pairOfTranslator> pairs;
//
//    pairOfTranslator pair;
//    pair.russianWord = "koshka";
//    pair.englishWord = "cat";
//    pairs.push_back(pair);
//    pair.russianWord = "stol";
//    pair.englishWord = "table";
//    pairs.push_back(pair);
//    pair.russianWord = "okno";
//    pair.englishWord = "window";
//    pairs.push_back(pair);
//
//
//    string find_value = "cat";
//
//    for(int i = 0; i < pairs.size(); i++) {
//        if (pairs[i].russianWord == find_value or pairs[i].englishWord == find_value){
//            cout << "found " << endl;
//        }
//    }






























    //2
//    pairOfTranslator *pairs_arr;
//    pairs_arr = new pairOfTranslator [10];
//    for (int i = 0; i < 10; i++) {
//        pairs_arr[i].englishWord = "Cat" + to_string(i);
//        pairs_arr[i].russianWord = "Koshka" + to_string(i);
//    }