#include<stdio.h>
#include<stdlib.h>

int main(){
	int N, M;
	
    scanf("%d %d", &N, &M);
    
    int barra[N+1];
    
    int movimentos[M+1];
    
    for (int i=1; i<=N;i++) scanf("%d", &barra[i]);
    for (int i=1; i<=M;i++) scanf("%d", &movimentos[i]);
    
    int freq[10] = {0,0,0,0,0,0,0,0,0,0};
    
     for (int i=1;i<M;i++) {
        int pI = movimentos[i];
        int pF = movimentos[i+1];
        if (i>1 && pF > pI) pI++;
        if (i>1 && pF < pI) pI--;
        if (pF > pI) {
			for (int j=pI;j<=pF;j++) freq[barra[j]] += 1;
		} else if (pF < pI) {
    		for (int j=pI;j>=pF;j--) freq[barra[j]] += 1;
		}
	}
	for (int i=0;i<=9;i++) {
		printf("%d ",freq[i] );
       
    }
    system("pause");
}
