#include <iostream>
#include "PuzzleState.hpp"
#include <map>
#include <queue>
#include <stack>
using namespace std;

void testPuzzleState(){
    cout << "Puzzle" << endl;
    PuzzleState p_end("0123456789ABCDEF");
    cout << p_end;
    cout << p_end.row0 << " " << p_end.col0 << endl;
    PuzzleState p_beg("6123450789ABCDEF");
    cout << p_beg;
    cout << p_beg.row0 << " " << p_beg.col0 << endl;

    PuzzleState p_tem(p_end);
    cout << p_tem;
    cout << p_tem.row0 << " " << p_tem.col0 << endl;

    p_tem.swap(0,1,3,2);
    cout << p_tem;

    PuzzleState* p_clone = p_tem.Clone();
    cout << p_clone->ToString();

    cout << endl;
    cout << p_beg;
    cout << p_beg.row0 << " " << p_beg.col0 << endl;

    //PuzzleState* p_up = p_beg.Up();
    //cout << p_up->ToString();
    //cout << p_up -> row0 << " " << p_up -> col0 << endl;

    //PuzzleState* p_down = p_beg.Down();
    //cout << p_down->ToString();
    //cout << p_down -> row0 << " " << p_down -> col0 << endl;

    PuzzleState* p_left = p_beg.Left();
    cout << p_left->ToString();
    cout << p_left -> row0 << " " << p_left -> col0 << endl;
    PuzzleState* p_right = p_beg.Right();
    cout << p_right->ToString();
    cout << p_right -> row0 << " " << p_right -> col0 << endl;
}



int main(){
    cout << "Puzzle" << endl;
    PuzzleState p_end("0123456789ABCDEF");
    cout << p_end;
    cout << p_end.row0 << " " << p_end.col0 << endl;
    PuzzleState p_beg("A1234567890BCDEF");
    cout << p_beg;
    cout << p_beg.row0 << " " << p_beg.col0 << endl;

    queue<PuzzleState*> myQueue;
    map<string, string> previousState;
    myQueue.push(&p_beg);

    while (!myQueue.empty()){
        PuzzleState* currentState = myQueue.front();
        myQueue.pop();

        if (p_end.values.compare(currentState->values) == 0){
            cout << "find the solution" << endl;
            break;
        }

        PuzzleState* p = currentState->Up();
        if (p != nullptr){
            string temp_s = previousState[p->values];
            if (temp_s.length() == 0){
                previousState[p->values] = currentState->values;
                if (p_end.values.compare(p->values) == 0){
                    cout << "find the solution" << endl;
                    break;
                }
                myQueue.push(p);
            }
        }
        p = currentState->Down();
        if (p != nullptr){
            string temp_s = previousState[p->values];
            if (temp_s.length() == 0){
                previousState[p->values] = currentState->values;
                if (p_end.values.compare(p->values) == 0){
                    cout << "find the solution" << endl;
                    break;
                }
                myQueue.push(p);
            }
        }
        p = currentState->Left();
        if (p != nullptr){
            string temp_s = previousState[p->values];
            if (temp_s.length() == 0){
                previousState[p->values] = currentState->values;
                if (p_end.values.compare(p->values) == 0){
                    cout << "find the solution" << endl;
                    break;
                }
                myQueue.push(p);
            }
        }
        p = currentState->Right();
        if (p != nullptr){
            string temp_s = previousState[p->values];
            if (temp_s.length() == 0){
                previousState[p->values] = currentState->values;
                if (p_end.values.compare(p->values) == 0){
                    cout << "find the solution" << endl;
                    break;
                }
                myQueue.push(p);
            }
        }
    }
    
    stack<string> myStack;
    myStack.push(p_end.values);
    string current_string = previousState[p_end.values];
    myStack.push(current_string);
    while (current_string.compare(p_beg.values)!=0){
        current_string = previousState[current_string];
        myStack.push(current_string);
    }

    while (!myStack.empty()){
        current_string = myStack.top();
        myStack.pop();
        PuzzleState currentState(current_string);
        cout << currentState << endl;
    }
    return 0;
}