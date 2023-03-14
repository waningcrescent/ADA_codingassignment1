
#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
int overlaps = 0;
scanf("%d", &n);
int arr1[n];
int arr2[n];

for(int i=0; i < n; i++){
    scanf("%d%d", &arr1[i], &arr2[i]);
}

for(int m = 0; m <n ; m++){
    for(int l = m+1; l <n ; l++){
        if(arr1[m] > arr1[l] && arr2[m]< arr2[l] || arr1[m] < arr1[l] && arr2[m] > arr2[l]){
            overlaps +=1;
        }
    }
}
printf("%d",overlaps);
return 0;
}
