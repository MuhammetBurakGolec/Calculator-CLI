//
//  main.c
//  Calculator
//
//  Created by Muhammet Burak Göleç on 8.03.2021.
//

#include <stdio.h>
double pcss(int proccces,int tme){
    double result = 0.0, x = 0;
    int count = 0;
    
    for (int i=0;i<tme;i++){
        printf("\nGive %d number : ",i+1);
        scanf("%lf",&x);
        
        if (proccces==1){
            result = result + x;
        }
       
        if (proccces==2){
            if (count==0) {
                result = x;
                count++;
            }
            else result = result - x;
        }
        if (proccces==3){
            if (count==0) {
                result = x;
                count++;
            }
            else result = result / x;
        }
        
        if (proccces==4){
            if (count==0) {
                result = x;
                count++;
            }
            else result = result * x;
            }
        }
    return result;
}

int main(){

    double result = 0.0;
    int ccc=1,tme=0,procces=0;
    
    while (ccc==1) {
        
        printf("Welcome To The Calculator\n");
        printf("[Add-1][Subtract-2][Divide-3][Multiply-4]\n");
       
        printf("Which Procce you want : ");
        scanf("%d",&procces);
        printf("\nHow many times :");
        scanf("%d",&tme);
    
        result = pcss(procces,tme);
        printf("\n %lf",result);
        
        printf("\nWould u like to contunie Yes [1] / No [0] :  ");
        scanf("%d",&ccc);
        printf("\n");
    }

}
