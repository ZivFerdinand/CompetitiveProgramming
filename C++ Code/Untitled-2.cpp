#include<iostream> 
#include<stdio.h>
#include<stdlib.h>
using namespace std; 

struct data{ 
    int value; 
    struct data* left; 
    struct data* right; 
}*root = 0; 

struct data* create_data(int val){ 
    struct data* temp = (data*)malloc(sizeof(data)); 
    temp->value = val;
    temp->right = temp->left = 0;
    return temp;
}
void insert(data* curr, int new_val){ 
    if(root == 0){ 
        root = create_data(new_val); 
    }
    else{ 
        if(new_val < curr->value && curr->left == 0){ 
            curr->left = create_data(new_val); 
        }
        else if(new_val > curr->value && curr->right == 0){ 
            curr->right = create_data(new_val); 
        }
        else if(new_val < curr->value){ 
            insert(curr->left,new_val); 
        }
        else if(new_val > curr->value){ 
            insert(curr->right, new_val); 
        }
    }
}
void display(struct data* curr){ 
    if(curr->left != 0)display(curr->left); 
    cout << curr->value << " "; 
    if(curr->right != 0)display(curr->right); 
}

struct data* delRecursive(data* parent, data* note_to_del){ 
    // if current leaf 
    if(note_to_del->left == 0 && note_to_del->right == 0){ 
        if(root == note_to_del){ 
            root = 0;
        }
        free(note_to_del);
        return 0; 
    }
    // if current has only left child 
    else if(note_to_del->left!=0 && note_to_del->right == 0){ 
        data* temp = note_to_del->left;
        parent->left = temp;
        // if(note_to_del->value < parent->value){ 
        //     parent->left = temp;
        // }
        // else{ 
        //     parent->right = temp;
        // }
        return temp;
    }
    else if(note_to_del->left == 0 && note_to_del->right != 0){ 
        data* temp  = note_to_del->right;
        parent->right = temp;
        // if(note_to_del->value < parent->value){ 
        //     parent->left = temp; 
        // }
        // else{ 
        //     parent->right = temp; 
        // }
        return temp; 
    }
    // if current has only right child
    // if current has bot left and right
    else{ 
        //this is find successor right most child of sub tree 
        data* t = note_to_del->left;
        data* tp = note_to_del; 
        while(t->right){
            tp = t;
            t = t->right; 
        }
        //copy value t to node to be deleted
        note_to_del->value = t->value; 
        //delete successor node
        t = delRecursive(tp, t); 
        tp->right = t; 
        return note_to_del;
    }

}
struct data* parent = 0;
void del(struct data* curr, int del_val){ 
    // if we found null / delval is nt in
    if(curr == 0){ 
        cout << "is not available in bst" << endl;
        return;
    }

    /// if we found the key 
    if(curr->value == del_val){ 
        //do deletion
        curr == delRecursive(parent,curr);

    }
    if(curr->value > del_val){ 
        parent = curr; 
        del(curr->left, del_val); 
    }
    else if(curr->value < del_val){ 
        del(curr->right, del_val); 
    }
    
    
}


int main(){
    insert(root, 10);
	insert(root, 20);
	insert(root, 9);
	insert(root, 5);
	insert(root, 11);
	insert(root, 1);
	insert(root, 12);
	insert(root, 25);
	insert(root, 30);
	insert(root, 35);
	insert(root, 40);
    display(root);
    cout << endl;
    del(root, 20); 
    del(root,9);
    display(root); 

    
    return 0;
}