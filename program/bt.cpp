#include <iostream>
#include <list>

using namespace std;

class Node{
	public:
		Node(){
			RUNNING = 1;
			FAILURE = -1;
			SUCCESS = 0;
		}
	protected:
		int RUNNING;
		int FAILURE;
		int SUCCESS;
		virtual int run() = 0;
};

class CompositeNode : public Node{
	protected:
		list<Node*> children;
	public:
		void addChildren(Node* child){
			children.push_back(child);
		}
		void check(){
			cout << "ok2" << endl;
		}
};
 
class Sequence : public CompositeNode{
	public:
		int run(){
			return SUCCESS;
		}
};

class Selector : public CompositeNode{
	public:
		int run(){}
};

class Test: public Node{
	public:
		int run(){}
};

int main(){
	Sequence *root = new Sequence;
	Test *test = new Test;
	root->addChildren(test);

	cout << "ok "<< root->run() << endl;
}
