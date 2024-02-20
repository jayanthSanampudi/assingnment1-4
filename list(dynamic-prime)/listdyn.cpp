//small
#include <iostream>
#include <vector>

using namespace std;

// Function to generate a list of prime numbers up to a given limit using the Sieve of Eratosthenes algorithm
vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

// Function to display the list of prime numbers
void displayPrimes(const vector<int>& primes) {
    cout << "List of Prime Numbers: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the limit for prime numbers: ";
    int limit;
    cin >> limit;

    if (limit < 2) {
        cout << "There are no prime numbers within the specified limit." << endl;
        return 0;
    }

    vector<int> primeList = generatePrimes(limit);
    displayPrimes(primeList);

    return 0;
}
