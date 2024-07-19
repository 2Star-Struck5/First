#include<stdio.h>
#include<string.h>
int main(){
    char names[100][50], str[100];
    int i=0, j=0, n;
    printf("Enter no. of students: ");
    scanf("%d", &n);
    if (i<0 || i>100){
        printf("invalid input");

    }else{
        for (i=0;i<n;i++){
            printf("Enter name of student %d: ", i+1);
            scanf("%s", names[i]);
        }
         

        
        for (i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if (strcmp(names[i],names[j])>0){

                    strcpy(str,names[i]);
                    strcpy(names[i],names[j]);
                    strcpy(names[j],str);
                }
            }
        }
        printf("The sorted order of names is: ");
        for(i=0;i<n;i++){
        printf("\nName of student %d: %s", i+1, names[i]);

        }
    } 
    
        
    return 0;

}