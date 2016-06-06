#include <cmath>
#include <iostream>
using namespace std;

class Node{
	protected:
		int RUNNING =  1;
		int FAILURE = -1;
		int SUCCESS =  0;
		virtual int run() = 0;
};
 
class Sequence : public Node{
	public:
		int run(){
			return RUNNING;
		}
};

class Selector{
	public:
		int run();
};

int main(){
	Sequence ex;
	cout << ex.run() << endl;
	cout << "ok" << endl;
}
