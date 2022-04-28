#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int c[10][10],stack[10],current_visit_vertices[10],visited_vertices[10];
int x,y,z,total_number_of_edges,total_number_of_vertices,top,initial_vertex;
int main()
{
    cout<<"Enter no total number of vertices are in graph :";
    cin >> total_number_of_vertices;
    cout <<"Enter no total number of edges are in graph:";
    cin >> total_number_of_edges;
    cout <<"\nEDGES \n";
    for(z=1; z<= total_number_of_edges; z++)
    {
        cin >>x>>y;
        c[x][y]=1;
    }
    cout <<"Traverse start from initial vertex:";
    cin >>initial_vertex;
    cout <<"All Visitied vertices from stack like this : ";
    cout << initial_vertex <<" ";
    visited_vertices[initial_vertex]=1;
    z=1;
    while(z<total_number_of_vertices)
    {
        for(y=total_number_of_vertices; y>=1; y--)
            if(c[initial_vertex][y]!=0 && visited_vertices[y]!=1 && current_visit_vertices[y]!=1)
            {
                current_visit_vertices[y]=1;
                stack[top]=y;
                top++;
            }
        initial_vertex=stack[--top];
        cout<<initial_vertex<< " ";
        z++;
        current_visit_vertices[initial_vertex]=0;
        visited_vertices[initial_vertex]=1;
    }
    return 0;
}
