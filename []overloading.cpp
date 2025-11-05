#include <bits/stdc++.h>
using namespace std;
class Marks{
  public:
    int sub[3];
    Marks(int sub1,int sub2,int sub3){
        sub[0]  = sub1;
        sub[1] = sub2;
        sub[2] = sub3;
    }
    void display(){
        for(int i = 0;i < 3;i++){
            cout << sub[i] << endl;
        }
    }
};
int main() {
	// your code goes here
    Marks sub(10,20,30);
    sub.display();
    
}
