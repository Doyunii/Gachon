#include <stdio.h>

int main() {
    int maxage = -1, minage = 1000;
    int maxscore = -1, minscore = 1000;
    int maxagecnt = 0, minagecnt = 0, maxscorecnt = 0, minscorecnt = 0;
    int age[100], score[100];
    int maxagegrp[100], minagegrp[100], maxscoregrp[100], minscoregrp[100];
    int i;
    int n = 5; // 학생 수를 나타냅니다.

    printf("%d명의 학생 정보 입력 (나이):\n", n);
    for (i = 0; i < n; i++) {
        printf("학생(%d)의 나이: ", i + 1);
        scanf("%d", &age[i]);
    }

    printf("%d명의 학생 정보 입력 (점수):\n", n);
    for (i = 0; i < n; i++) {
        printf("학생(%d)의 점수: ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < n; i++) {
        if (age[i] > maxage) {
            maxage = age[i]; // 새로운 최고 연령을 찾았습니다.
            maxagecnt = 1; // 최고 연령 카운트 초기화
            maxagegrp[0] = i;
        } else if (age[i] == maxage) {
            maxagecnt++;
            maxagegrp[maxagecnt - 1] = i;
        }

        if (age[i] < minage) {
            minage = age[i];
            minagecnt = 1;
            minagegrp[0] = i;
        } else if (age[i] == minage) {
            minagecnt++;
            minagegrp[minagecnt - 1] = i;
        }

        if (score[i] > maxscore) {
            maxscore = score[i];
            maxscorecnt = 1;
            maxscoregrp[0] = i;
        } else if (score[i] == maxscore) {
            maxscorecnt++;
            maxscoregrp[maxscorecnt - 1] = i;
        }

        if (score[i] < minscore) {
            minscore = score[i];
            minscorecnt = 1;
            minscoregrp[0] = i;
        } else if (score[i] == minscore) {
            minscorecnt++;
            minscoregrp[minscorecnt - 1] = i;
        }
    }

    printf("나이가 가장 많은 학생의 점수:\n");
    for (i = 0; i < maxagecnt; i++) {
        printf("나이: %d, 점수: %d\n", age[maxagegrp[i]], score[maxagegrp[i]]);
    }

    printf("나이가 가장 어린 학생의 점수:\n");
    for (i = 0; i < minagecnt; i++) {
        printf("나이: %d, 점수: %d\n", age[minagegrp[i]], score[minagegrp[i]]);
    }

    printf("점수가 가장 높은 학생의 나이:\n");
    for (i = 0; i < maxscorecnt; i++) {
        printf("나이: %d, 점수: %d\n", age[maxscoregrp[i]], score[maxscoregrp[i]]);
    }

    printf("점수가 가장 낮은 학생의 나이:\n");
    for (i = 0; i < minscorecnt; i++) {
        printf("나이: %d, 점수: %d\n", age[minscoregrp[i]], score[minscoregrp[i]]);
    }

    return 0;
}