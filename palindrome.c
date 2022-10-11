#include <stdio.h>
#include <string.h>

int main(){
    int T;
    char word [100001];
    char balik [100001];
    int total [1001]={0};

    scanf ("%d", &T);
    getchar();

    for (int i=0;i<T;i++)
    {
        scanf ("%s", word);
        getchar();
        for (int j=0;j<strlen(word);j++)
        {
            balik[(strlen(word)-1)-j] = word[j];
        }
        for (int k=0;k<strlen(word);k++)
        {
            if (balik[k] == word[k])
            {
                total[i]+=2;
            }
            else
            {
                total[i]++;
                break;
        }
    }
        printf("Case #%d: ", i+1);
        if (total[i]%2==0)
        {
            printf ("Yay, it's a palindrome\n", word);
        }
        else
        {
        printf ("Nah, it's not a palindrome\n", word);
        }
    }
    return 0;
}