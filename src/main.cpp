#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor a = torch::tensor({10.5, 20.2});
    torch::Tensor b = torch::tensor({2.1, 3.0});

    torch::Tensor soma = a + b;

    cout << soma << endl;

    return 0;
}