nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
nota3 = float(input("Digite a terceira nota: "))

media = (nota1 + nota2 + nota3) / 3

print("Sua média é: ", media)

if media >= 6:
    print("Parabéns você passou!")
elif media == 5:
    print("Você está de recuperação")
else:
    print("Você reprovou!")