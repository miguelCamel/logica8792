dia_semana = int(input("Digite um número entre 1 e 7: "))


match dia_semana:
    case 1:
        resposta = "Domingo"
    case 2:
        resposta = "Segunda-Feira"
    case 3:
        resposta = "Terça-Feira"
    case 4:
        resposta = "Quarta-Feira"
    case 5:
        resposta = "Quinta-Feira"
    case 6:
        resposta = "Sexta-Feira"
    case 7:
        resposta = "Sábado"
    case _:
        resposta = "Número inválido"
print(f"A resposta é: {resposta}")