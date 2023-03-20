#include <stdio.h>

int main() {
    // Distância entre Ribeirão Preto e Franca
    float distance = 100.0;
    
    // Velocidade do carro em km/h
    float car_speed = 110.0;
    
    // Velocidade do caminhão em km/h
    float truck_speed = 80.0;
    
    // Tempo que o caminhão leva para passar em cada pedágio em minutos
    float toll_time = 5.0;
    
    // Tempo que o carro leva para percorrer a distância entre as cidades em horas
    float car_time = distance / car_speed;
    
    // Tempo que o caminhão leva para percorrer a distância entre as cidades em horas,
    // considerando os pedágios
    float truck_time = (distance / truck_speed) + (2 * toll_time / 60.0);
    
    // Distância percorrida pelo carro até o ponto de encontro
    float car_distance = car_time * truck_speed;
    
    // Distância percorrida pelo caminhão até o ponto de encontro
    float truck_distance = truck_time * car_speed;
    
    // Verifica qual veículo está mais próximo de Ribeirão Preto
    if (car_distance < truck_distance) {
        printf("O carro está mais próximo de Ribeirão Preto.\n");
    } else {
        printf("O caminhão está mais próximo de Ribeirão Preto.\n");
    }
    
    return 0;
}
