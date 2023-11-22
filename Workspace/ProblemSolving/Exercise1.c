#include <stdio.h>

int main (){
    int maxage=-1, minage=1000;
    int maxscore=-1, minscore=1000;
    int maxagecnt, minagecnt, maxscorecnt, minscorecnt; 
    int age[100], maxagegrp[100], minagegrp[100];
    int score[100], maxscoregrp[100], minscoregrp[100]; 
    int i;
    int n = 100;

    printf("Input %d elements(age) :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&age[i]);
	    }

    printf("Input %d elements(score) :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&age[i]);
	    }

    for (i=0; i<100; i=i+1) {
        if (age[i] > maxage) {
            maxage = age[i]; /* new max age found */ 
            maxagecnt = 0;
            maxagegrp[maxagecnt] = i; /* save the age index */ }
        else if (age[i] == maxage) {
            maxagecnt = maxagecnt + 1; /* tie max age found */ 
            maxagegrp[maxagecnt] = i; /* save the age index */}
    }

    for (i=0; i<100; i=i+1) {
        if (age[i] < minage) {
            minage = age[i]; /* new min age found */ 
            minagecnt = 0;
            minagegrp[minagecnt] = i; /* save the age index */ }
        else if (age[i] == maxage) {
            minagecnt = minagecnt + 1; /* tie max age found */ 
            maxagegrp[maxagecnt] = i; /* save the age index */ }
    }

    for (i=0; i<100; i=i+1) {
        if (score[i] > maxscore) {
            maxscore = score[i]; /* new max score found */ 
            maxscorecnt = 0;
            maxscoregrp[maxscorecnt] = i; /* save the score index */ }
        else if (score[i] == maxscore) {
            maxscorecnt = maxscorecnt + 1; /* tie max score found */ 
            maxscoregrp[maxscorecnt] = i; /* save the score index */}
    }

        for (i=0; i<100; i=i+1) {
        if (score[i] < minscore) {
            minscore = score[i]; /* new min score found */ 
            minscorecnt = 0;
            minscoregrp[minscorecnt] = i; /* save the score index */ }
        else if (score[i] == minscore) {
            minscorecnt = minscorecnt + 1; /* tie max score found */ 
            maxscoregrp[maxscorecnt] = i; /* save the score index */ }
    }
    for (i=0; i <= maxagecnt; i=i+1)
    printf ("score for an oldest student = %d\n", score[maxagegrp[i]]);
    for (i=0; i >= minagecnt; i=i+1)
    printf ("score for a youngest student = %d\n", score[minagegrp[i]]);
}