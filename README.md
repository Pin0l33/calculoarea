# CALCULOAREA

Calculadora modular del área de un círculo en C++ (diseño Top-Down), con validación del dato ingresado y una diana de tiro simulada en ASCII.

- **Materia:** Laboratorio de Programación (LPR) — 5° 3° A-B
- **Escuela:** E.E.S.T. N° 1 "Eduardo Ader", Vicente López
- **Estudiante:** Lucas Del Pino

## Qué hace

1. Pide el radio de un círculo en cm.
2. Valida que sea mayor a cero (filtro de consistencia).
3. Calcula el área con la función `calcularAreaCirculo(double r)` usando `A = π · r²`, con `π` declarado como `const`.
4. Muestra el área y dibuja una diana (mini, estándar o gigante) según el radio.

## Estructura

```
calculoarea/
├── .gitignore
├── LICENSE
├── README.md
├── docs/InformeProyectoCALCULOAREA.pdf
├── src/main.cpp
└── capturas/
    ├── compilacion_area.png
    └── diagrama_flujo.png
```

## Compilar y ejecutar (PowerShell, Windows)

```powershell
g++ src/main.cpp -o src/area.exe
.\src\area.exe
```

## Ejemplo

```
=> Ingrese el radio del circulo/diana (en cm): 8
[SISTEMA] El area del circulo es: 201.062 cm2
```

Licencia MIT (uso escolar).