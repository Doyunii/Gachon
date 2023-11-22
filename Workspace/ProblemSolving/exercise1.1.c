/*
*  File: Find min max age/score of people
*
* Author: Kwon Doyun 202037006
* Date: 2023.09.23
* Course: Problem Solving
*
* Summary of file:
*   This file contains code which
*   founds Highist score's age and Lowest score's age/ Oldest student's score and Yougest student's score.
*/
#include <stdio.h>

int main() {
    int maxage = -1, minage = 1000;
    int maxscore = -1, minscore = 1000;
    int maxagecnt = 0, minagecnt = 0, maxscorecnt = 0, minscorecnt = 0;
    int age[100], score[100];
    int maxagegrp[100], minagegrp[100], maxscoregrp[100], minscoregrp[100];
    int i;
    int stdnt=5; // represents number of students

    printf("Input %d elements (age):\n", stdnt);
    for (i = 0; i < stdnt; i++) {
        printf("element(%d) : ", i+1);
        scanf("%d", &age[i]);
    }/*input age*/

    printf("Input %d elements (score):\n", stdnt);
    for (i = 0; i < stdnt; i++) {
        printf("element(%d) : ", i+1);
        scanf("%d", &score[i]);
    }/*input scores*/

    for (i = 0; i < 5; i++) {
        if (age[i] > maxage) {
            maxage = age[i]; /*new max age found*/
            maxagecnt = 0; /*initialization of max age count*/
            maxagegrp[maxagecnt] = i; 
        } else if (age[i] == maxage) /* equal max age found*/{
            maxagecnt++;
            maxagegrp[maxagecnt] = i;
        }

        if (age[i] < minage) {
            minage = age[i];
            minagecnt = 0;
            minagegrp[minagecnt] = i;
        } else if (age[i] == minage) {
            minagecnt++;
            minagegrp[minagecnt] = i;
        }/* new min age found*/

        if (score[i] > maxscore) {
            maxscore = score[i];
            maxscorecnt = 0;
            maxscoregrp[maxscorecnt] = i;
        } else if (score[i] == maxscore) {
            maxscorecnt++;
            maxscoregrp[maxscorecnt] = i;
        } /*new max score found*/

        if (score[i] < minscore) {
            minscore = score[i];
            minscorecnt = 0;
            minscoregrp[minscorecnt] = i;
        } else if (score[i] == minscore) {
            minscorecnt++;
            minscoregrp[minscorecnt] = i;
        }/*new min score found*/
    }

    printf("Score for the oldest student(s):\n");
    for (i = 0; i <= maxagecnt; i++) {
        printf("Age: %d, Score: %d\n", age[maxagegrp[i]], score[maxagegrp[i]]);
    }

    printf("Score for the youngest student(s):\n");
    for (i = 0; i <= minagecnt; i++) {
        printf("Age: %d, Score: %d\n", age[minagegrp[i]], score[minagegrp[i]]);
    }

    printf("Age for the highest score student(s):\n");
    for (i = 0; i <= maxscorecnt; i++) {
        printf("Age: %d, Score: %d\n", age[maxscoregrp[i]], score[maxscoregrp[i]]);
    }

    printf("Age for the lowest score student(s):\n");
    for (i = 0; i <= minscorecnt; i++) {
        printf("Age: %d, Score: %d\n", age[minscoregrp[i]], score[minscoregrp[i]]);
    }

    return 0;
}