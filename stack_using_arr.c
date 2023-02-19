#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int stack[10],top=-1;
void push(int element){
if (top==9){
    printf("\nSTACK OVERFLOWN !! Insertion not possible\n");
}
else{
    top++;
    stack[top]=element;
    printf("INSERTION SUCCESSFUL!");
}
}

void pop(){
    if(top==-1){
        printf("STACK UNDERFLOW!! Deletion not possible");
    }
    else{
        top--;
        printf("\nPOPPING SUCCESFUL\n");
    }

}
void display(){
    if(top==-1){
        printf("STACK IS EMPTY!!");
    }
    else{
        printf("ELEMENTS IN THE STACK ARE: ");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }

}

void peek(){
    printf("The topmost element is: %d",stack[top]);
}
int main()
{
    printf("ROHAN PACHAURI IT-C 2100320130143\n");
    

    int size,element;
     printf("Select an operation from Stack: ");
        printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT");
    
    while(1){
       
        int choice;
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("ENTER THE ELEMENET YOU WANT TO PUSH: \n");
                 scanf("%d",&element); 
                 push(element);
            break;
        case 2:
                pop();
                break;
        case 3:  
                peek();
                break;
        case 4: 
            display();
            break;

        case 5:
            exit(0);
        
        default:
            printf("Enter a valid choice!");
        }


    }




 return 0;
}
