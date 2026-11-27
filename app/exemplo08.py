#exemplo de listats
primeira_lista = [20, 45, "casa", -4, 5.6]
primeira_lista.append("85")
primeira_lista[2] = 100
primeira_lista.insert(2, "bobo")
print(primeira_lista)

segunda_lista = []
segunda_lista.append("Domingo")
segunda_lista.append("Segunda-feira")
segunda_lista.append("Terça-feira")
segunda_lista.append("Quarta-feira")
segunda_lista.append("Quinta-feira")
segunda_lista.append("Sexta-feira")
segunda_lista.append("Sábado")

for i in range(len(segunda_lista)):
    print(segunda_lista[i])