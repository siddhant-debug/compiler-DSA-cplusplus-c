#include<iostream>
using namespace std;
int inc_arr[20][20]; 
int ed_no = 0;
void displayMatrix(int v, int e) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < e; j++) {
         cout << inc_arr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) { //function to add edge into the matrix with edge number
   inc_arr[u][ed_no] = 1;
   inc_arr[v][ed_no] = 1;
   ed_no++; //increase the edge number
}
main(int argc, char* argv[]) {
   int v = 6; //there are 6 vertices in the graph
   int e = 9; //there are 9 edges in the graph
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   displayMatrix(v, e);
}
