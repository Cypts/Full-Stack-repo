
#include <iostream>
using namespace std;

template<typename T> class stack{
  int top;
  T* arr;
  int capacity;
  public:
    stack(int capacity){
      top=-1;
      this->capacity= capacity;
      arr= new T[capacity];
    }
    ~stack(){
        delete[] arr;
    }
    void push(int x){
      if(top==capacity){
        cout<<"Overflow"<<endl;
        return;
      }
      top++;
      arr[top]=x;
      cout<<"Element "<<x<<"pushed"<<endl;
      return;
    }
    void pop(){
      if(top==-1){
        cout<<"Underflow"<<endl;
        return;
      }
      cout<<"Element Poped"<<endl;
      top--;
    }
    void isEmpty(){
      if(top==-1) cout<<"Stack is empty"<<endl;
      else cout<<"Stack has elements"<<endl;
    }
    void isFull(){
      if(top==capacity) cout<<"Stack is full"<<endl;
      else cout<<"Stack is not full"<<endl;
    }
    void topElement(){
      if(top!=-1){
        cout<<"Top element is: "<<arr[top]<<endl;
      }
      else cout<<"No elements in stack"<<endl;
  
    }
};
int main() 
{
    stack<int> s(100);
    s.isFull();
    s.isEmpty();
    s.pop();
    s.push(2);
    s.topElement();
    s.push(3);
    s.topElement();
    s.pop();
    s.topElement();

}