while True:
    try:
        numero = float(input("Digite um número: "))
        break
    except ValueError:
        print("Valor inválido. Porfavor, digite um número válido.")