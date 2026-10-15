#include <iostream>

using namespace std;

// ====================================================================
// 1. PROTOTIPO DE LA FUNCIÓN (Firma de la función)
// Le avisamos al compilador la existencia del módulo de cálculo antes del main
// ====================================================================
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Nombre y Apellido reales en la salida de pantalla.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << "  CALCULADORA DE AREA MODULAR - ESTUDIANTE: Lucas Del Pino  " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // FILTRO DE CONSISTENCIA (Validación del dato geométrico)
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1; // Salida controlada del sistema indicando error en consola
    }

    // ====================================================================
    // 2. LLAMADA / INVOCACIÓN DE LA FUNCIÓN
    // Se invoca al módulo 'calcularAreaCirculo' pasándole 'radioEstudiante'
    // y se guarda el resultado en la variable decimal 'areaFinal'.
    // ====================================================================
    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // ====================================================================
    // 3. SALIDA DE DATOS
    // Se muestra en pantalla el área calculada utilizando 'areaFinal'.
    // ====================================================================
    cout << "[SISTEMA] El area del circulo es: " << areaFinal << " cm2" << endl;

    // ====================================================================
    // BONUS GAMIFICACIÓN: RENDER DE LA DIANA EN CONSOLA
    // ====================================================================
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;
    if (radioEstudiante <= 5.0) {
        cout << "       .---.       " << endl;
        cout << "      /  X  \\     -> [DIANA MINI / COMPACTA]" << endl;
        cout << "      \\  *  /     " << endl;
        cout << "       '---'       " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | /  O  \\ |   -> [DIANA ESTANDAR DE TIRO]" << endl;
        cout << "    | \\  *  / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;
    } else {
        cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | / .-. \\ |    " << endl;
        cout << "    | |  X  | |   -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << "    | \\ '-' / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;
    }

    cout << "=====================================================" << endl;
    return 0; // Finalización exitosa (Código 0)
}

// ====================================================================
// 4. DEFINICIÓN / DESARROLLO DE LA FUNCIÓN
// Implementa la fórmula A = PI * r^2 con una variable local y la
// constante PI bloqueada en memoria.
// ====================================================================
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;

    double area = PI * r * r; // A = pi * r^2
    return area;
}
