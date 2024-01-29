import random

def escolher_palavra():
	palavras = ["python", "programacao", "desenvolvimento", "computador", "engenharia", "codigo", "funcao", "estrutura de dados", "algoritmos", "linguagem de programacao", "fluxograma", "estrutura condicional", "variavel"]
	return random.choice(palavras)

def exibir_palavra(palavra, letras_adivinhadas):
    exibicao = ""
    for letra in palavra:
        if letra in letras_adivinhadas:
            exibicao += letra + " "
        else:
            exibicao += "_ "
    return exibicao[:-1]

def jogar_forca():
    palavra_secreta = escolher_palavra()
    letras_adivinhadas = []
    tentativas_restantes = 6

    print("-------------------------------------------------")
    print("      	Bem-vindo ao Jogo da Forca!")
    print(" Para este jogo temos palavras que envolvem a \n disciplina de Programação Aplic. à Engenharia!")
    print("-------------------------------------------------")
    
    while True:
        print("\nPalavra: " + exibir_palavra(palavra_secreta,
                                             letras_adivinhadas))
        print("Tentativas restantes:", tentativas_restantes)
        
        if "_" not in exibir_palavra(palavra_secreta, 
                                     letras_adivinhadas):
            print("Parabéns! Você adivinhou a palavra:", 
                  palavra_secreta)
            break
        
        if tentativas_restantes == 0:
            print("Você perdeu! A palavra era:", palavra_secreta)
            break

        palpite = input("Digite uma letra: ").lower()

        if palpite.isalpha() and len(palpite) == 1:
            if palpite in letras_adivinhadas:
                print("Você já tentou esta letra. Tente outra.")
            elif palpite in palavra_secreta:
                print("Boa escolha! A letra está na palavra.")
                letras_adivinhadas.append(palpite)
            else:
                print("Letra incorreta. Tente novamente.")
                tentativas_restantes -= 1
        else:
            print("Entrada inválida. Por favor, digite uma letra.")

if __name__ == "__main__":
    jogar_forca()
