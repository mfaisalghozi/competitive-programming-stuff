#include<iostream>
using namespace std;
int new_grade,
 index,
 input_index,
 limit_1,
 limit_2,
 input[20] = {4,14,52,38,44,27,31,0,68,23,50,18,46,22,9,10,5,-2,20,-15},
 freq[5] = {0,0,0,0,0};
class NegativeInputException {
 public:
 NegativeInputException() {
 cout << "End of input data reached" << endl;
 }
};

class AtLimitInputException {
 public:
 int grade;
 AtLimitInputException(int new_grade) {
 cout << "class Limit run" << endl;
 grade = new_grade;
 }
};
int main(void) {
 try {
 for (input_index = 0; input_index < 20; input_index++) {
 try{
 new_grade = input[input_index];
 if (new_grade < 0)  throw NegativeInputException();
 if (new_grade % 10 == 0) throw AtLimitInputException(new_grade);
 index = new_grade / 10;
 if (index > 4) throw new_grade;
 freq[index]++;
 cout << "New grade: " << new_grade << " has been counted" << endl;
 }
 catch(int grade) {
 cout << "Error -- New grade: " << grade << " is out of range" <<
endl;
 }
 catch(AtLimitInputException& e) {
 cout << "Error -- New grade: " << e.grade << " is at limit" << endl;
 }
 }
 cout << "Successfully count all inputs" << endl;
 }
 catch(NegativeInputException& e) {
 cout << "Groups Frequency" << endl;
 for (index = 0; index < 5; index++) {
 limit_1 = 10 * index + 1;
 limit_2 = limit_1 + 8;
 cout << limit_1 << " - "<< limit_2 << " : "<< freq[index] << endl;
 }
 }
}
