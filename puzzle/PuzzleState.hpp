#ifndef _Puzzle_State_h
#define _Puzzle_State_h
#include <iostream>
using namespace std;

class PuzzleState
{
private:
    /* data */
    static const int _SIZE = 4;
public:
    string values;
    int row0, col0;
public:
    PuzzleState(/* args */);
    ~PuzzleState();
    PuzzleState(string s);
    PuzzleState(PuzzleState& p);
    void swap(int i0, int j0, int i1, int j1);
    PuzzleState* Clone();
    string ToString();
    PuzzleState* Up();
    PuzzleState* Down();
    PuzzleState* Left();
    PuzzleState* Right();
friend ostream& operator<< (ostream& os, PuzzleState& p);
};

PuzzleState::PuzzleState(/* args */){
    values=""; row0=0; col0=0;
}

PuzzleState::~PuzzleState(){
}

PuzzleState::PuzzleState(string s){
    values=s;
    for (int i=0; i<_SIZE; i++){
        for (int j=0; j<_SIZE; j++){
            if (values[i*_SIZE +j] == '0') {
                row0 = i; col0 = j;
                return;
            }
        }
    }
}

PuzzleState::PuzzleState(PuzzleState& p){
    string s(p.values);
    values = s;
    row0 = p.row0;
    col0 = p.col0;
}

void PuzzleState::swap(int i0, int j0, int i1, int j1){
    char t = values[i0*_SIZE + j0];
    values[i0*_SIZE + j0] = values[i1*_SIZE + j1];
    values[i1*_SIZE + j1] = t;
}

PuzzleState* PuzzleState::Clone(){
    PuzzleState *p = new PuzzleState();
    string temp_s(this->values);
    p->values = temp_s;
    p->row0 = this->row0;
    p->col0 = this->col0;
    return p;
}

string PuzzleState::ToString(){
    string s = "";
    for (int i=0; i<_SIZE; i++){
        for (int j=0; j<_SIZE; j++){
            s.push_back(values[i*_SIZE +j]);
            s.push_back(' ');
        }
        s.push_back('\n');
    }
    return s;
}
PuzzleState* PuzzleState::Up(){
    PuzzleState* p = nullptr;
    if (this->row0 ==0 ) return p;
    p = this->Clone();
    p->swap(row0,col0,row0-1,col0);
    p->row0--;
    return p;
}

PuzzleState* PuzzleState::Down(){
    PuzzleState* p = nullptr;
    if (this->row0 == (_SIZE-1)) return p;
    p = this->Clone();
    p->swap(row0,col0,row0+1,col0);
    p->row0++;
    return p;
}

PuzzleState* PuzzleState::Left(){
    PuzzleState* p = nullptr;
    if (this->col0 == 0) return p;
    p = this->Clone();
    p->swap(row0,col0,row0,col0-1);
    p->col0--;
    return p;
}

PuzzleState* PuzzleState::Right(){
    PuzzleState* p = nullptr;
    if (this->col0 == (_SIZE - 1)) return p;
    p = this->Clone();
    p->swap(row0,col0,row0,col0+1);
    p->col0++;
    return p;
}

ostream& operator<< (ostream& os, PuzzleState& p){
    for (int i=0; i<p._SIZE; i++){
        for (int j=0; j<p._SIZE; j++){
            os << p.values[i*p._SIZE +j] << " ";
        }
        cout << endl;
    }
    return os;
}

#endif

