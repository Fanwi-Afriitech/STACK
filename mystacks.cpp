#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class mystack{
	private:
		int score[10];
		int top;
	public:
	mystack(){
		top=0;
	}
	
	void push(int j){
		
		score[++top]=j; //top++;
		                //score[top]=j;
			
	}
	
	int pop(){
		
		return score[top--];
		
	}
	
	int peek(){
		return score[top];
	}
	bool isempty(){
		return(top==0);
	}
};
int main() {
	string input;
	cout<<"enter code";
	cin>>input;
	mystack s1;
	char ch;
	
	for(int i=0;i<input.length();i++){
		ch=input[i];
		
		switch(ch){
			case '{':
			case '(':
			case '[':
			
			s1.push(ch);
			break;
			case '}':
			case')' :
			case ']':
			
			if(!s1.isempty()){
				char chx=s1.pop();
			if(( ch == '}' && chx != '{') || ( ch == ')' && chx != '(') || ( ch == ']' && chx != '[')) {
			   
			   cout<< "mismtch "<< ch << "at xter"	<<i;
			   break;
			}
			}
		}
	}
	  if(!s1.isempty()){
	  	char chx=s1.pop();
	  	cout<<"mis match brackts";
	  }
		
	}
	
/*	cout<<"the top of the stack is "<<s1.peek()<<"\n";
	cout<<"deleting "<<s1.pop()<<endl;
	cout<<"deleting "<<s1.pop()<<endl;
	cout<<"the top of the stack is "<<s1.peek();
	
	
