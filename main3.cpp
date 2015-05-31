#include <iostream>
#include <vector>

using namespace std;
/** \class Список для чисел и методы работы с ним
 */
class List{
    vector<int> catalog;/**< список */
    int countOfFiles;/**< количество файлов */
 public:
     /** \brief Конструтор без параметров
      *
      */
     List();
        /** \brief Метод добавления значения в список
      *
      * \param [in] value - значение добавляемое в список
      *
      */
     void add(int);
      /** \brief Метод удаляющий элмент по номеру
      *
      * \param [in] number - номер элемента
      *
      */
     void del(int);
      /** \brief Метод распечатывает список
      *
      */
     void printAll();
      /** \brief Деструктор класса
      */
     ~List();
};

List::List(){
    countOfFiles = 0;
}
void List::add(int value){
    catalog.push_back(value);
    ++countOfFiles;
}
void List::del(int pos){
    int i = 0;
    for(vector<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if(i == pos){
            catalog.erase(it);
        }
        ++i;
    }
}
void List::printAll(){
    for(vector<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        cout << *it <<endl;
    }
}
List::~List(){}

int main()
{
    List * catalog = new List();
    int count = 0;
    cin >> count;
    for(int i = 0; i < count; i ++){
        int number = 0;
        cin >> number;
        catalog->add(number);
    }
    catalog->printAll();
    delete catalog;
    return 0;
}
