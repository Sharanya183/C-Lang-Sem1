#include <stdio.h>

int bid[5] = {101, 102, 103, 104, 105};
int price[5] = {250, 360, 120, 100, 56};
int qty[5] = {100, 27, 16, 79, 100};

void search();
void range();
void total();
void sort();

int main()
{
    search();
    range();
    total();
    sort();
    
    return 0;
    
}

void search()
{
    int book, i, found = 0;
    
    printf("Enter Book ID: ");
    scanf("%d", &book);
    
    for(i=0; i<5; i++)
    {
        if(book == bid[i])
        {
            found = 1;
            printf("Book ID: %d\tPrice: %d\n\n", bid[i], price[i]);
            break;
        }
    }
    
if(found == 0)
{
    printf("Book not found\n\n");
}

}

void range()
{
    int low, up, i;
    
    printf("Enter Lower Limit of Range: ");
    scanf("%d", &low);
    printf("Enter Upper Limit of Range: ");
    scanf("%d", &up);
    
    for(i = 0; i<5; i++)
    {
        if(low<=price[i] && price[i]<up)
        {
            printf("%d ", bid[i]);
            printf("\n\n");
        }
    }
    
}

void total()
{
    int i, cost, tcost = 0;
    
    for(i=0; i<5; i++)
    {
        cost = bid[i] * price[i];
        tcost += cost;
    }
    
    printf("Total Cost: %d\n\n", tcost);
}

void sort()
{
    int i, j;
    
    for(i=0; i<5; i++)
    {
        
    }
    
    printf("Cheapest Book: %d\n", bid[0]);
    printf("Expensive Book: %d\n", bid[4]);
    
}