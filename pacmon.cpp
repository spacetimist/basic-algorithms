#include <stdio.h>
#include <string.h>

char P[100][100];
int a,b,food,row,col;
void pac(int a,int b){
    if(P[a][b]=='#'||a<0||b<0||a>=row||b>=col) return;
    else if(P[a][b]=='*')food++;
    P[a][b]='#';
    
    pac(a-1,b);
    pac(a+1,b);
    pac(a,b-1);
    pac(a,b+1);
}

int main (){
    int c;
    scanf("%d",&c);
    getchar();
    for(int i=0;i<c;i++){
        food=0;
        scanf("%d %d", &row,&col);
        getchar();
        for(int j=0;j<row;j++){
            scanf("%[^\n]", P[j]);
            getchar();
        }
        for (int k=0;k<row;k++){
            for (int l=0;l<col;l++){
                if(P[k][l]=='P'){
                    pac(k,l);
                }    
            }
        }
        printf("Case #%d: ",i+1);
        printf("%d\n",food);
    }
    return 0;
}
