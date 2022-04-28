#include <iostream>

void sorting(double pDouble[4], int n);
void sorting(int pInt[4], int n);

int main() {
    double arr[4] {1, 17, 5, 21};
    sorting(arr, 4);
}

void sorting(double pDouble[4], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pDouble[r] < pDouble[r+1])
            {
                int swap = pDouble[r];
                pDouble[r] = pDouble[r+1];
                pDouble[r+1] = swap;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        std::cout << pDouble[i] << " ";
    }
}
void sorting(int pInt[4], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pInt[r] < pInt[r+1])
            {
                int swap = pInt[r];
                pInt[r] = pInt[r+1];
                pInt[r+1] = swap;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        std::cout << pInt[i] << " ";
    }
}
