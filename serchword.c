#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int first;

int j,i;
//function for find the first occurence of word.

int wordfind(char paragraph[1000],char word[100]){
      if (strlen(paragraph) > 0 && paragraph[strlen(paragraph) - 1] == '\n') {
        paragraph[strlen(paragraph) - 1] = '\0';
    }

    for (i = 0; paragraph[i] != '\0'; i++) {

        if (paragraph[i] == word[i]) {

            for (j = 1; word[j] != '\0'; j++) {
                if (paragraph[j] != word[j]) {
                    break;
                }
            }

            if(word[j] == '\0') {

                first=i;

                break;
            }
        }
    }

    if(first!=i) {
       first=-1;
    }

    return first;

}


//main function
int main() {

    char paragraph[1000];
    char word[100];
    int found;


    printf("Enter a sentence or paragraph : ");
    gets(paragraph);

    printf("Enter a word to be searched : ");
    gets(word);

    found=wordfind(paragraph,word);
    if(first!=-1){
        printf("The first occurrence of the word in the paragraph is :%d",first);
    }else{
        printf("The word wasn't found in the pharagraph.");
    }
    return 0;
}



