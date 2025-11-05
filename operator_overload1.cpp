#include <bits/stdc++.h>
using namespace std;
class Marks{
    public:
        int inmarks;
        int exmarks;
    Marks(){
        inmarks = 0;
        exmarks = 0;
    }
    Marks(int i,int e){
        inmarks = i;
        exmarks = e;
    }
    Marks operator+ (Marks m2){
        Marks temp;
        temp.inmarks = inmarks + m2.inmarks;
        temp.exmarks = exmarks + m2.exmarks;
        return temp;
    }
    void display(){
        cout << inmarks << " " <<  exmarks << endl;
    }
    friend Marks operator-(Marks m1,Marks m2);
};
Marks operator-(Marks m1,Marks m2){
    	Marks temp;
    	temp.inmarks = m1.inmarks - m2.inmarks;
    	temp.exmarks = m1.exmarks - m2.exmarks;
    	return temp;
	}

int main() {
	// your code goes here
    Marks m1(10,20);
    Marks m2(20,30);
    Marks m3;
    m3 = m1 + m2;
    Marks m4;
    m4 = m2 - m1;
    m1.display();
    m2.display();
    m3.display();
    m4.display();
}
