struct position{
  int x;
  int y;
};


class Stack{
  private:
    position stack[8]; // moves 0 - 8 in a stack, for a total of 9 moves per game
    int top = -1;
    
  public:
    
    void push(position data)
      stack[top++] == data;
    }
    
    position pop(){
      return stack[top];
      top--;
    }
    
    void top(){
      return stack[top];
    }
    
    bool isfull(){
      if(top == sizeof(stack)/sizeof(stack[0]) ){
        return true;
      else 
        return false;
    }
    
}
