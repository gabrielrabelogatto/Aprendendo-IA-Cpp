#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor entrada = torch::tensor({10, 5});
    torch::Tensor peso = torch::tensor({0.5, 0.2});

    torch::Tensor bias = torch::tensor({1.0});

    torch::Tensor resultado = entrada * peso;

    torch::Tensor saida = resultado.sum() + bias;

    cout << saida << endl;

    return 0;
}