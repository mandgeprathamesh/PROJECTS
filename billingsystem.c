#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    float rate[8] = {50,100,150,50,200,150,200,300};
    int qnt, i, j=0, k, n, x;
    float bill, total=0;
    int q[10], product[10];
    float price[10];
    
    printf("\n \t \t    Welcome to PCCOE CAFE \n");
    
    
    aa:while(i != 0){
        
        printf("\n \t ---------************************---------- \n");
        printf("\n \t AVAILABLE ITEMS \n");
        printf("\n  \t 1] Cold Coffee \t \t  Rs.50 \n \t 2] Sandwitch \t\t \t  Rs.100(2 pcs) \n \t 3] Hot Choclate Milk \t \t  Rs.150 \n \t 4] Regular Coffee \t \t  Rs.50 \n \t 5] Pasta \t \t\t  Rs.200 \n   \t 6] Zinger Burger \t \t  Rs.150 \n \t 7] Garlic Bread \t \t  Rs.200 ,\n \t 8] Pizza \t \t\t  Rs.300(medium size)\n" );
        printf("\n \t ---------************************---------- \n");
        
        printf("\n Enter product no :- ");
        scanf("%d",&n);
        printf("\n Enter Quantity :- ");
        scanf("%d",&qnt);
        
        switch (n)
        {
            case 1:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 2:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 3:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 4:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 5:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 6:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 7:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
            case 8:
                    bill=rate[n-1]*qnt;
                    q[j] = qnt;
                    price[j] = bill;
                    product[j] = n;
                    j = j + 1;
                    goto cc;
                    break;
                    
            case 0:break;        
        }
       
       cc:total = total + bill; 
       printf("\n Enter any key to Add more \n Enter 0 to make bill : ");
       scanf("%d",&x);
        if(x==0)
        {
            goto bb;
        }
        else
        goto aa;
    }
    
    
    
    bb:
        printf("\n \t PCCOE CAFE POINT ");
        printf("\n \t---------**************************-----------");
        printf("\n \t Product  \t\t Qty \t rate \t price ");
        
    for(k=0;k<sizeof(price);k++)
    {
        int n = product[k];
        
        if (n == 1)
            printf("\n\t Cold Coffee \t\t   %d \t %0.2f \t %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 2)
            printf("\n\t Sandwitch \t\t   %d \t %0.2f  %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 3)
            printf("\n\t Hot Chocolate Milk \t   %d \t %0.2f  %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 4)
            printf("\n\t Regular Coffee \t   %d \t %0.2f \t %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 5)
            printf("\n\t Pasta \t\t\t   %d \t %0.2f  %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 6)
            printf("\n\t Zinger Burger \t\t   %d \t %0.2f  %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 7)
            printf("\n\t Garlic Bread \t\t   %d \t %0.2f  %0.2f",q[k],rate[n-1],price[k]);
        else if (n == 8)
            printf("\n\t Pizza \t\t\t   %d \t %0.2f  %0.2f",q[k],rate[n-1],price[k]);
        else
            break;

    }
    
    printf("\n");
    printf("\n \t Total :- %0.2f",total);
    printf("\n \t---------**************************-----------\n");
    printf("\n Thank you do visit again ");
    getch();
            
}
