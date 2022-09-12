//
// Created by praha on 12-09-2022.
//
#include <stdio.h>
#include <stdlib.h>
int list[5],i,n=0;

void create();
void insert(int x,int p);
void delete(int p);
void display();

int main(){
    int x,p,c;
    printf("---------------------LIST OF ADT USING ARRAY -------------------- ");

    while(1){
        printf("\n---------------------------The Operations--------------------------");
        printf("\n1.create()\n2.insert()\n3.delete()\n4.display()\n5.exit()\n");
        printf("\nEnter your Choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:create();break;
            case 2:{
                printf("--------------------------------");
                printf("Enter the number of elements and Position: ");
                scanf("%d,%d",&x,&p);
                insert(x,p);
                break;
            }
            case 3:{printf("--------------------------------");
                printf("Enter the number of elements and Position to be Deleted: ");
                scanf("%d,%d",&x,&p);
                delete(p);
                break;}
            case 4:{printf("--------------------------------");
                display();break;}
            case 5:
                exit(0);
            default:{printf("--------------------------------");
                printf("Enter valid Choice: ");
                break; }

        }
    }

}


void create(){
    int e,i;
    printf("\nEnter The Number of Elements in the list: ");
    scanf("%d",&e);
    for (i=0;i<e;i++){
        printf("\nEnter The Element %d :",i+1 );
        scanf("%d",&list[i]);
    }
    n =e;
}


void insert(int x,int p){
    if(n==5)
        printf("\nList Overflow");
    else if((p<0)||(p>n))
        printf("\nPosition is Invalid");
    else{
        for (i = n - 1; i >= p; i--)
            list[i + 1] = list[i];

    }list[p] = x;
    n++;
}


void delete(int p){
    if(p==0)
        printf("\nList Underflow");
    else if ((p<0)||(p>n-1)){
        printf("\nPosition is Invalid");
    }
    else{
        for (i=p;i<n;i++){list[i] = list[i+1];}
        n--;
    }
}


void display() {
    int p ;
    if (n==0)
        printf("\nList Empty");
    else{
        printf("The element presnt i the list are:\n");
        printf("\nElement\tPosition\n\n");
        for (p=0;p<n;p++) { printf("%d\t%d\n\n",list[p],p);}
    }
}