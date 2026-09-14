#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor entrada = torch::tensor({10, 5});
    torch::Tensor peso = torch::tensor({0.5, 0.2});

    torch::Tensor resultado = entrada * peso;

    torch::Tensor saida = resultado.sum();

    cout << saida << endl;

    return 0;
}