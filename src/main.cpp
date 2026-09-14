#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor entrada = torch::tensor({10});
    torch::Tensor peso = torch::tensor({0.5});

    torch::Tensor saida = entrada * peso;

    cout << saida << endl;

    return 0;
}