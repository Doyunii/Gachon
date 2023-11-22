#include <stdio.h>
/*
*
* Author : 202037006   권도윤
* File : Exercise12.1.2.c
* Class : Problem Solving
* Date : 2023.09.29
* Summary : sturct name, earning per share, price to earnings ratio of a company and calculates stock price
*
*
*

*/
// structure to store stock information
struct Stock {
    char name[20];
    float earningsPerShare;
    float priceToEarningsRatio;
};

// Function to input data for a stock
// 
void inputStockData(struct Stock *stock) {
    printf("Company Name: ");
    scanf("%s", &stock->name);
    printf("Earnings Per Share: ");
    scanf("%f", &stock->earningsPerShare);
    printf("Price to Earnings Ratio: ");
    scanf("%f", &stock->priceToEarningsRatio);
}

// Function to calculate and display stock price
// stock price = earning per share * price to earning Ratio
void calculateDisplayStockPrice(const struct Stock *stock, int stockNumber) {
    float stockPrice = stock->earningsPerShare * stock->priceToEarningsRatio;
    printf("%d - Company Name: %s, Stock Price: $%.2f\n", stockNumber, stock->name, stockPrice);
}

int main() {
    struct Stock stocks[5];

    // Input data for <5> stocks
    for (int i = 0; i < 5; i++) {
        printf("Enter data for %d company:\n", i + 1);
        inputStockData(&stocks[i]);
    }

    // function call of calculate and display
    for (int i = 0; i < 5; i++) {
        calculateDisplayStockPrice(&stocks[i], i + 1);
    }

    return 0;
}
