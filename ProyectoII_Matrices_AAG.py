def mostrar_menu():
    print("PROYECTO II - ALGORITMOS")
    print("----------------------------------")
    print("1. Suma de dos matrices")
    print("2. Dada una matriz, obtener su transpuesta")
    print("3. Multiplicacion de matrices")
    print("4. Buscar un numero en una matriz")
    print("5. Contar palabras en una cadena")
    print("6. Ordenar las letras de una cadena")
    print("7. Detectar subcadena")
    print("8. Verificar palindromo")
    print("9. Salir")

def suma_matrices():
    f = int(input("Filas: "))
    c = int(input("Columnas: "))
    A = [[int(input()) for j in range(c)] for i in range(f)]
    B = [[int(input()) for j in range(c)] for i in range(f)]
    R = [[A[i][j] + B[i][j] for j in range(c)] for i in range(f)]
    print("Resultado:")
    for fila in R:
        print(*fila)

def transpuesta_matriz():
    f = int(input("Filas: "))
    c = int(input("Columnas: "))
    M = [[int(input()) for j in range(c)] for i in range(f)]
    print("Transpuesta:")
    for j in range(c):
        print(*[M[i][j] for i in range(f)])

def multiplicacion_matrices():
    n = int(input("Filas A: "))
    m = int(input("Columnas A/Filas B: "))
    p = int(input("Columnas B: "))
    A = [[int(input()) for j in range(m)] for i in range(n)]
    B = [[int(input()) for j in range(p)] for i in range(m)]
    C = [[sum(A[i][k] * B[k][j] for k in range(m)) for j in range(p)] for i in range(n)]
    print("Resultado:")
    for fila in C:
        print(*fila)

def buscar_numero_matriz():
    f = int(input("Filas: "))
    c = int(input("Columnas: "))
    M = [[int(input()) for j in range(c)] for i in range(f)]
    num = int(input("Numero a buscar: "))
    encontrado = False
    for i in range(f):
        for j in range(c):
            if M[i][j] == num:
                print("Encontrado en (%d,%d)" % (i, j))
                encontrado = True
    if not encontrado:
        print("No encontrado")

def contar_palabras():
    texto = input("Ingrese cadena: ")
    palabras = texto.split()
    print("Cantidad de palabras:", len(palabras))

def ordenar_letras():
    cad = input("Ingrese cadena: ")
    print("Ordenada:", "".join(sorted(cad)))

def detectar_subcadena():
    texto = input("Texto: ")
    sub = input("Subcadena: ")
    if sub in texto:
        print("Encontrada")
    else:
        print("No encontrada")

def verificar_palindromo():
    cad = input("Ingrese cadena: ")
    limpio = "".join(c.lower() for c in cad if c.isalnum())
    if limpio == limpio[::-1]:
        print("Es palindromo")
    else:
        print("No es palindromo")

def main():
    while True:
        mostrar_menu()
        opcion = input("Ingrese una opcion: ")
        if opcion == "1":
            suma_matrices()
        elif opcion == "2":
            transpuesta_matriz()
        elif opcion == "3":
            multiplicacion_matrices()
        elif opcion == "4":
            buscar_numero_matriz()
        elif opcion == "5":
            contar_palabras()
        elif opcion == "6":
            ordenar_letras()
        elif opcion == "7":
            detectar_subcadena()
        elif opcion == "8":
            verificar_palindromo()
        elif opcion == "9":
            print("Saliendo del programa...")
            break
        else:
            print("Opcion invalida. Intente de nuevo.")
        print()

if __name__ == "__main__":
    main()
