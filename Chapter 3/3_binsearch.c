#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(){

    int v[] = { 1, 4, 5, 5, 8, 12, 13, 15, 15, 18, 20};
    printf("%d \n", binsearch(20, v, 11));

}

int binsearch(int x, int v[], int n){
    int low, high, mid;

    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low+high) /2;
        if(x < v[mid])
            high = mid-1;
        else
            low = mid + 1;
    }
    if(v[mid] == x)
        return mid;
    else
        return -1;
}