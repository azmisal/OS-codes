#include<stdio.h>
#include <stdlib.h>
int n;
struct node{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head = NULL;
struct node *mid = NULL;
struct node *tail = NULL;
struct node *traveller = NULL;
int main(){
    int i , j, n , k , p[100] , temp, pf ;
    printf("Enter the number of reference pages : ");
    scanf("%d",&n);
    printf("Enter the reference string : ");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);

    }
    printf("Entered Reference string \n ");
    for(i=0;i<n;i++){
        printf("%d , ",p[i]);

    }
    printf("Enter the number of frames : ");
    scanf("%d",&k);
    pf = 0;
    for(i = 0;i<n;i++){
        if(i == 0){
            struct node *newnode = (struct node*) malloc(sizeof(struct node));
            newnode -> data = p[i];
            newnode -> prev = NULL;
            newnode -> next = NULL;
            head = newnode;
            mid = newnode;
            pf = pf + 1;
            traveller = newnode -> next;
        }
        else if(i==1){
           if(p[i] != head -> data ){
            
            struct node *newnode = (struct node*) malloc(sizeof(struct node));
            mid -> next = newnode;
            newnode -> data = p[i];
            newnode -> prev = head;
            newnode -> next = NULL;
            mid = newnode;
            pf = pf + 1;
            traveller = newnode -> next;
           }
        }
        else if(i == 2){
            if((p[i] != head -> data ) && (p[i] != mid ->data)){
            
            struct node *newnode = (struct node*) malloc(sizeof(struct node));
            mid -> next = newnode;
            newnode -> data = p[i];
            newnode -> prev = mid;
            newnode -> next = head;
            tail = newnode;
            pf = pf + 1;
            head -> prev = tail;
            traveller = newnode -> next;
            }
        }
        else{
            if(((p[i] != head -> data ) && (p[i] != mid ->data)&&( p[i] != tail->data))){
        
                traveller ->data = p[i];
                pf = pf + 1;
                traveller = traveller -> next;

            }
        }
    }
    printf(" pagefaults  = %d",pf);
    return 0;

}

