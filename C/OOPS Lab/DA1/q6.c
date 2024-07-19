#include<stdio.h>
int main(){
    char a;
    int i,j,k,l;
    float bill,disc,net,total, tdisc;
    printf("Welcome to Mercy Electronics!!!\n12%% off on each product\n");
    printf("Enter what you would like to buy: \n");
    printf("P=4GB Transcend Pen Drive\nMRP= Rs. 500/-\n\n");
    printf("H=Sony Head Set\nMRP= Rs. 1000/-\n\n");
    printf("S= 1TB Seagete Hardisk\nMRP= Rs. 4000/-\n\n");
    printf("T=Samsung Tablet\nMRP= Rs. 3500/-\n\n");
    printf("E=Exit\n");
     while(1){
        scanf("%s", &a);
        if (a=='E'||a=='e'){
            break;
        }
        switch(a) {
    
        case 'P':
            printf("Count: ");
            scanf("%d", &i);
            net=(i*500);
            total+=net;

            disc=(net*12)/100;
            tdisc+=disc;
            
            bill+=net-disc;
            
            break;
        case 'H':
            printf("Count: ");
            scanf("%d", &j);

            net=(j*1000);
            total+=net;
            disc=(net*12)/100;
            tdisc+=disc;
                      
            bill+=net-disc;
            break;
        case 'S':
            printf("Count: ");
            scanf("%d", &k);
            net=(k*4000);
            total+=net;
            disc=(net*12)/100;
            tdisc+=disc;
            
            bill+=net-disc;
            break;
        case 'T':
            printf("Count: ");
            scanf("%d", &l);
            net=(l*3500);
            total+=net;
            disc=(net*12)/100;
            tdisc+=disc;

            bill+=net-disc;
            break;
        default:
            printf("Invalid");
            continue;
        };
        
    };
    printf("Net\t\t%.1f\nDiscount\t %.1f\nTotal\t\t%.1f", total, tdisc, bill);
    return 0;

}