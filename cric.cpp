#include<iostream>
using namespace std;

string team1 , team2 ;
int overs;

class team1
{
private:
    string name;
    int runsco, wickets ,rungiven;
    float overbow;
public:
    team1(string a){
        name = a;
    }
    
};

class team2
{
private:
    string name;
    int runsco, wickets ,rungiven;
    float oversbow;
public:
    team2(string a){
        name =a;
    }
    
};


int main()
{
    int toss;
    string toss1;
    cout<<"Enter the team names:\n";
    cin>>team1>>team2;
    cout<<"enter the no of overs in match:";
    cin>>overs;
    cout<<"enter batting team:";
    cout<<"TOSS\n who won the toss \n1. "<<team1<<"2."<<team2;
    cin>>toss;
    if (toss==1)
        toss1 = team1; 
    else if(toss==2)
        toss1= team2;

    
    

    return 0;
}