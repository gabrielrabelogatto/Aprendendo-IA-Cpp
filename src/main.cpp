#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
    torch::Tensor numeroAleatorio = torch::randn({2, 3});

    cout << numeroAleatorio << endl;

    return 0;
}