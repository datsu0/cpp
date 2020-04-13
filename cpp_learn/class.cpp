#include <string>
#include <iostream>
using namespace std;

/* Classの定義 */
class Student{
private:
    string s_name;
public:
    void setName( string name );
    string getName();
};

/* メソッドの定義 */
void Student::setName( string name ) { 
    s_name = name;
}

/* メソッドの定義 */
string Student::getName() {
    return s_name;
}

/* main関数の定義 */
int main()
{
   Student student;
   student.setName( "John" );
   cout <<student.getName() << endl;
}