//WAP to create an undirected graph using adjacency matrix
//method.
#include <stdio.h>
#define n 5

// Initialize the matrix to zero
void start(int arr[][n]) {
  int i, j;
  for (i = 0; i < n; i++) 
    for (j = 0; j < n; j++)
      arr[i][j] = 0;
}

// Add edges
void addEdge(int arr[][n], int i, int j) {
  arr[i][j] = 1;
  arr[j][i] = 1;
}

// Print the matrix
void printAdjMatrix(int arr[][n],char a[]) {
  int i, j;

  for (i = 0; i < n; i++) {
    printf("%c: ", a[i]);
    for (j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int arr[n][n];
  char a[n];
  for(int i=0;i<n;i++)
    scanf("%c",&a[i]);
  

  start(arr);
  addEdge(arr, 0, 1);
  addEdge(arr, 0, 2);
  addEdge(arr, 2, 4);
  addEdge(arr, 1, 1);
  addEdge(arr, 1, 2);
  addEdge(arr, 1, 4);
  addEdge(arr, 2, 3);

  printAdjMatrix(arr,a);

  return 0;
}