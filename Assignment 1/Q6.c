//Write to program to input a coordinate and tell which quadrant the point lies in
#include<stdio.h>
int main(){
    int x,y;

    printf("Enter x coordinate: ");
    scanf("%d",&x);
    printf("Enter y coordinate: ");
    scanf("%d",&y);

    if (x>0 && y>0){
        printf("The Coordinate (%d,%d) lies in First Quadrant",x,y);
    }else if (x>0 && y<0){
        printf("The Coordinate (%d,%d) lies in Fourth Quadrant",x,y);
    }else if (x<0 && y>0){
        printf("The Coordinate (%d,%d) lies in Second Quadrant",x,y);
    }else if (x<0 && y<0){
        printf("The Coordinate (%d,%d) lies in Third Quadrant",x,y);
    }else if (x==0 && y!=0){
        printf("The Coordinate (%d,%d) lies on the Y - Axis",x,y);
    }else if (y==0 && x!=0){
        printf("The Coordinate (%d,%d) lies on the X - Axis",x,y);
    }else if (x==0 && y==0){
        printf("The Coordinate (%d,%d) lies on the Origin",x,y);
    }else{
        printf("Invalid");
    }
    
    return 0;
}