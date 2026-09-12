#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor numeros = torch::tensor({1.0, 2.0, 3.0});

    cout << numeros << endl;

    return 0;
}