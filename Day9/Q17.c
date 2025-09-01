//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,f;
    printf("Write the coffient of x^2 :");
    scanf("%d",&a);
    printf("Write the coffient of x :");
    scanf("%d",&b); 
    printf("Write the constant :");
    scanf("%d",&c);
    d= (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    e= (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    f= b*b -4*a*c;
    if(f>0){
        printf("Roots are real and different %d, %d",d,e);
    }
    else if(f==0){
        printf("Roots are real and equal %d",d);
    }
    else{
        printf("Roots are complex");
    }

}
/*#include <stdio.h>
void A(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
int se(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1; 
}
int main() {
    int arr[50], n, key, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    A(arr, n);
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    pos = se(arr, n, key);
    if (pos != -1)
        printf("Search is successful! Element found at position %d\n", pos + 1);
    else
        printf("Search is unsuccessful!\n");
    return 0;
}
*/
