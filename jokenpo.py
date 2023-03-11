import random

def jogar():
    usuraio = input("escolha um: 'r' para pedra, 'p' para papel, 't' para tesoura\n")
    computador = random.choice(['r', 'p', 't'])

    if usuraio == computador:
        return 'Empatou :/'

    if ganhar(usuraio, computador):
        return "você ganhou! :D"

    return "você perdeu ;-;"

def ganhar(jogador, oponente):
    if (jogador == 'r' and oponente == 't') or (jogador == 't' and oponente == 'p') or (jogador == 'p' and oponente =='r'):
        return True

print(jogar())
