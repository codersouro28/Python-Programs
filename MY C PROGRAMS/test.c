# include <stdio.h>
#include<stdlib.h>
int main() {
    int i, j, *graph, vertex_number, temp1, temp2;

    printf("Input Vertex Number:");
    scanf("%d", &vertex_number);
    graph=(int*)malloc(vertex_number*sizeof(int));
    printf("Enter %d number of vertices",vertex_number);
    for (i = 0; i < vertex_number; i++){
        scanf("%d", &graph[i]);
    }
    while (1) {
    	
        //SORTING ARRAY
        for (i = 0; i < vertex_number; i++) {
            for (j = i+1; j < vertex_number; j++) {
                if (graph[i] < graph[j]) {
                    temp1 = graph[i];
                    graph[i] = graph[j];
                    graph[j] = temp1;
                }
            }
        }
        
        //IF ALL VERTEX DEGREES EQUAL 0 GRAPH EXIST
        if (graph[0] == 0) {
            printf(" graph exist.");
            return 0;
        }
        //NEGATIVE VERTEX DEGREE NOT EXIST
        for (i = 0; i < vertex_number; i++) {
            if (graph[i] < 0){
                printf("graph not exist.");
                return 0;
            }
        }
        temp2 = graph[0];
        vertex_number--;
        for (i = 0; i < vertex_number; i++) {
            graph[i] = graph[i + 1];
        }
        for (i = 0; i < temp2; i++) {
            graph[i]-=1;
            if (graph[i] < 0) {
                printf("graph not exist.");
                return 0;
            }
        }
        printf("-------------\n");
        for (i = 0; i < vertex_number; i++) {
            printf("%d ,",graph[i]);
        }
        printf("\b \n");
    }
}
