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
    void operator +=(int t){
        marks = marks + t;
    }
friend void operator -=(Marks &obj,int l);
};
void operator -=(Marks &obj,int l){
    obj.marks = obj.marks - l;
}
int main() {
	// your code goes here
    Marks m1(30);
    m1.display();
    int x = 10;
    m1 += x;
    m1.display();
    m1 -= x;
    m1.display();
}
