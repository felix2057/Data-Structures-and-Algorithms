//Write a C Program to create the given tree structure first using array representation and then
//using linked list representation and display
#include <stdio.h>
char a[28];
int root(char* key){
    if(a[0]!=0)
        printf("Tree has root\n");
    else
        a[0]=*key;
    return 0;
}
int set_left(char* key,int parent){
    if(a[parent]==0)
        printf("Cannot set parent\n");
    else
        a[(parent*2)+1]=*key;
    return 0;
}
int set_right(char* key,int parent){
    if(a[parent]==0)
        printf("Cannot set parent\n");
    else
        a[(parent*2)+2]=*key;
    return 0;
}
int print_tree(){
  printf("\n");
  for (int i = 0; i < 28; i++) {
    if (a[i] != 0)
        printf("%c ",a[i]);
    else
        printf("-");
  }
  printf("\n");
  return 0;
}
int main() {
    root("A");
    print_tree();
    set_left("B",0);
    print_tree();
    set_right("C",0);
    print_tree();
    set_left("D",1);
    print_tree();
    set_right("E",1);
    print_tree();
    set_left("F",4);
    print_tree();
    set_left("G",2);
    print_tree();
    set_right("H",2);
    print_tree();
    set_left("J",6);
    print_tree();
    set_right("K",6);
    print_tree();
    set_left("L",13);
    print_tree();

}