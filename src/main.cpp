#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {

    torch::Tensor entrada = torch::tensor({3.0, 5.0});
    torch::Tensor peso = torch::tensor({-2.0, 1.0});

    torch::Tensor bias = torch::tensor({3.0});

    torch::Tensor saida = (entrada * peso).sum() + bias;

    cout << "Saida: " << saida.item<float>() << endl;

    if(saida.item<float>() > 0) {
        cout << "Pular" << endl;
    } else {
        cout << "Não pular" << endl;
    }

    return 0;
}