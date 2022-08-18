#ifndef BTREE
#define BTREE

#include <iostream>
#include <vector>
#include <fstream>

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <bits/stdc++.h>
using namespace std;
  
// This can be changed to any value - 
// it is the order of the B* Tree
#define N 4 
  
struct node {
  
    // key of N-1 nodes
    int key[N - 1];
      
    // Child array of 'N' length
    struct node* child[N];
      
    // To state whether a leaf or not; if node 
    // is a leaf, isleaf=1 else isleaf=0
    int isleaf;
      
    // Counts the number of filled keys in a node
    int n;
      
    // Keeps track of the parent node
    struct node* parent;
};

class BTREE {
private:
    struct node;
    

public:
    struct node* searchforleaf(struct node* root, int k, 
                     struct node* parent, int chindex);
    
    struct node* insert(struct node* root, int k); 

    //show the tree
    void showTree(struct node*, int child, int key); 

    //decides the name of the new tree
    struct node* start(char name); 

    //Creates a newleaf for function insert
    struct node* newleaf; 
};



#endif
