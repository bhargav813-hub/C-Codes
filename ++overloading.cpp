#include <bits/stdc++.h>
using namespace std;
class Marks{
    public:
      int marks;
     Marks(){
         marks = 0;
     }
     Marks(int l){
         marks = l;
     }
     void display(){
         cout << marks << endl;
     }
     Marks operator++(int l){
       Marks temp(marks);
       marks++;
       return marks;
     }
     friend Marks operator--(Marks &obj,int l);
};
Marks operator--(Marks &obj,int l){
    Marks temp(obj);
    obj.marks--;
    return temp;
}
int main() {
	// your code goes here
    Marks m1(10);
    m1.display();
    m1++;
    m1.display();
    m1--;
    m1.display();
}
