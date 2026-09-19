#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor resposta = torch::tensor({7.0});
    torch::Tensor certaResposta = torch::tensor({10.0});

    torch::Tensor resultado = torch::pow(resposta - certaResposta, 2);

    cout << resultado << endl;

    return 0;
}