function factorialIterative(n) {
    let result = 1;
    for (let i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

const number = 5;
const resultIterative = factorialIterative(number);
console.log(`Factorial of ${number} (using iteration) is ${resultIterative}`);
