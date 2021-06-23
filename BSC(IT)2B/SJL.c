#include<stdio.h>
int main(){
int n;
printf("Enter The Number of Process");
scanf("%d",&n);
int bt[n],at[n],tat[n],wt[n],pid[n],ct[n];
printf("Enter The Burst Time \n");
for(int i=0;i<n;i++){
    pid[i]=i;
printf("Burst Time P%d: ",i+1);
scanf("%d",&bt[i]);
}
int temp;
// Sorting The Process According To Burst Time
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
    if(bt[j]>bt[j+1]){
     temp=bt[j];
     bt[j]=bt[j+1];
     bt[j+1]=temp;
     temp=pid[j];
     pid[j]=pid[j+1];
     pid[j+1]=temp;
    }
}
}
temp=0;
printf("PID\tBT\tWT\tTAT\n");
for(int i=0;i<n;i++){
wt[i]=temp;
temp+=bt[i];
tat[i]=wt[i]+bt[i];
printf("%d\t%d\t%d\t%d\n",pid[i]+1,bt[i],wt[i],tat[i]);
}
}