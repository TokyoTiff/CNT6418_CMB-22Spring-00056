#include <stdio.h>
#include <math.h>

//ask for bytes oer sector
//sectors per cluster
//logical file size
//how much slack space there is

int main(){
    
double bytesPerSector, sectorsPerCluster, fileSize, slackSpace, bytesInCluster, numClusters, totalClusters;

printf("What is the number of bytes per sector?\n");
scanf("%lf", &bytesPerSector);

printf("What is the number of sectors per cluster?\n");
scanf("%lf", &sectorsPerCluster);

printf("What is the file size in bytes?\n");
scanf("%lf", &fileSize);

bytesInCluster = bytesPerSector * sectorsPerCluster;

numClusters = fileSize / bytesInCluster;

totalClusters = ceil(numClusters);

printf("The total number of clusters is:  %lf", totalClusters);

printf("The slackSpace size is %lf\n", slackSpace);

    return 0;
}