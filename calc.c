#include <stdio.h>

int main() {
    
    int a, b, result;
    char op;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("Enter operator: ");
    scanf(" %c", &op);
    
    switch(op){
    
    case '+':
    result = a + b;
    break;
    
    case '-':
    result = a - b;
    break;
    
    case '*':
    result = a * b;
    break;
    
    case '/':
    if (b!=0)
    {
        result = a / b;
    }else {
        printf("division by 0 not possible");
        return 1;
    }
    break;
    
    default:
    printf("Invalid Operator\n");
    break;
    }
    
    printf("%d", result);
    return 0;
}