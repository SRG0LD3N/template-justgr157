while True:
    print("\n--- MENU ---")
    print("1. Factorial de un numero")
    print("2. Determinar subsidio de familia")
    print("3. Salir")
    opcion = int(input("Ingrese una opcion: "))

    if opcion == 1:
        n = int(input("Ingrese un numero: "))
        fact = 1
        for i in range(1, n + 1):
            fact *= i
        print("El factorial es:", fact)

    elif opcion == 2:
        hijos = int(input("Ingrese cantidad de hijos: "))
        if hijos == 3:
            subsidio = 300
        elif 4 <= hijos <= 5:
            subsidio = 350
        elif hijos > 5:
            subsidio = 400
        else:
            subsidio = 0

        extra = 0
        for i in range(hijos):
            edad = int(input(f"Edad del hijo {i+1}: "))
            if 7 <= edad <= 18:
                extra += subsidio * 0.06

        print("La familia recibe: Q.", subsidio + extra)

    elif opcion == 3:
        print("Saliendo...")
        break
    else:
        
        print("Opcion invalida")
