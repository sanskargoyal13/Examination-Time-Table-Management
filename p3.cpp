#include<bits/stdc++.h>
#include<unordered_map>
#include <cstdlib>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<windows.h>
using namespace std;
#define V 60
unordered_map<string,int> map1;
unordered_map<int,int> map2;
unordered_map<int,string> map3;
queue<string> teachers[V];
vector<string> days;
vector<string> timeslots;
vector<string> roomtype1;
vector<string> roomtype2;
vector<string> roomtype3;
vector<string> roomtype4;
int **subjects=new int*[60];
int *studentcount=new int[V];
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int funfram()
{
    gotoxy(0,0);
    printf("\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2");
    printf("\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2");
    printf("\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2");
    printf("\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2");
    gotoxy(0,26);
    printf("\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2");
    printf("\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2");
    printf("\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2");
    printf("\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2");
}
int funfram2()
{
    gotoxy(0,0);
    printf("\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2");
    printf("\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2");
    printf("\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2\xDB\xDB\xB2\xB2");
    printf("\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2\xDB\xB2");

}
struct pairs
{
    int code;
    int colour;
    int count;
};
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
bool compare(struct pairs a,struct pairs b)
{
    if(a.colour<b.colour)
    {
        return true;
    }
    return false;
}
bool comparenew(const pairs &a,const pairs &b)
{
    if(a.colour<b.colour)
    {
        return true;
    }
    else if(a.colour==b.colour)
    {
        return a.count < b.count;
    }
    return false;
}
void converttopairs(vector<int> &fresh,struct pairs *m)
{
    for(int i=0;i<fresh.size();i++)
    {
        m[i].code=i;
        m[i].colour=fresh[i];
    }
    sort(m,m+60,compare);
}
bool isSafe (int v, int **graph, int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return false;
    return true;
}
bool graphColoringUtil(int ** graph,int color[], int v)
{   if (v == V)
        return true;
  for (int c = 1; c <= 60; c++)
    {
        if (isSafe(v, graph, color, c))
        {
           color[v] = c;
           if (graphColoringUtil (graph,color, v+1) == true)
             return true;
           color[v] = 0;
        }
    }
}
void printmatrix(int **subjects)
{
    for(int i=0;i<60;i++)
    {
        for(int j=0;j<60;j++)
        {
            cout << subjects[i][j] << " ";
        }
        cout << endl;
    }
}
void addstudentsubjects(int m,int **subjects)
{
    vector<string> x;
    if(m==1)
    {
        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("A1");
        x.push_back("A2");
        x.push_back("A3");
        x.push_back("A4");
        x.push_back("A5");
        map2[map1["A1"]]=1;
        map2[map1["A2"]]=1;
        map2[map1["A3"]]=1;
        map2[map1["A4"]]=1;
        map2[map1["A5"]]=1;
        studentcount[map1["A1"]]+=g;
        studentcount[map1["A2"]]+=g;
        studentcount[map1["A3"]]+=g;
        studentcount[map1["A4"]]+=g;
        studentcount[map1["A5"]]+=g;
    }
    else if(m==2)
    {

        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("B1");
        x.push_back("B2");
        x.push_back("B3");
        x.push_back("B4");
        x.push_back("B5");
        map2[map1["B1"]]=1;
        map2[map1["B2"]]=1;
        map2[map1["B3"]]=1;
        map2[map1["B4"]]=1;
        map2[map1["B5"]]=1;
        studentcount[map1["B1"]]+=g;
        studentcount[map1["B2"]]+=g;
        studentcount[map1["B3"]]+=g;
        studentcount[map1["B4"]]+=g;
        studentcount[map1["B5"]]+=g;
    }
    else if(m==3)
    {

        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("C1");
        x.push_back("C2");
        x.push_back("C3");
        x.push_back("C4");
        x.push_back("C5");
        map2[map1["C1"]]=1;
        map2[map1["C2"]]=1;
        map2[map1["C3"]]=1;
        map2[map1["C4"]]=1;
        map2[map1["C5"]]=1;
        studentcount[map1["C1"]]+=g;
        studentcount[map1["C2"]]+=g;
        studentcount[map1["C3"]]+=g;
        studentcount[map1["C4"]]+=g;
        studentcount[map1["C5"]]+=g;
        cout << "Enter the number of backlogs the student has-(max-5)" << endl;
        int p;
        cin >> p;
        for(int i=0;i<p;i++)
        {
        cout << "Enter the code of the subject(A1-A5)" << endl;
        string q;
        cin >> q;
        x.push_back(q);
        map2[map1[q]]=1;
        studentcount[map1[q]]+=g;
        }
    }
    else if(m==4)
    {

        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("D1");
        x.push_back("D2");
        x.push_back("D3");
        x.push_back("D4");
        map2[map1["D1"]]=1;
        map2[map1["D2"]]=1;
        map2[map1["D3"]]=1;
        map2[map1["D4"]]=1;
        studentcount[map1["D1"]]+=g;
        studentcount[map1["D2"]]+=g;
        studentcount[map1["D3"]]+=g;
        studentcount[map1["D4"]]+=g;
        cout << "Enter the elective for sem4 (D51-D56)" << endl;
        string y;
        cin >> y;
        map2[map1[y]]=1;
        x.push_back(y);
        studentcount[map1[y]]+=g;
        cout << "Enter the number of backlogs the student has-(max-5)" << endl;
        int p;
        cin >> p;
        for(int i=0;i<p;i++)
        {
        cout << "Enter the code of the subject(B1-B5)" << endl;
        string q;
        cin >> q;
        x.push_back(q);
        map2[map1[q]]=1;
        studentcount[map1[q]]+=g;
        }
    }
    else if(m==5)
    {

        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("E1");
        x.push_back("E2");
        x.push_back("E3");
        map2[map1["E1"]]=1;
        map2[map1["E2"]]=1;
        map2[map1["E3"]]=1;
        studentcount[map1["E1"]]+=g;
        studentcount[map1["E2"]]+=g;
        studentcount[map1["E3"]]+=g;
        cout << "Enter the first elective for sem4 (E41-E46)" << endl;
        string y;
        cin >> y;
        x.push_back(y);
        map2[map1[y]]=1;
        studentcount[map1[y]]+=g;
        cout << "Enter the second elective for sem4 (E51-E56)" << endl;
        string z;
        cin >> z;
        x.push_back(z);
        map2[map1[z]]=1;
        studentcount[map1[z]]+=g;
        cout << "Enter the number of backlogs the student has-(max-5)" << endl;
        int p;
        cin >> p;
        for(int i=0;i<p;i++)
        {
        cout << "Enter the code of the subject(C1-C5)" << endl;
        string q;
        cin >> q;
        x.push_back(q);
        map2[map1[q]]=1;
        studentcount[map1[q]]+=g;
        }
    }
    else if(m==6)
    {
        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("F1");
        x.push_back("F2");
        x.push_back("F3");
        x.push_back("F4");
        x.push_back("F5");
        map2[map1["F1"]]=1;
        map2[map1["F2"]]=1;
        map2[map1["F3"]]=1;
        map2[map1["F4"]]=1;
        map2[map1["F5"]]=1;
        studentcount[map1["F1"]]+=g;
        studentcount[map1["F2"]]+=g;
        studentcount[map1["F3"]]+=g;
        studentcount[map1["F4"]]+=g;
        studentcount[map1["F5"]]+=g;
        cout << "Enter the number of backlogs the student has-(max-5)" << endl;
        int p;
        cin >> p;
        for(int i=0;i<p;i++)
        {
        cout << "Enter the code of the subject(D1-D4) OR (D51-D56)" << endl;
        string q;
        cin >> q;
        x.push_back(q);
        map2[map1[q]]=1;
        studentcount[map1[q]]+=g;
        }
    }
    else if(m==7)
    {

        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("G1");
        x.push_back("G2");
        x.push_back("G3");
        x.push_back("G4");
        map2[map1["G1"]]=1;
        map2[map1["G2"]]=1;
        map2[map1["G3"]]=1;
        map2[map1["G4"]]=1;
        studentcount[map1["G1"]]+=g;
        studentcount[map1["G2"]]+=g;
        studentcount[map1["G3"]]+=g;
        studentcount[map1["G4"]]+=g;
        cout << "Enter the elective for sem4 (G51-G56)" << endl;
        string y;
        cin >> y;
        x.push_back(y);
        map2[map1[y]]=1;
        studentcount[map1[y]]+=g;
        cout << "Enter the number of backlogs the student has-(max-5)" << endl;
        int p;
        cin >> p;
        for(int i=0;i<p;i++)
        {
        cout << "Enter the code of the subject(E1-E3) OR (E41-E46) OR (E51-E56)" << endl;
        string q;
        cin >> q;
        x.push_back(q);
        map2[map1[q]]=1;
        studentcount[map1[q]]+=g;
        }
    }
    else if(m==8)
    {

        cout << "How many students of the following combination you want to add(MAX-600)" << endl;
        int g;
        cin >> g;
        x.push_back("H1");
        x.push_back("H2");
        x.push_back("H3");
        x.push_back("H4");
        x.push_back("H5");
        map2[map1["H1"]]=1;
        map2[map1["H2"]]=1;
        map2[map1["H3"]]=1;
        map2[map1["H4"]]=1;
        map2[map1["H5"]]=1;
        studentcount[map1["H1"]]+=g;
        studentcount[map1["H2"]]+=g;
        studentcount[map1["H3"]]+=g;
        studentcount[map1["H4"]]+=g;
        studentcount[map1["H5"]]+=g;
        cout << "Enter the number of backlogs the student has-(max-5)" << endl;
        int p;
        cin >> p;
        for(int i=0;i<p;i++)
        {
        cout << "Enter the code of the subject(F1-F5)" << endl;
        string q;
        cin >> q;
        x.push_back(q);
        map2[map1[q]]=1;
        studentcount[map1[q]]+=g;
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        for(int j=i+1;j<x.size();j++)
        {
            int e=map1[x[i]];
            int f=map1[x[j]];
            subjects[e][f]=1;
            subjects[f][e]=1;
        }
    }
}
void addteachersubjects(string u,int **subjects,int p)
{
    cout << "Enter the department of the teacher.Choose the number associated with the department." << endl;
    cout << "1.Mathematics\n2.Physics\n3.Electronics\n4.Computer Science\n5.Humanities and social sciences" << endl;
    int x;
    cin >> x;
    if(p%2!=0)
    {
    if(x==1)
    {
        cout << "The teacher belongs to mathematics department.\nHe can clear doubts in subjects with code-A1,C1,E1,G1" << endl;
    }
    else if(x==2)
    {
        cout << "The teacher belongs to physics department.\nHe can clear doubts in subjects with code-A2,C2,E2,G2" << endl;
    }
    else if(x==3)
    {
        cout << "The teacher belongs to electronics department.\nHe can clear doubts in subjects with code-A3,C3,E3,G3" << endl;
    }
    else if(x==4)
    {
        cout << "The teacher belongs to computer science department.\nHe can clear doubts in subjects with code-A4,C4,E41,E42,E43,E44,E45,E46,G4" << endl;
    }
    else if(x==5)
    {
        cout << "The teacher belongs to humanities and social sciences department.\nHe can clear doubts in subjects with code-A5,C5,E51,E52,E53,E54,E55,E56,G51,G52,G53,G54,G55,G56" << endl;
    }
    }
    else
    {
    if(x==1)
    {
        cout << "The teacher belongs to mathematics department.\nHe can clear doubts in subjects with code-B1,D1,F1,H1" << endl;
    }
    else if(x==2)
    {
        cout << "The teacher belongs to physics department.\nHe can clear doubts in subjects with code-B2,D2,F2,H2" << endl;
    }
    else if(x==3)
    {
        cout << "The teacher belongs to electronics department.\nHe can clear doubts in subjects with code-B3,D3,F3,H3" << endl;
    }
    else if(x==4)
    {
        cout << "The teacher belongs to computer science department.\nHe can clear doubts in subjects with code-B4,D4,F4,H4" << endl;
    }
    else if(x==5)
    {
        cout << "The teacher belongs to humanities and social sciences department.\nHe can clear doubts in subjects with code-B5,D51,D52,D53,D54,D55,D56,F5,H5" << endl;
    }
    }
    vector<string> v;
    cout << "Enter the number of subjects " << u << " should be assigned duties in" << endl;
    int d;
    cin >> d;
    for(int i=0;i<d;i++)
    {
        cout << "Enter the code of the subject " << endl;
        string e;
        cin >> e;
        v.push_back(e);
        int g=map1[e];
        teachers[g].push(u);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            int e=map1[v[i]];
            int f=map1[v[j]];
            subjects[e][f]=1;
            subjects[f][e]=1;
        }
    }

}
void modifySolution(int color[],vector<int> &fresh)
{
    for (int i = 0; i < V; i++)
    {
        if(map2.find(i)!=map2.end())
        {
            fresh.push_back(color[i]);
        }
        else
        {
            fresh.push_back(0);
        }
    }
}
void printpairs(struct pairs *m)
{
    for(int i=0;i<60;i++)
    {
        cout << m[i].code << " " << m[i].colour << endl;
    }
}
void generatefinalvector(struct pairs *m,vector<pairs> &renewed)
{
    for(int i=0;i<60;i++)
    {
        if(m[i].colour==0)
        {
            continue;
        }
        else
        {
            renewed.push_back({m[i].code,m[i].colour});
        }
    }
}
void printrenewedvector(vector<pairs> renewed)
{
    for(int i=0;i<renewed.size();i++)
    {
        cout << renewed[i].code << " " << renewed[i].colour << endl;
    }
}
void printstudentcount()
{
    for(int i=0;i<60;i++)
    {
        cout << studentcount[i] << " ";
    }
}
void printteacherlist(queue<string> teachers[])
{
    for(int i=0;i<60;i++)
    {
        cout << map3[i] << " ";
        int queuelength=teachers[i].size();
        for(int j=0;j<queuelength;j++)
        {
            cout << teachers[i].front() << " ";
            teachers[i].pop();
        }
        cout << endl;
    }
}
bool checksufficientteachers()
{
    for(int i=0;i<60;i++)
    {
        if(map2[i]==1)
        {
            if(teachers[i].size()==0)
            {
                cout << "Insufficent teachers" << endl;
                return false;
            }
        }
    }
    return true;
}
void formtimetable(vector<pairs> &renewed,int *student)
{
    /*cout << "There are 10 rooms of size 30" << endl;
    cout << "There are 10 rooms of size 60" << endl;
    cout << "There are 4 rooms of size 120" << endl;
    cout << endl;*/
    int studentflag=0;
    for(int i=0;i<60;i++)
    {
        if(studentcount[i]==0)
        {
            continue;
        }
        studentflag=1;
        break;
    }
    if(studentflag==0)
    {
        cout << "SORRY YOU DID NOT ADD ANY STUDENT RECORD" << endl;
        return ;
    }
    for(int i=0;i<renewed.size();i++)
    {
        renewed[i].count=student[renewed[i].code];
    }
    sort(renewed.begin(),renewed.end(),comparenew);
    /*(int endindex=renewed.size()-1;
    int endpoint=renewed[renewed.size()-1].colour;
    int startindex;
    for(int i=0;i<renewed.size();i++)
    {
        if(renewed[i].colour==2)
        {
            startindex=i;
            break;
        }
    }
    int startpoint=2;
    int midpoint=(startpoint+endpoint)/2;
    int total=startpoint+endpoint;
    int midindex;
    for(int i=0;i<renewed.size();i++)
    {
        if(renewed[i].colour==midpoint)
        {
            midindex=i;
        }
    }

    while(startpoint<=midpoint)
    {
        while(renewed[startindex].colour==startpoint && startpoint<=midpoint && startindex<=midindex)
        {
            renewed[startindex].colour=total-startpoint;
            startindex++;
        }
        startpoint+=2;
        while(renewed[startindex].colour!=startpoint && startpoint<=midpoint && startindex<=midindex)
        {
            startindex++;
        }
    }
    while(endpoint>=midpoint && endindex>midindex)
    {
        while(renewed[endindex].colour==endpoint && endpoint>=midpoint && endindex>midindex)
        {
            renewed[endindex].colour=total-endpoint;
            endindex--;
        }
        endpoint-=2;
        while(renewed[endindex].colour!=endpoint && endpoint>=midpoint && endindex>midindex)
        {
            endindex--;
        }
    }
    sort(renewed.begin(),renewed.end(),comparenew);*/
    int finalslot=renewed[renewed.size()-1].colour;
    int arr[finalslot];
    for(int i=0;i<finalslot;i++)
    {
        arr[i]=i+1;
    }
    unsigned seed = 0;
    shuffle(arr, arr+finalslot,default_random_engine(seed));
    /*for(int i=0;i<finalslot;i++)
    {
        cout << arr[i] << endl;
    }*/
    vector<pairs> random;
    for(int i=0;i<finalslot;i++)
    {
        for(int j=0;j<renewed.size();j++)
        {
            if(renewed[j].colour==arr[i])
            {
                random.push_back(renewed[j]);
            }
        }
    }
    int colourcounter=1;

    for(int i=0;i<random.size();i++)
    {
        if(i!=random.size()-1 && random[i].colour==random[i+1].colour)
        {
            random[i].colour=colourcounter;
        }
        else
        {
            random[i].colour=colourcounter;
            colourcounter++;
        }
    }
    renewed.clear();
    renewed=random;
    cout << endl << endl;
    cout << "Here we present the Marvellous  Examination Time Table Generator" << endl;
    cout << endl;
    for(int i=0;i<10;i++)
    {
        cout << " ";
    }
    for(int i=0;i<timeslots.size()-4;i++)
    {
        cout << timeslots[i] << "                             ";
    }
    cout << endl;
    for(int i=0;i<160;i++)
        {
            cout << "-";
        }
    cout << endl;
    int j=0,k=0;
    while(j<days.size())
    {

        int roomarray[3][4];
        for(int i=0;i<4;i++)
        {
            roomarray[0][i]=20;
            roomarray[1][i]=20;
            roomarray[2][i]=8;
        }
        int flag1[4]={0};
        int flag2[4]={0};
        int flag3[4]={0};
        cout << days[j];
        unordered_map<int,int> checker;
        pairs fake;
        fake.code=INT_MAX;
        fake.colour=INT_MAX;
        fake.count=INT_MAX;
        vector<pairs> answer[7];
        bool check[7]={false};
        int maxval=0;
        while(renewed[k].colour<=3*(j+1) && k<renewed.size())
        {

            if(checker.find(renewed[k].colour)==checker.end())
            {
                checker[renewed[k].colour]=0;
                answer[checker[renewed[k].colour]].push_back(renewed[k]);
                k++;
            }
            else
            {
                checker[renewed[k].colour]+=1;
                maxval=max(maxval,checker[renewed[k].colour]);
                if(check[checker[renewed[k].colour]]==false)
                {
                    if(renewed[k].colour%3==0)
                    {
                    for(int i=1;i<3;i++)
                    {
                        answer[checker[renewed[k].colour]].push_back(fake);
                    }
                    }
                    else
                    {
                    for(int i=1;i<(renewed[k].colour%3);i++)
                    {
                        answer[checker[renewed[k].colour]].push_back(fake);
                    }
                    }
                }
                else
                {
                    int limit=answer[checker[renewed[k].colour]][answer[checker[renewed[k].colour]].size()-1].colour;
                    if((renewed[k].colour-limit)%3==0)
                    {
                    for(int i=1;i<3;i++)
                    {
                        answer[checker[renewed[k].colour]].push_back(fake);
                    }
                    }
                    else
                    {
                    for(int i=1;i<(renewed[k].colour-limit)%3;i++)
                    {
                        answer[checker[renewed[k].colour]].push_back(fake);
                    }
                    }
                }
                check[checker[renewed[k].colour]]=true;
                answer[checker[renewed[k].colour]].push_back(renewed[k]);
                k++;
            }
        }
        for(int i=0;i<maxval+1;i++)
        {
            if(answer[i].size()!=0)
            {
            if(i==0)
            {
            for(int l=0;l<10-days[j].length();l++)
            {
                cout << " ";
            }
            }
            else
            {
            for(int l=0;l<10;l++)
            {
                cout << " ";
            }
            }
            for(int m=0;m<answer[i].size();m++)
            {
                if(answer[i][m].code!=INT_MAX)
                {
                vector<string> roomanswer;
                int &counter1=flag1[m];
                int &counter2=flag2[m];
                int &counter3=flag3[m];
                int presentcount=answer[i][m].count;
                while(presentcount>0)
                {
                    if(presentcount>=240 && roomarray[2][m]>=1)
                    {
                        presentcount-=240;
                        roomarray[2][m]-=1;
                        roomanswer.push_back(roomtype3[counter3]);
                        counter3++;
                    }
                    else if(presentcount>=240 && roomarray[1][m]>=2)
                    {
                        presentcount-=240;
                        roomarray[1][m]-=2;
                        roomanswer.push_back(roomtype2[counter2]);
                        counter2++;
                        roomanswer.push_back(roomtype2[counter2]);
                        counter2++;
                    }
                    else if(presentcount>=240 && roomarray[0][m]>=4)
                    {
                        presentcount-=240;
                        roomarray[0][m]-=4;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                    }
                    else if(presentcount>=120 && roomarray[1][m]>=1)
                    {
                        presentcount-=120;
                        roomarray[1][m]-=1;
                        roomanswer.push_back(roomtype2[counter2]);
                        counter2++;
                    }
                    else if(presentcount>=120 && roomarray[0][m]>=2)
                    {
                        presentcount-=120;
                        roomarray[0][m]-=2;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                    }
                    else if(presentcount>=60 && roomarray[0][m]>=1)
                    {
                        presentcount-=60;
                        roomarray[0][m]-=1;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                    }
                    else
                    {
                        presentcount=0;
                        roomarray[0][m]-=1;
                        roomanswer.push_back(roomtype1[counter1]);
                        counter1++;
                    }
                }
                int number=0;
                if(roomanswer.size()%3==0)
                {
                    number=roomanswer.size()/3;
                }
                else
                {
                    number=roomanswer.size()/3+1;
                }
                cout << map3[answer[i][m].code] << "  [";
                string teachername;
                int teacherlength=0;
                for(int j=0;j<number;j++)
                {
                        teachername=teachers[answer[i][m].code].front();
                        cout << teachername;
                        teacherlength+=teachername.length();
                        if(j!=number-1)
                        {
                            teacherlength++;
                            cout << "/";
                        }
                        else
                        {
                            teacherlength++;
                            cout << "]";
                        }
                        for(int y=0;y<60;y++)
                        {
                            if(teachers[y].front()==teachername)
                            {
                                teachers[y].pop();
                                teachers[y].push(teachername);
                            }
                        }
                }
                teacherlength++;
                cout << " ";
                int extralength=0;
                cout << "[";
                for(int i=0;i<roomanswer.size();i++)
                {
                    cout << roomanswer[i] << " ";
                    extralength+=(roomanswer[i].length()+1);
                }
                cout << "]";
                for(int n=0;n<30+timeslots[m].length()-map3[answer[i][m].code].length()-teachername.length()-extralength-teacherlength-4;n++)
                {
                    cout << " " ;
                }
                }
                else
                {
                    for(int i=0;i<timeslots[m].length()+28;i++)
                    {
                        cout << " ";
                    }
                }
                if(m==1)
                {
                    if(m==1)
                    {
                    if(i==0)
                    cout << "  INTERMISSION                            ";
                    else
                    cout << "                                          ";
                    }
                }
            }
            cout << endl;
            }
        }
        cout << endl;
        for(int i=0;i<160;i++)
        {
            cout << "-";
        }
        cout << endl;
        j++;
    }
}
int main()
{
    for(int i=0;i<60;i++)
    {
        subjects[i]=new int[60];
        for(int j=0;j<60;j++)
        {
            subjects[i][j]=0;
        }
    }
    map1["A1"]=0;
    map1["A2"]=1;
    map1["A3"]=2;
    map1["A4"]=3;
    map1["A5"]=4;
    map1["B1"]=5;
    map1["B2"]=6;
    map1["B3"]=7;
    map1["B4"]=8;
    map1["B5"]=9;
    map1["C1"]=10;
    map1["C2"]=11;
    map1["C3"]=12;
    map1["C4"]=13;
    map1["C5"]=14;
    map1["D1"]=15;
    map1["D2"]=16;
    map1["D3"]=17;
    map1["D4"]=18;
    map1["D51"]=19;
    map1["D52"]=20;
    map1["D53"]=21;
    map1["D54"]=22;
    map1["D55"]=23;
    map1["D56"]=24;
    map1["E1"]=25;
    map1["E2"]=26;
    map1["E3"]=27;
    map1["E41"]=28;
    map1["E42"]=29;
    map1["E43"]=30;
    map1["E44"]=31;
    map1["E45"]=32;
    map1["E46"]=33;
    map1["E51"]=34;
    map1["E52"]=35;
    map1["E53"]=36;
    map1["E54"]=37;
    map1["E55"]=38;
    map1["E56"]=39;
    map1["F1"]=40;
    map1["F2"]=41;
    map1["F3"]=42;
    map1["F4"]=43;
    map1["F5"]=44;
    map1["G1"]=45;
    map1["G2"]=46;
    map1["G3"]=47;
    map1["G4"]=48;
    map1["G51"]=49;
    map1["G52"]=50;
    map1["G53"]=51;
    map1["G54"]=52;
    map1["G55"]=53;
    map1["G56"]=54;
    map1["H1"]=55;
    map1["H2"]=56;
    map1["H3"]=57;
    map1["H4"]=58;
    map1["H5"]=59;
    map3[0]="A1";
    map3[1]="A2";
    map3[2]="A3";
    map3[3]="A4";
    map3[4]="A5";
    map3[5]="B1";
    map3[6]="B2";
    map3[7]="B3";
    map3[8]="B4";
    map3[9]="B5";
    map3[10]="C1";
    map3[11]="C2";
    map3[12]="C3";
    map3[13]="C4";
    map3[14]="C5";
    map3[15]="D1";
    map3[16]="D2";
    map3[17]="D3";
    map3[18]="D4";
    map3[19]="D51";
    map3[20]="D52";
    map3[21]="D53";
    map3[22]="D54";
    map3[23]="D55";
    map3[24]="D56";
    map3[25]="E1";
    map3[26]="E2";
    map3[27]="E3";
    map3[28]="E41";
    map3[29]="E42";
    map3[30]="E43";
    map3[31]="E44";
    map3[32]="E45";
    map3[33]="E46";
    map3[34]="E51";
    map3[35]="E52";
    map3[36]="E53";
    map3[37]="E54";
    map3[38]="E55";
    map3[39]="E56";
    map3[40]="F1";
    map3[41]="F2";
    map3[42]="F3";
    map3[43]="F4";
    map3[44]="F5";
    map3[45]="G1";
    map3[46]="G2";
    map3[47]="G3";
    map3[48]="G4";
    map3[49]="G51";
    map3[50]="G52";
    map3[51]="G53";
    map3[52]="G54";
    map3[53]="G55";
    map3[54]="G56";
    map3[55]="H1";
    map3[56]="H2";
    map3[57]="H3";
    map3[58]="H4";
    map3[59]="H5";
    string name;
    int value;
    ifstream myfile("teachers.txt", ifstream::in);
    while(myfile >> name >> value)
    {
        vector<string> x;
        string sub;
        for(int i=0;i<value;i++)
        {
            myfile >> sub;
            x.push_back(sub);
            int g=map1[sub];
            teachers[g].push(name);
        }
    /*for (int i = 0; i < x.size(); i++)
    {
        for(int j=i+1;j<x.size();j++)
        {
            int e=map1[x[i]];
            int f=map1[x[j]];
            subjects[e][f]=1;
            subjects[f][e]=1;
        }
    }*/
    }
    int *color = new int[60];
    for (int i = 0; i < 60; i++)
    {
       color[i] = 0;
    }
    for(int i=0;i<60;i++)
    {
        studentcount[i]=0;
    }
    roomtype1.push_back("W1");
    roomtype1.push_back("W2");
    roomtype1.push_back("W3");
    roomtype1.push_back("W4");
    roomtype1.push_back("W5");
    roomtype1.push_back("W6");
    roomtype1.push_back("W7");
    roomtype1.push_back("W8");
    roomtype1.push_back("W9");
    roomtype1.push_back("W11");
    roomtype1.push_back("W12");
    roomtype1.push_back("W13");
    roomtype1.push_back("W14");
    roomtype1.push_back("W15");
    roomtype1.push_back("W16");
    roomtype1.push_back("W17");
    roomtype1.push_back("W18");
    roomtype1.push_back("W19");
    roomtype1.push_back("W20");
    roomtype2.push_back("X1");
    roomtype2.push_back("X2");
    roomtype2.push_back("X3");
    roomtype2.push_back("X4");
    roomtype2.push_back("X5");
    roomtype2.push_back("X6");
    roomtype2.push_back("X7");
    roomtype2.push_back("X8");
    roomtype2.push_back("X9");
    roomtype2.push_back("X10");
    roomtype2.push_back("X11");
    roomtype2.push_back("X12");
    roomtype2.push_back("X13");
    roomtype2.push_back("X14");
    roomtype2.push_back("X15");
    roomtype2.push_back("X16");
    roomtype2.push_back("X17");
    roomtype2.push_back("X18");
    roomtype2.push_back("X19");
    roomtype2.push_back("X20");
    roomtype3.push_back("Y1");
    roomtype3.push_back("Y2");
    roomtype3.push_back("Y3");
    roomtype3.push_back("Y4");
    roomtype3.push_back("Y5");
    roomtype3.push_back("Y6");
    roomtype3.push_back("Y7");
    roomtype3.push_back("Y8");
    vector<int> fresh;
    struct pairs m[60];
    string l;
    vector<pairs> renewed;
    days.push_back("MONDAY");
    days.push_back("TUESDAY");
    days.push_back("WEDNESDAY");
    days.push_back("THURSDAY");
    days.push_back("FRIDAY");
    days.push_back("SATURDAY");
    timeslots.push_back("9:00-10:00");
    timeslots.push_back("10:00-11:00");
    timeslots.push_back("11:00-12:00");
    timeslots.push_back("12:00-1:00");
    timeslots.push_back("1:00-2:00");
    timeslots.push_back("2:00-3:00");
    timeslots.push_back("3:00-4:00");
    timeslots.push_back("4:00-5:00");
    system("color 80");
    funfram();
    gotoxy(26,7);
    cout << "Welcome to the Marvellous Time Table Generator" << endl;
    gotoxy(14,8);
    cout << "This project aims at tackling the immensely difficult problem of time table generation" << endl;
    gotoxy(24,9);
    cout << "An engineering course consists of two kinds of semesters. " << endl;
    gotoxy(0,10);
    cout << "Choose the semester you want to build a timetable for" << endl;
    cout<<endl;
    gotoxy(2,12);
    cout << "1.An Odd Semester" << endl;
    gotoxy(2,13);
    cout << "2.An Even Semester" << endl;
    gotoxy(2,14);
    cout << "3.EXIT" << endl;
    int x;
    cin >> x;
    if(x==3)
    {
        cout << "Thanks for using my project" << endl;
        return 0;
    }
    if(x==1)
    {
    while(1)
    {
        system("cls");
        system("color 80");
        funfram2();
        gotoxy(26,7);
        cout << "You are in the odd semester section of timetable generator" << endl;
        gotoxy(26,8);
        cout << "Choose any of the following options" << endl;
        gotoxy(2,9);
        cout << "1.Add a student record" << endl;
        gotoxy(2,10);
        cout << "2.Add a teacher record" << endl;
        gotoxy(2,11);
        cout << "3.Graph colouring result(To be chosen only when all required student and teacher records have been added)" << endl;
        gotoxy(2,12);
        cout << "4.Exit" << endl;
        gotoxy(2,14);
        cout << "Choosing any other option leads to automatic termination of program" << endl;
        int t;
        cin >> t;
        if(t==4)
        {
            break;
        }
        switch(t)
        {
        case 1:
            cout << "Enter the semester number of the student(Choose only among 1,3,5,7)" << endl;
            int k;
            cin >> k;
            if(!(k==1 || k==3 || k==5 || k==7))
            {
                cout << "You did not enter the correct semester number" << endl;
                break;
            }
            addstudentsubjects(k,subjects);
            delay(2000);
            break;
        case 2:
            cout << "Enter the name of the teacher" << endl;
            cin >> l;
            addteachersubjects(l,subjects,x);
            break;
        case 3:
            graphColoringUtil(subjects,color,0);
            modifySolution(color,fresh);
            converttopairs(fresh,m);
            //printpairs(m);
            generatefinalvector(m,renewed);
            //printrenewedvector(renewed);
           // printstudentcount();
           // printteacherlist(teachers);

            formtimetable(renewed,studentcount);
            return 0;
        default:
            return 0;
        }
    }
    }
    if(x==2)
    {
    while(1)
    {
        system("cls");
        system("color 80");
        funfram2();
        gotoxy(22,12);
        cout << "You are in the even semester section of timetable generator" << endl;
        gotoxy(2,13);
        cout << "Choose any of the following options" << endl;
        gotoxy(2,14);
        cout << "1.Add a student record" << endl;
        gotoxy(2,15);
        cout << "2.Add a teacher record" << endl;
        gotoxy(2,16);
        cout << "3.Graph colouring result(To be chosen only when all required student and teacher records have been added)" << endl;
        gotoxy(2,17);
        cout << "4.Exit" << endl;
        gotoxy(2,18);
        cout << "Choosing any other option leads to automatic termnation of program" << endl;
        int t;
        cin >> t;
        if(t==4)
        {
            break;
        }
        switch(t)
        {
        case 1:
            cout << "Enter the semester number of the student(Choose only among 2,4,6,8)" << endl;
            int k;
            cin >> k;
            if(!(k==2 || k==4 || k==6 || k==8))
            {
                cout << "You did not enter the correct semester number" << endl;
                break;
            }
            addstudentsubjects(k,subjects);
            break;
        case 2:
            cout << "Enter the name of the teacher" << endl;
            cin >> l;
            addteachersubjects(l,subjects,x);
            break;
        case 3:
            graphColoringUtil(subjects,color,0);
            modifySolution(color,fresh);
            converttopairs(fresh,m);
            //printpairs(m);
            generatefinalvector(m,renewed);
            //printrenewedvector(renewed);
           // printstudentcount();
           // printteacherlist(teachers);
            formtimetable(renewed,studentcount);
            return 0;
        default:
            return 0;
        }
    }
    }
}

