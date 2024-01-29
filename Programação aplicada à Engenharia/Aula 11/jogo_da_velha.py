def escolher(escolha,simbolo,l1,opcao): 
    """
    Parameters
    ----------
    escolha : posição selecionada pelo jogador.
    simbolo : X ou O.
    l1 : lista contendo o jogo da velha com posições marcadas e disponíveis.
    opcao : Quantidade de posições disponíveis.

    Returns
    -------
    l1 : lista contendo o jogo da velha com posições marcadas e disponíveis.
    opcao : Quantidade de posições disponíveis + 1 caso o jogador não escolha
    posições repetidas ou inexistentes.

    """
    #os jogadores escolhem suas posições e são substituidas pelos simbolos
    if escolha in l1:
        l1 = l1.replace(escolha, simbolo)
        opcao += 1
    else:
        print("Opção indisponível. Tente novamente!1\n")
    return l1,opcao

def verifica_jogo_velha(opcao, simbolo, i):
    """
    Parameters
    ----------
    opcao : Quantidade de posições disponíveis.
    simbolo : Representa o simbolo X ou O.
    i : Posição do símbolo na lista.

    Returns
    -------
    opcao : Quantidade de posições disponíveis + 1 caso o jogador não escolha
    posições repetidas ou inexistentes.
    verifica : Caso o jogador tenha ganho, a variável verifica=1.

    """
    verifica = 0
    if simbolo == l1[i] and simbolo == l1[i+2] and simbolo == l1[i+4]:
        verifica = 1
    if simbolo == l1[i] and simbolo == l1[i+6] and simbolo == l1[i+12]:
        verifica = 1
    if simbolo == l1[i] and simbolo == l1[i+8] and simbolo == l1[i+16]:
        verifica = 1
    if simbolo == l1[i+2] and simbolo == l1[i+8] and simbolo == l1[i+14]:
        verifica = 1
    if simbolo == l1[i+4] and simbolo == l1[i+10] and simbolo == l1[i+16]:
        verifica = 1
    if simbolo == l1[i+4] and simbolo == l1[i+8] and simbolo == l1[i+12]:
        verifica = 1
    if simbolo == l1[i+6] and simbolo == l1[i+8] and simbolo == l1[i+10]:
        verifica = 1
    if simbolo == l1[i+12] and simbolo == l1[i+14] and simbolo == l1[i+16]:
        verifica = 1
    if verifica == 1:
        print("Parabéns! Você ganhou o jogo da velha!")
        opcao = 9
    return opcao,verifica

if __name__ == '__main__':
    #inicio do jogo
    print("\n-------------------------------------")
    print("Bem-Vindo ao Jogo da Velha!")
    
    opcao = 0
    l1="1|2|3\n4|5|6\n7|8|9"
    
    while opcao!=9:
        print("-------------------------------------")
        print("Rodada ",opcao)
        print("------------")
        print("\nEscolha uma posição livre entre 1 a 9\n")
        print(l1)
        
        #escolha da posição que o jogador deseja
        escolha=input("Digite a opção: ")
        if opcao % 2 != 0: #se impar X se par O
            l1,opcao = escolher(escolha,'X',l1,opcao)
            opcao,verifica = verifica_jogo_velha(opcao,'X',0)
        else:
            l1,opcao = escolher(escolha,'O',l1,opcao)
            opcao,verifica = verifica_jogo_velha(opcao,'O',0)
    if verifica == 0:
        print("Empate!")
    print(l1)
