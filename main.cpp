#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int Value=1; // Кол-во элементов в векторе
struct wordsPair {
    string englishWord;
    string russianWord;
};


class pairOfTranslator{
public:
    void create();
    void read();
    void update();
    void Delete();

private:
    std::vector<wordsPair> pairs;

};

void pairOfTranslator::create() {
    wordsPair pair;

    cout << "Write russian word and english word" << endl;
for(int i=0;i<Value;i++) {
    cin >> pair.russianWord;
    cin >> pair.englishWord;

    pairs.push_back(pair);
}
}
void pairOfTranslator::read() {
    if( pairs.size() == 0 ) {
        return;
    }
    string find_value;
    cin >> find_value;
    for (int i = 0; i < Value; i++) {
        if (pairs[i].russianWord == find_value) {
            cout << pairs[i].englishWord << endl;
        }
        if (pairs[i].englishWord == find_value) {
            cout << pairs[i].russianWord << endl;
        }
    }
}
void pairOfTranslator::update() {

    string update_value;
    string value;
    cout<<"Write worlds to update"<<endl;
    cin >> update_value;
    cout<<"Enter a word that you can update to"<<endl;
    cin>>value;
    for (int i = 0; i < Value; i++) {
        if (pairs[i].russianWord == update_value) {
            pairs[i].russianWord = value;
        } else if (pairs[i].englishWord == update_value) {
            pairs[i].englishWord = value;
        }
    }
}
void pairOfTranslator::Delete() {
    string delete_value;
    cin >> delete_value;
    for (int i = 0; i < Value; i++) {
        if (pairs[i].russianWord == delete_value) {
            pairs.erase(pairs.begin() + i);
        } else if (pairs[i].englishWord == delete_value) {
            pairs.erase(pairs.begin() + i);
        }
    }

}


int main() {
    pairOfTranslator translator;
while(true) {
    int function = 0;
    cout << "Choose an action:" << endl;
    cout << "1 - Create" << " " << "2 - Read" << endl;
    cout << "3 - Update" << " " << "4 - Delete" << endl;
    cin >> function;

    if (function == 1) {
        translator.create();
    } else if (function == 2) {
        translator.read();
    } else if (function == 3) {
        translator.update();
    } else if (function == 4) {
        translator.Delete();
    }
    else break;
}
    return 0;
}