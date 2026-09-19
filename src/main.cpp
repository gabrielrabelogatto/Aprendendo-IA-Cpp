#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor valor = torch::tensor({-5.0, 2.0, -1.0, 8.0});

    torch::Tensor resultado = torch::relu(valor);

    cout << resultado << endl;

    return 0;
}