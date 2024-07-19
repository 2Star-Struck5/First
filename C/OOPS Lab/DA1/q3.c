#include<stdio.h>
int main(){
    char a,b;
    int i=0,j=0,k=0,l=0,bill=0;
    printf("Enter what you would like to have: \n");
    printf("B=Burger\n");
    printf("F=French Fries\n");
    printf("P=Pizza\n");
    printf("S=Sandwhiches\n");
    printf("E=Exit\n");
    while(1){
        scanf("%s", &a);
        if (a=='E'||a=='e'){
            break;
        }
        switch(a) {
    
        case 'B':
            printf("Count: ");
            scanf("%d", &i);
            i=i*200;
            break;
        case 'F':
            printf("Count: ");
            scanf("%d", &j);
            j=j*50;
            break;
        case 'P':
            printf("Count: ");
            scanf("%d", &k);
            k=k*500;
            break;
        case 'S':
            printf("Count: ");
            scanf("%d", &l);
            l=l*150;
            break;
        default:
            printf("Invalid");
            continue;
        };
    };
    bill=i+l+j+k;
    printf("Total Bill: Rs. %d", bill);

    return 0;
}